/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0064960
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C0101734 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0270DD4 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C002AEB8 (GreUpdateSprite.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006B6E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0162788 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(struct XDCOBJ *a1, int a2)
{
  int v3; // r13d
  unsigned int updated; // edi
  HDEV v6; // rsi
  __int64 v7; // r10
  struct tagSIZE v8; // rax
  HDC v9; // rdi
  HWND v10; // r12
  __int64 v11; // rcx
  struct REGION *v12; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  struct tagRECT v16; // xmm0
  unsigned int v17; // r12d
  unsigned int left; // eax
  struct tagRECT *v19; // r13
  __int64 v20; // r9
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // eax
  LONG v24; // ecx
  NTSTATUS v25; // eax
  int v26; // [rsp+88h] [rbp-80h]
  struct tagSIZE v27; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v28; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v30; // [rsp+A8h] [rbp-60h] BYREF
  __m256i Parameter; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-30h]
  struct tagSIZE *v33; // [rsp+E0h] [rbp-28h]
  HDC v34; // [rsp+E8h] [rbp-20h]
  POINTL *v35; // [rsp+F0h] [rbp-18h]
  __int64 v36; // [rsp+F8h] [rbp-10h]
  struct tagRECT *v37; // [rsp+100h] [rbp-8h]
  __int64 v38; // [rsp+108h] [rbp+0h]
  int v39; // [rsp+110h] [rbp+8h]
  int v40; // [rsp+114h] [rbp+Ch]
  int v41; // [rsp+118h] [rbp+10h]
  int v42; // [rsp+11Ch] [rbp+14h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  int v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+148h] [rbp+40h]
  _DWORD v46[84]; // [rsp+158h] [rbp+50h] BYREF

  v3 = 0;
  updated = 0;
  HDEV = UserGetHDEV();
  v6 = (HDEV)HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( !g_pDwmState )
  {
    GdiUpdateSpriteDevLockEnd(a1);
    goto LABEL_10;
  }
  if ( (unsigned int)GreGetBounds(**(_QWORD **)a1, &v30, 4LL) )
  {
    v7 = *(_QWORD *)a1;
    v8 = *(struct tagSIZE *)(*(_QWORD *)a1 + 512LL);
    v27 = v8;
    v28 = *(struct REGION **)(v7 + 1168);
    if ( !v28 )
    {
      EtwDevLockEndUpdate(
        *(_QWORD *)(v7 + 472),
        (unsigned int)v8.cx,
        (unsigned int)v27.cy,
        (unsigned int)v30.left,
        v30.top,
        v30.right,
        v30.bottom);
      v9 = **(HDC **)a1;
      v10 = *(HWND *)(*(_QWORD *)a1 + 472LL);
      if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
      {
        Parameter.m256i_i64[0] = (__int64)v6;
        v33 = &v27;
        Parameter.m256i_i64[1] = (__int64)v10;
        v37 = &v30;
        v32 = 0LL;
        v43 = 0LL;
        *(_OWORD *)&Parameter.m256i_u64[2] = 0LL;
        v34 = v9;
        v35 = &gptlZero;
        v36 = 0LL;
        v38 = 0LL;
        v39 = 0;
        v40 = 1075838976;
        v41 = 1;
        v42 = a2;
        v25 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000uLL, 1u, 0LL);
        updated = v43;
        if ( v25 < 0 )
          updated = 0;
      }
      else
      {
        updated = GreUpdateSpriteInternal(
                    v6,
                    v10,
                    0LL,
                    0LL,
                    0LL,
                    &v27,
                    v9,
                    (struct tagPOINT *)&gptlZero,
                    0,
                    0LL,
                    0x40200000u,
                    &v30,
                    0LL,
                    1,
                    a2);
      }
      goto LABEL_8;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v28) != 1 )
    {
      v15 = 1016LL;
      if ( (*(_DWORD *)(v14 + 40) & 1) != 0 )
        v15 = 1024LL;
      RGNOBJ::bOffset((RGNOBJ *)&v28, (struct _POINTL *)(v14 + v15));
      v38 = 0LL;
      v39 = 0;
      v44 = 1;
      v45 = 0LL;
      v35 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&Parameter, v28, (struct ERECTL *)&v30, 1);
      memset(v46, 0, 0x144uLL);
      switch ( Parameter.m256i_i8[20] )
      {
        case 1:
          v16 = *(struct tagRECT *)((char *)Parameter.m256i_i64 + 4);
LABEL_20:
          *(struct tagRECT *)&v46[1] = v16;
          v46[0] = 1;
          v26 = 0;
LABEL_21:
          updated = 1;
          if ( v3 )
            goto LABEL_41;
          while ( 1 )
          {
            v17 = 0;
            if ( v46[0] )
            {
              do
              {
                left = v30.left;
                v19 = (struct tagRECT *)&v46[4 * v17 + 1];
                v20 = (unsigned int)v19->left;
                if ( (int)v20 < v30.left )
                {
                  v19->left = v30.left;
                  v20 = left;
                }
                top = v19->top;
                if ( top < v30.top )
                {
                  v19->top = v30.top;
                  top = v46[4 * v17 + 2];
                }
                right = v19->right;
                if ( right > v30.right )
                {
                  v19->right = v30.right;
                  right = v46[4 * v17 + 3];
                }
                bottom = v19->bottom;
                v24 = v30.bottom;
                if ( bottom > v30.bottom )
                {
                  v19->bottom = v30.bottom;
                  bottom = v24;
                }
                EtwDevLockEndTightUpdate(
                  *(_QWORD *)(*(_QWORD *)a1 + 472LL),
                  (unsigned int)v27.cx,
                  (unsigned int)v27.cy,
                  v20,
                  top,
                  right,
                  bottom);
                if ( !GreUpdateSprite(
                        v6,
                        *(HWND *)(*(_QWORD *)a1 + 472LL),
                        0LL,
                        0LL,
                        0LL,
                        &v27,
                        **(HDC **)a1,
                        (struct tagPOINT *)&gptlZero,
                        0,
                        0LL,
                        0x40200000u,
                        v19,
                        0LL,
                        1,
                        a2) )
                  updated = 0;
                ++v17;
              }
              while ( v17 < v46[0] );
              v3 = v26;
            }
            if ( !v3 )
              break;
LABEL_41:
            v3 = XCLIPOBJ::bEnum((XCLIPOBJ *)&Parameter, 0x144u, v46, 0LL);
            v26 = v3;
          }
          break;
        case 0:
          v16 = v30;
          goto LABEL_20;
        case 3:
          v3 = 1;
          v26 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)&Parameter, 0, 0, 4u, 0x14u);
          goto LABEL_21;
      }
    }
  }
LABEL_8:
  v11 = *(_QWORD *)a1;
  v12 = *(struct REGION **)(*(_QWORD *)a1 + 1168LL);
  if ( v12 && v12 != prgnDefault )
  {
    FreeObject(*(_QWORD *)(*(_QWORD *)a1 + 1168LL), 4LL);
    v11 = *(_QWORD *)a1;
  }
  *(_QWORD *)(v11 + 1168) = 0LL;
LABEL_10:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return updated;
}
