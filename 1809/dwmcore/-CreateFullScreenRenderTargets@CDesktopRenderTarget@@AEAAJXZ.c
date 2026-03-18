/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180159B38
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008AD10 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x18007C48C (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007C564 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007E678 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800D82D8 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800EA7F4 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x1801E1E08 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  int v2; // r15d
  int v3; // r12d
  int v4; // r13d
  int CurrentDisplaySet; // eax
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
  unsigned int v17; // eax
  int v18; // eax
  int v19; // r14d
  BOOL v20; // ecx
  int v21; // edx
  BOOL v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // rdi
  __int64 v25; // rbx
  CHwndRenderTarget *v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r9d
  unsigned int v37; // [rsp+28h] [rbp-89h]
  unsigned int v38; // [rsp+28h] [rbp-89h]
  unsigned int v39; // [rsp+28h] [rbp-89h]
  char v40; // [rsp+30h] [rbp-81h]
  char v41; // [rsp+30h] [rbp-81h]
  char v42; // [rsp+38h] [rbp-79h]
  char v43; // [rsp+38h] [rbp-79h]
  int v44; // [rsp+48h] [rbp-69h]
  CHwndRenderTarget *v45; // [rsp+50h] [rbp-61h] BYREF
  int v46; // [rsp+58h] [rbp-59h]
  CDisplaySet *v47; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v48; // [rsp+68h] [rbp-49h]
  unsigned int v49; // [rsp+6Ch] [rbp-45h]
  unsigned __int64 v50[2]; // [rsp+70h] [rbp-41h] BYREF
  int v51; // [rsp+80h] [rbp-31h]
  int v52; // [rsp+84h] [rbp-2Dh]
  unsigned int v53; // [rsp+88h] [rbp-29h]
  void *v54[2]; // [rsp+90h] [rbp-21h] BYREF
  int v55; // [rsp+A0h] [rbp-11h]
  unsigned int v56; // [rsp+A4h] [rbp-Dh]
  unsigned int v57; // [rsp+A8h] [rbp-9h]
  _BYTE v58[16]; // [rsp+B0h] [rbp-1h] BYREF
  struct CDisplay *v59; // [rsp+C0h] [rbp+Fh] BYREF
  __int128 v60; // [rsp+C8h] [rbp+17h] BYREF

  v59 = 0LL;
  v57 = 0;
  v47 = 0LL;
  v45 = 0LL;
  v54[0] = v58;
  v55 = 2;
  v54[1] = v58;
  v2 = 0;
  v56 = 2;
  v3 = 0;
  v4 = 0;
  v44 = 0;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v47);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802BC058, 2u, CurrentDisplaySet, 0x1E3u);
  }
  else
  {
    v8 = *((_QWORD *)this + 43);
    if ( v8 && *(_DWORD *)(v8 + 56) )
    {
      v9 = 0LL;
      v46 = 0;
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v8 + 64) + 8 * v9);
        if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v47, *(HMONITOR *)(*(_QWORD *)(v10 + 56) + 520LL), &v59) >= 0 )
        {
          v11 = *(CHwndRenderTarget **)(v10 + 56);
          v51 = 0;
          v52 = 0;
          v53 = 0;
          v12 = v59;
          *(_OWORD *)v50 = 0LL;
          if ( *((_BYTE *)v11 + 867) )
          {
            v13 = *(_OWORD *)((char *)v59 + 120);
            *((_DWORD *)v59 + 32) -= *((_DWORD *)v59 + 30);
            *((_DWORD *)v12 + 33) -= *((_DWORD *)v12 + 31);
            *(_OWORD *)((char *)v12 + 136) = v13;
            *((_BYTE *)v12 + 324) = 1;
            *((_QWORD *)v12 + 15) = 0LL;
            v11 = *(CHwndRenderTarget **)(v10 + 56);
          }
          v42 = *((_BYTE *)this + 329);
          v40 = *((_BYTE *)this + 312);
          v37 = *((_DWORD *)this + 73);
          v60 = *(_OWORD *)((char *)this + 296);
          inited = CHwndRenderTarget::InitFullScreen(v11, (__int64)this, (__int64)v12, &v60, v37, v40, v42);
          v7 = inited;
          if ( inited < 0 )
          {
            v39 = 519;
LABEL_70:
            v35 = inited;
            goto LABEL_71;
          }
          v15 = (CHwndRenderTarget *)v57;
          v16 = v48;
          *(_QWORD *)&v60 = *(_QWORD *)(v10 + 56);
          v17 = v57 + 1;
          if ( v57 + 1 >= v57 )
            v16 = v57 + 1;
          v7 = v17 < v57 ? 0x80070216 : 0;
          v48 = v16;
          if ( v17 < v57 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v7, 0xB5u);
          }
          else if ( v16 > v56 )
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v54, 8, 1, &v60);
            v7 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v18, 0xC0u);
          }
          else
          {
            *((_QWORD *)v54[0] + v57) = v60;
            v57 = v16;
          }
          if ( v7 < 0 )
          {
            v39 = 521;
            goto LABEL_68;
          }
          v19 = v44;
          v20 = v3 <= v44 || v2 <= v4;
          v21 = *((_DWORD *)v12 + 32);
          v22 = v21 <= *((_DWORD *)v12 + 30) || *((_DWORD *)v12 + 33) <= *((_DWORD *)v12 + 31);
          if ( v20 )
          {
            if ( v22 )
            {
              v2 = 0;
              v3 = 0;
              v4 = 0;
              v44 = 0;
            }
            else
            {
              v60 = *(_OWORD *)((char *)v12 + 120);
              v2 = HIDWORD(v60);
              v3 = DWORD2(v60);
              v4 = DWORD1(v60);
              v44 = v60;
            }
          }
          else if ( !v22 )
          {
            if ( *((_DWORD *)v12 + 30) < v44 )
              v19 = *((_DWORD *)v12 + 30);
            v44 = v19;
            if ( *((_DWORD *)v12 + 31) < v4 )
              v4 = *((_DWORD *)v12 + 31);
            if ( v21 > v3 )
              v3 = *((_DWORD *)v12 + 32);
            if ( *((_DWORD *)v12 + 33) > v2 )
              v2 = *((_DWORD *)v12 + 33);
          }
          inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef(v47, v12, v50);
          v7 = inited;
          if ( inited < 0 )
          {
            v39 = 527;
            goto LABEL_70;
          }
          v23 = v53;
          v24 = 0LL;
          if ( v53 )
          {
            while ( 1 )
            {
              v25 = *(_QWORD *)(v50[0] + 8 * v24);
              v26 = (CHwndRenderTarget *)CHwndRenderTarget::operator new();
              v15 = v26 ? CHwndRenderTarget::CHwndRenderTarget(v26, *((struct CComposition **)this + 2)) : 0LL;
              v45 = v15;
              if ( !v15 )
                break;
              v43 = *((_BYTE *)this + 329);
              v41 = *((_BYTE *)this + 312);
              v38 = *((_DWORD *)this + 73);
              v60 = *(_OWORD *)((char *)this + 296);
              inited = CHwndRenderTarget::InitFullScreen(v15, (__int64)this, v25, &v60, v38, v41, v43);
              v7 = inited;
              if ( inited < 0 )
              {
                v39 = 544;
                goto LABEL_70;
              }
              v15 = (CHwndRenderTarget *)v57;
              v27 = v49;
              v28 = v57 + 1;
              if ( v57 + 1 >= v57 )
                v27 = v57 + 1;
              v7 = v28 < v57 ? 0x80070216 : 0;
              v49 = v27;
              if ( v28 < v57 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v7, 0xB5u);
              }
              else if ( v27 > v56 )
              {
                v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v54, 8, 1, &v45);
                v7 = v29;
                if ( v29 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v29, 0xC0u);
              }
              else
              {
                *((_QWORD *)v54[0] + v57) = v45;
                v57 = v27;
              }
              if ( v7 < 0 )
              {
                v39 = 546;
                goto LABEL_68;
              }
              v45 = 0LL;
              v24 = (unsigned int)(v24 + 1);
              if ( (unsigned int)v24 >= v23 )
                goto LABEL_56;
            }
            v7 = -2147024882;
            v39 = 535;
LABEL_68:
            v35 = v7;
LABEL_71:
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, &dword_1802BC058, 2u, v35, v39);
            DynArrayImpl<1>::~DynArrayImpl<1>((void **)v50);
            goto LABEL_74;
          }
LABEL_56:
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)v50);
        }
        v8 = *((_QWORD *)this + 43);
        v9 = (unsigned int)(v46 + 1);
        v46 = v9;
      }
      while ( (unsigned int)v9 < *(_DWORD *)(v8 + 56) );
      CDesktopRenderTarget::ReleaseRenderTargets(this);
      v30 = 0LL;
      if ( v57 )
      {
        while ( 1 )
        {
          v31 = CDesktopRenderTarget::AddHwndRenderTarget(this, *((CDisplay ***)v54[0] + v30));
          v7 = v31;
          if ( v31 < 0 )
            break;
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= v57 )
            goto LABEL_61;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802BC058, 2u, v31, 0x234u);
      }
      else
      {
LABEL_61:
        v33 = *((_QWORD *)this + 2);
        *((float *)this + 69) = (float)v44;
        *((float *)this + 70) = (float)v4;
        *((float *)this + 71) = (float)v3;
        *((float *)this + 72) = (float)v2;
        v34 = *(_QWORD *)(v33 + 360);
        if ( v34 )
          *(_BYTE *)(v34 + 20) = 1;
      }
    }
  }
LABEL_74:
  if ( v45 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v45 + 16LL))(v45);
    v45 = 0LL;
  }
  ReleaseInterface<CDisplaySet const>(&v47);
  DynArrayImpl<1>::~DynArrayImpl<1>(v54);
  return (unsigned int)v7;
}
