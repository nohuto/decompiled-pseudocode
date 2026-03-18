/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0049B60 (UserSetDCVisRgn.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C000F200 (GreSetRectRgn.c)
 *     GreSelectVisRgn @ 0x1C0017C00 (GreSelectVisRgn.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0027100 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0049D80 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0049F1C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     IntersectRect @ 0x1C004CB8C (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C004D444 (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C004F3F0 (GetMonitorRectForDpi.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0077078 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0077098 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BBF58 (--1DCOBJA@@QEAA@XZ.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  int v5; // r12d
  __int64 v6; // rcx
  __m128i *ScreenRectForDpi; // rax
  __m128i v8; // xmm1
  __int64 v9; // rax
  unsigned __int64 v10; // xmm0_8
  int v11; // r14d
  int v12; // ebx
  __int128 v13; // xmm0
  struct tagMONITOR *v14; // rdi
  __int64 v15; // rdx
  struct OBJECT *v16; // rdi
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r13d
  int v22; // r12d
  LONG v23; // r12d
  LONG v24; // r13d
  __int64 v25; // rbx
  __int64 v26; // r14
  GdiHandleManager *v27; // rbx
  unsigned int v28; // eax
  struct _ENTRY *v29; // rax
  struct _ENTRY *v30; // rcx
  char v31; // al
  struct OBJECT *EntryObject; // rax
  __int128 v33; // [rsp+38h] [rbp-69h] BYREF
  struct _ENTRY *v34; // [rsp+48h] [rbp-59h] BYREF
  int v35; // [rsp+50h] [rbp-51h]
  int v36; // [rsp+54h] [rbp-4Dh]
  _QWORD v37[2]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-31h] BYREF
  int v39; // [rsp+80h] [rbp-21h]
  __int128 v40; // [rsp+88h] [rbp-19h] BYREF
  char v41[16]; // [rsp+98h] [rbp-9h] BYREF
  char v42[16]; // [rsp+A8h] [rbp+7h] BYREF
  char v43[8]; // [rsp+B8h] [rbp+17h] BYREF
  struct _POINTL v44; // [rsp+110h] [rbp+6Fh] BYREF
  int v45; // [rsp+118h] [rbp+77h]
  char v46; // [rsp+120h] [rbp+7Fh] BYREF

  v45 = a3;
  v5 = a3;
  v33 = 0uLL;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
  if ( (*(_WORD *)(v6 + 42) & 0x3FFF) == 0x29D )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v41, 0LL);
    v8 = *ScreenRectForDpi;
    v9 = ScreenRectForDpi->m128i_i64[0];
    v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
    v11 = v10 - v9;
    v12 = HIDWORD(v10) - HIDWORD(v9);
    DWORD2(v33) = v10 - v9;
    HIDWORD(v33) = HIDWORD(v10) - HIDWORD(v9);
  }
  else
  {
    if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
      v13 = *(_OWORD *)(v6 + 88);
    else
      v13 = *(_OWORD *)(v6 + 104);
    v33 = v13;
    v11 = DWORD2(v13);
    v12 = HIDWORD(v13);
  }
  v14 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
  if ( v14 )
  {
    if ( (*((_DWORD *)a2 + 16) & 0x4000) == 0 )
    {
      v15 = *(_QWORD *)GetMonitorRectForDpi(v42, *((_QWORD *)a2 + 11), 0LL);
      LODWORD(v33) = v33 - v15;
      v11 -= v15;
      DWORD2(v33) = v11;
      DWORD1(v33) -= HIDWORD(v15);
      v12 -= HIDWORD(v15);
      HIDWORD(v33) = v12;
      if ( a1 )
        SetMonitorRegion(v14, a1, a1);
    }
  }
  v16 = 0LL;
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_28;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() >= 0 )
  {
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(*((_QWORD *)a2 + 2));
    v18 = LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0
        && (int)IsGetRedirectionBitmapSupported() >= 0
        && GetRedirectionBitmap(v18) )
      {
        v19 = *(_QWORD *)(v18 + 40);
        v20 = *((_QWORD *)a2 + 11);
        v21 = *(_DWORD *)(v19 + 88);
        v22 = *(_DWORD *)(v19 + 92);
        if ( v20 && *((int *)a2 + 16) < 0 )
        {
          LODWORD(v33) = v21 + v33;
          DWORD1(v33) += v22;
          DWORD2(v33) = v21 + v11;
          HIDWORD(v33) = v22 + v12;
          v40 = *(_OWORD *)GetMonitorRectForDpi(v43, v20, 0LL);
          IntersectRect(&v33, &v33, &v40);
          v12 = HIDWORD(v33);
          v11 = DWORD2(v33);
        }
        v23 = -v22;
        v24 = -v21;
        LODWORD(v33) = v24 + v33;
        DWORD1(v33) += v23;
        DWORD2(v33) = v24 + v11;
        HIDWORD(v33) = v23 + v12;
        if ( a1 )
        {
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v38, a1, 0);
          v25 = v38[0];
          v44.x = v24;
          v44.y = v23;
          if ( v38[0] )
          {
            RGNOBJ::bOffset((RGNOBJ *)v38, &v44);
            v25 = v38[0];
          }
          if ( !v39 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)v38);
          if ( v25 )
            _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
        }
        v5 = v45;
        goto LABEL_30;
      }
LABEL_28:
      if ( a1 )
        GreSetRectRgn(a1, 0, 0, 0, 0);
    }
  }
LABEL_30:
  v26 = *((_QWORD *)a2 + 1);
  v37[1] = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v46);
  v27 = gpHandleManager;
  v35 = 1;
  v28 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v26 | ((unsigned int)v26 >> 8) & 0xFF0000);
  v29 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v27 + 2), v28, 0);
  v30 = v29;
  v34 = v29;
  if ( !v29 )
  {
    v35 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_44;
  }
  _m_prefetchw((char *)v29 + 8);
  v36 = *((_DWORD *)v29 + 2);
  v31 = *((_BYTE *)v29 + 15);
  if ( (v31 & 0x20) != 0 )
    goto LABEL_38;
  if ( (v31 & 0x40) == 0 )
    goto LABEL_40;
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v30 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
  {
LABEL_38:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v34);
    if ( !v35 )
      goto LABEL_44;
  }
  v30 = v34;
LABEL_40:
  if ( *((_BYTE *)v30 + 14) == 1 && *((_WORD *)v30 + 6) == WORD1(v26) )
  {
    v16 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v30 & 0xFFFFFF);
    ++*((_DWORD *)v16 + 2);
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v34);
LABEL_44:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v34);
  v37[0] = v16;
  if ( v16 )
  {
    *((_QWORD *)v16 + (*((_DWORD *)v16 + 10) & 1) + 127) = v33;
    DC::vCalcFillOrigin(v16);
    *(_OWORD *)((char *)v16 + 1032) = v33;
    if ( (unsigned int)DC::bDpiScaleTransform(v16) )
    {
      *((_DWORD *)v16 + 130) |= 4u;
      *((_DWORD *)v16 + 9) |= 0x10u;
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v37);
  if ( v5 )
    GreSelectVisRgn(*((_QWORD *)a2 + 1), (__int64)a1, 1u);
}
