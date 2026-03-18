/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AF968 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800A3850 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800AFD38 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800B0E38 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800DCE18 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DDEE4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800DE11C (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x18015A8D0 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  int v2; // r15d
  int v3; // r12d
  int v4; // r13d
  signed int CurrentDisplaySet; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  CHwndRenderTarget *v12; // rcx
  struct CDisplay *v13; // rdi
  __int128 v14; // xmm0
  int inited; // eax
  CHwndRenderTarget *v16; // rcx
  unsigned int v17; // edx
  signed int v18; // eax
  int v19; // r14d
  BOOL v20; // ecx
  int v21; // edx
  BOOL v22; // eax
  unsigned int v23; // r14d
  __int64 i; // rdi
  __int64 v25; // rbx
  CHwndRenderTarget *v26; // rax
  unsigned int v27; // edx
  signed int v28; // eax
  __int64 v29; // rdi
  signed int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r9d
  int v36; // [rsp+28h] [rbp-89h]
  int v37; // [rsp+28h] [rbp-89h]
  unsigned int v38; // [rsp+28h] [rbp-89h]
  char v39; // [rsp+30h] [rbp-81h]
  char v40; // [rsp+30h] [rbp-81h]
  char v41; // [rsp+38h] [rbp-79h]
  char v42; // [rsp+38h] [rbp-79h]
  int v43; // [rsp+48h] [rbp-69h]
  CHwndRenderTarget *v44; // [rsp+50h] [rbp-61h] BYREF
  int v45; // [rsp+58h] [rbp-59h]
  CDisplaySet *v46; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v47[2]; // [rsp+68h] [rbp-49h] BYREF
  int v48; // [rsp+78h] [rbp-39h]
  int v49; // [rsp+7Ch] [rbp-35h]
  unsigned int v50; // [rsp+80h] [rbp-31h]
  _QWORD v51[2]; // [rsp+88h] [rbp-29h] BYREF
  int v52; // [rsp+98h] [rbp-19h]
  unsigned int v53; // [rsp+9Ch] [rbp-15h]
  unsigned int v54; // [rsp+A0h] [rbp-11h]
  _BYTE v55[16]; // [rsp+A8h] [rbp-9h] BYREF
  struct CDisplay *v56; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v57; // [rsp+C8h] [rbp+17h] BYREF

  v56 = 0LL;
  v54 = 0;
  v46 = 0LL;
  v44 = 0LL;
  v51[0] = v55;
  v52 = 2;
  v51[1] = v55;
  v2 = 0;
  v53 = 2;
  v3 = 0;
  v4 = 0;
  v43 = 0;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v46);
  v8 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802E4668, 2u, CurrentDisplaySet, 0x1EFu, 0LL);
    goto LABEL_70;
  }
  v9 = *((_QWORD *)this + 49);
  if ( v9 && *(_DWORD *)(v9 + 56) )
  {
    v10 = 0LL;
    v45 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 64) + 8 * v10);
      if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v46, *(HMONITOR *)(*(_QWORD *)(v11 + 56) + 520LL), &v56) >= 0 )
        break;
LABEL_53:
      v9 = *((_QWORD *)this + 49);
      v10 = (unsigned int)(v45 + 1);
      v45 = v10;
      if ( (unsigned int)v10 >= *(_DWORD *)(v9 + 56) )
      {
        CDesktopRenderTarget::ReleaseRenderTargets(this);
        v29 = 0LL;
        if ( v54 )
        {
          while ( 1 )
          {
            v30 = CDesktopRenderTarget::AddHwndRenderTarget(this, *(CDisplay ***)(v51[0] + 8 * v29));
            v8 = v30;
            if ( v30 < 0 )
              break;
            v29 = (unsigned int)(v29 + 1);
            if ( (unsigned int)v29 >= v54 )
              goto LABEL_57;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v31, &dword_1802E4668, 2u, v30, 0x240u, 0LL);
        }
        else
        {
LABEL_57:
          v32 = *((_QWORD *)this + 2);
          *((float *)this + 81) = (float)v43;
          *((float *)this + 82) = (float)v4;
          *((float *)this + 83) = (float)v3;
          *((float *)this + 84) = (float)v2;
          v33 = *(_QWORD *)(v32 + 376);
          if ( v33 )
            *(_BYTE *)(v33 + 20) = 1;
        }
        goto LABEL_70;
      }
    }
    v12 = *(CHwndRenderTarget **)(v11 + 56);
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v13 = v56;
    *(_OWORD *)v47 = 0LL;
    if ( *((_BYTE *)v12 + 867) )
    {
      v14 = *(_OWORD *)((char *)v56 + 120);
      *((_DWORD *)v56 + 32) -= *((_DWORD *)v56 + 30);
      *((_DWORD *)v13 + 33) -= *((_DWORD *)v13 + 31);
      *(_OWORD *)((char *)v13 + 136) = v14;
      *((_BYTE *)v13 + 317) = 1;
      *((_QWORD *)v13 + 15) = 0LL;
      v12 = *(CHwndRenderTarget **)(v11 + 56);
    }
    v41 = *((_BYTE *)this + 377);
    v39 = *((_BYTE *)this + 360);
    v36 = *((_DWORD *)this + 85);
    v57 = *(_OWORD *)((char *)this + 344);
    inited = CHwndRenderTarget::InitFullScreen(v12, (__int64)this, (__int64)v13, &v57, v36, v39, v41);
    v8 = inited;
    if ( inited < 0 )
    {
      v38 = 531;
LABEL_66:
      v34 = inited;
LABEL_67:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, &dword_1802E4668, 2u, v34, v38, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v47);
      goto LABEL_70;
    }
    *(_QWORD *)&v57 = *(_QWORD *)(v11 + 56);
    v17 = v54 + 1;
    if ( v54 + 1 >= v54 )
    {
      if ( v17 <= v53 )
      {
        *(_QWORD *)(v51[0] + 8LL * v54) = v57;
        v54 = v17;
LABEL_16:
        v19 = v43;
        v20 = v3 <= v43 || v2 <= v4;
        v21 = *((_DWORD *)v13 + 32);
        v22 = v21 <= *((_DWORD *)v13 + 30) || *((_DWORD *)v13 + 33) <= *((_DWORD *)v13 + 31);
        if ( v20 )
        {
          if ( v22 )
          {
            v2 = 0;
            v3 = 0;
            v4 = 0;
            v43 = 0;
          }
          else
          {
            v57 = *(_OWORD *)((char *)v13 + 120);
            v2 = HIDWORD(v57);
            v3 = DWORD2(v57);
            v4 = DWORD1(v57);
            v43 = v57;
          }
        }
        else if ( !v22 )
        {
          if ( *((_DWORD *)v13 + 30) < v43 )
            v19 = *((_DWORD *)v13 + 30);
          v43 = v19;
          if ( *((_DWORD *)v13 + 31) < v4 )
            v4 = *((_DWORD *)v13 + 31);
          if ( v21 > v3 )
            v3 = *((_DWORD *)v13 + 32);
          if ( *((_DWORD *)v13 + 33) > v2 )
            v2 = *((_DWORD *)v13 + 33);
        }
        inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef((__int64)v46, (__int64)v13, (__int64)v47);
        v8 = inited;
        if ( inited < 0 )
        {
          v38 = 539;
          goto LABEL_66;
        }
        v23 = v50;
        for ( i = 0LL; (unsigned int)i < v23; i = (unsigned int)(i + 1) )
        {
          v25 = *(_QWORD *)(v47[0] + 8 * i);
          v26 = (CHwndRenderTarget *)CHwndRenderTarget::operator new();
          if ( v26 )
            v16 = CHwndRenderTarget::CHwndRenderTarget(v26, *((struct CComposition **)this + 2));
          else
            v16 = 0LL;
          v44 = v16;
          if ( !v16 )
          {
            v8 = -2147024882;
            v38 = 547;
            goto LABEL_64;
          }
          v42 = *((_BYTE *)this + 377);
          v40 = *((_BYTE *)this + 360);
          v37 = *((_DWORD *)this + 85);
          v57 = *(_OWORD *)((char *)this + 344);
          inited = CHwndRenderTarget::InitFullScreen(v16, (__int64)this, v25, &v57, v37, v40, v42);
          v8 = inited;
          if ( inited < 0 )
          {
            v38 = 556;
            goto LABEL_66;
          }
          v27 = v54 + 1;
          if ( v54 + 1 >= v54 )
          {
            if ( v27 <= v53 )
            {
              v8 = 0;
              *(_QWORD *)(v51[0] + 8LL * v54) = v44;
              v54 = v27;
              goto LABEL_51;
            }
            v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v51, 8, 1, &v44);
            v8 = v28;
            if ( v28 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v28, 0xC3u, 0LL);
          }
          else
          {
            v8 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          if ( v8 < 0 )
          {
            v38 = 558;
            goto LABEL_64;
          }
LABEL_51:
          v44 = 0LL;
        }
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v47);
        goto LABEL_53;
      }
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v51, 8, 1, &v57);
      v8 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v18, 0xC3u, 0LL);
    }
    else
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v8 < 0 )
    {
      v38 = 533;
LABEL_64:
      v34 = v8;
      goto LABEL_67;
    }
    goto LABEL_16;
  }
LABEL_70:
  if ( v44 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v44 + 16LL))(v44);
    v44 = 0LL;
  }
  ReleaseInterface<CDisplaySet const>(&v46, v6);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v51);
  return (unsigned int)v8;
}
