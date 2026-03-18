/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A64B8
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B724 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18002819C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18002B42C (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800DDA88 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DE5D4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800DE80C (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x1801591F0 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  int v2; // r15d
  int v3; // r12d
  int v4; // r13d
  signed int CurrentDisplaySet; // eax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  CHwndRenderTarget *v11; // rcx
  struct CDisplay *v12; // rdi
  __int128 v13; // xmm0
  int inited; // eax
  CHwndRenderTarget *v15; // rcx
  unsigned int v16; // edx
  signed int v17; // eax
  int v18; // r14d
  BOOL v19; // ecx
  int v20; // edx
  BOOL v21; // eax
  unsigned int v22; // r14d
  __int64 i; // rdi
  __int64 v24; // rbx
  CHwndRenderTarget *v25; // rax
  unsigned int v26; // edx
  signed int v27; // eax
  __int64 v28; // rdi
  signed int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r9d
  int v35; // [rsp+28h] [rbp-89h]
  int v36; // [rsp+28h] [rbp-89h]
  unsigned int v37; // [rsp+28h] [rbp-89h]
  char v38; // [rsp+30h] [rbp-81h]
  char v39; // [rsp+30h] [rbp-81h]
  char v40; // [rsp+38h] [rbp-79h]
  char v41; // [rsp+38h] [rbp-79h]
  int v42; // [rsp+48h] [rbp-69h]
  CHwndRenderTarget *v43; // [rsp+50h] [rbp-61h] BYREF
  int v44; // [rsp+58h] [rbp-59h]
  CDisplaySet *v45; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v46[2]; // [rsp+68h] [rbp-49h] BYREF
  int v47; // [rsp+78h] [rbp-39h]
  int v48; // [rsp+7Ch] [rbp-35h]
  unsigned int v49; // [rsp+80h] [rbp-31h]
  _QWORD v50[2]; // [rsp+88h] [rbp-29h] BYREF
  int v51; // [rsp+98h] [rbp-19h]
  unsigned int v52; // [rsp+9Ch] [rbp-15h]
  unsigned int v53; // [rsp+A0h] [rbp-11h]
  _BYTE v54[16]; // [rsp+A8h] [rbp-9h] BYREF
  struct CDisplay *v55; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v56; // [rsp+C8h] [rbp+17h] BYREF

  v55 = 0LL;
  v53 = 0;
  v45 = 0LL;
  v43 = 0LL;
  v50[0] = v54;
  v51 = 2;
  v50[1] = v54;
  v2 = 0;
  v52 = 2;
  v3 = 0;
  v4 = 0;
  v42 = 0;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v45);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802E27D8, 2u, CurrentDisplaySet, 0x1EFu, 0LL);
    goto LABEL_70;
  }
  v8 = *((_QWORD *)this + 49);
  if ( v8 && *(_DWORD *)(v8 + 56) )
  {
    v9 = 0LL;
    v44 = 0;
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 64) + 8 * v9);
      if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v45, *(HMONITOR *)(*(_QWORD *)(v10 + 56) + 520LL), &v55) >= 0 )
        break;
LABEL_53:
      v8 = *((_QWORD *)this + 49);
      v9 = (unsigned int)(v44 + 1);
      v44 = v9;
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 56) )
      {
        CDesktopRenderTarget::ReleaseRenderTargets(this);
        v28 = 0LL;
        if ( v53 )
        {
          while ( 1 )
          {
            v29 = CDesktopRenderTarget::AddHwndRenderTarget(this, *(CDisplay ***)(v50[0] + 8 * v28));
            v7 = v29;
            if ( v29 < 0 )
              break;
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= v53 )
              goto LABEL_57;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v30, &dword_1802E27D8, 2u, v29, 0x240u, 0LL);
        }
        else
        {
LABEL_57:
          v31 = *((_QWORD *)this + 2);
          *((float *)this + 81) = (float)v42;
          *((float *)this + 82) = (float)v4;
          *((float *)this + 83) = (float)v3;
          *((float *)this + 84) = (float)v2;
          v32 = *(_QWORD *)(v31 + 376);
          if ( v32 )
            *(_BYTE *)(v32 + 20) = 1;
        }
        goto LABEL_70;
      }
    }
    v11 = *(CHwndRenderTarget **)(v10 + 56);
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v12 = v55;
    *(_OWORD *)v46 = 0LL;
    if ( *((_BYTE *)v11 + 867) )
    {
      v13 = *(_OWORD *)((char *)v55 + 120);
      *((_DWORD *)v55 + 32) -= *((_DWORD *)v55 + 30);
      *((_DWORD *)v12 + 33) -= *((_DWORD *)v12 + 31);
      *(_OWORD *)((char *)v12 + 136) = v13;
      *((_BYTE *)v12 + 317) = 1;
      *((_QWORD *)v12 + 15) = 0LL;
      v11 = *(CHwndRenderTarget **)(v10 + 56);
    }
    v40 = *((_BYTE *)this + 377);
    v38 = *((_BYTE *)this + 360);
    v35 = *((_DWORD *)this + 85);
    v56 = *(_OWORD *)((char *)this + 344);
    inited = CHwndRenderTarget::InitFullScreen(v11, (__int64)this, (__int64)v12, &v56, v35, v38, v40);
    v7 = inited;
    if ( inited < 0 )
    {
      v37 = 531;
LABEL_66:
      v33 = inited;
LABEL_67:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, &dword_1802E27D8, 2u, v33, v37, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v46);
      goto LABEL_70;
    }
    *(_QWORD *)&v56 = *(_QWORD *)(v10 + 56);
    v16 = v53 + 1;
    if ( v53 + 1 >= v53 )
    {
      if ( v16 <= v52 )
      {
        *(_QWORD *)(v50[0] + 8LL * v53) = v56;
        v53 = v16;
LABEL_16:
        v18 = v42;
        v19 = v3 <= v42 || v2 <= v4;
        v20 = *((_DWORD *)v12 + 32);
        v21 = v20 <= *((_DWORD *)v12 + 30) || *((_DWORD *)v12 + 33) <= *((_DWORD *)v12 + 31);
        if ( v19 )
        {
          if ( v21 )
          {
            v2 = 0;
            v3 = 0;
            v4 = 0;
            v42 = 0;
          }
          else
          {
            v56 = *(_OWORD *)((char *)v12 + 120);
            v2 = HIDWORD(v56);
            v3 = DWORD2(v56);
            v4 = DWORD1(v56);
            v42 = v56;
          }
        }
        else if ( !v21 )
        {
          if ( *((_DWORD *)v12 + 30) < v42 )
            v18 = *((_DWORD *)v12 + 30);
          v42 = v18;
          if ( *((_DWORD *)v12 + 31) < v4 )
            v4 = *((_DWORD *)v12 + 31);
          if ( v20 > v3 )
            v3 = *((_DWORD *)v12 + 32);
          if ( *((_DWORD *)v12 + 33) > v2 )
            v2 = *((_DWORD *)v12 + 33);
        }
        inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef((__int64)v45, (__int64)v12, (__int64)v46);
        v7 = inited;
        if ( inited < 0 )
        {
          v37 = 539;
          goto LABEL_66;
        }
        v22 = v49;
        for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
        {
          v24 = *(_QWORD *)(v46[0] + 8 * i);
          v25 = (CHwndRenderTarget *)CHwndRenderTarget::operator new();
          if ( v25 )
            v15 = CHwndRenderTarget::CHwndRenderTarget(v25, *((struct CComposition **)this + 2));
          else
            v15 = 0LL;
          v43 = v15;
          if ( !v15 )
          {
            v7 = -2147024882;
            v37 = 547;
            goto LABEL_64;
          }
          v41 = *((_BYTE *)this + 377);
          v39 = *((_BYTE *)this + 360);
          v36 = *((_DWORD *)this + 85);
          v56 = *(_OWORD *)((char *)this + 344);
          inited = CHwndRenderTarget::InitFullScreen(v15, (__int64)this, v24, &v56, v36, v39, v41);
          v7 = inited;
          if ( inited < 0 )
          {
            v37 = 556;
            goto LABEL_66;
          }
          v26 = v53 + 1;
          if ( v53 + 1 >= v53 )
          {
            if ( v26 <= v52 )
            {
              v7 = 0;
              *(_QWORD *)(v50[0] + 8LL * v53) = v43;
              v53 = v26;
              goto LABEL_51;
            }
            v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v50, 8, 1, &v43);
            v7 = v27;
            if ( v27 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v27, 0xC3u, 0LL);
          }
          else
          {
            v7 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          if ( v7 < 0 )
          {
            v37 = 558;
            goto LABEL_64;
          }
LABEL_51:
          v43 = 0LL;
        }
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v46);
        goto LABEL_53;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v50, 8, 1, &v56);
      v7 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v17, 0xC3u, 0LL);
    }
    else
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v7 < 0 )
    {
      v37 = 533;
LABEL_64:
      v33 = v7;
      goto LABEL_67;
    }
    goto LABEL_16;
  }
LABEL_70:
  if ( v43 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v43 + 16LL))(v43);
    v43 = 0LL;
  }
  ReleaseInterface<CDisplaySet const>(&v45);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v50);
  return (unsigned int)v7;
}
