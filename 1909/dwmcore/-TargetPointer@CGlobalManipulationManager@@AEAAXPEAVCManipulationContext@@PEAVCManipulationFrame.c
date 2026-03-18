/*
 * XREFs of ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x180239740
 * Callers:
 *     ?TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239550 (-TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1800A9C54 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1802338C8 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1802357F8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1802362A8 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802365B0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180236EA0 (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1802391E8 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x18023B004 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18025E978 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 */

void __fastcall CGlobalManipulationManager::TargetPointer(
        CManipulationContext **this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5)
{
  __int64 v6; // rbx
  __int64 v9; // r13
  char *v10; // rbx
  int *v11; // r14
  unsigned __int64 v12; // r12
  __int64 *v13; // rcx
  void **v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // edx
  __int64 v19; // rdx
  struct CInteraction *v20; // rax
  struct CInteraction *HoverTarget; // rax
  __int64 v22; // r8
  int PointerTarget; // r15d
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 (__fastcall *v27)(__int64 *, unsigned __int64, __int64, _QWORD, EVENT_DATA_DESCRIPTOR *, int *); // rax
  __int128 v28; // xmm1
  const struct _TlgProvider_t *v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rdx
  char IsRoute; // al
  char v33; // dl
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-B8h] BYREF
  void **v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  __int128 v47; // [rsp+E0h] [rbp-20h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]

  v35 = 0LL;
  v6 = a4;
  v36 = a5;
  *a5 = 0LL;
  v34 = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
  v9 = 248 * v6;
  v10 = (char *)a3 + 248 * v6 + 144;
  v11 = (int *)(v10 + 4);
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(this + 48), *((_QWORD *)v10 + 10), &v42) )
    v12 = v42;
  else
    v12 = 1000LL * *((unsigned int *)v10 + 16);
  if ( (*((_BYTE *)a3 + 64) & 2) != 0 )
  {
    v13 = (__int64 *)&v35;
    goto LABEL_6;
  }
  if ( (*((_DWORD *)v10 + 3) & 0x40004) != 0 || CManipulationFrame::IsMousewheelFrame(a3) )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)v10,
                      a2,
                      (struct TargetingInfo *)&v34);
    if ( PointerTarget >= 0 && v35 && v34 )
    {
      v24 = *v35;
      v25 = *(_OWORD *)((char *)a3 + 88);
      LOBYTE(v22) = 1;
      pData = *(EVENT_DATA_DESCRIPTOR *)((char *)a3 + 72);
      v26 = *(_OWORD *)((char *)a3 + 104);
      v27 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, EVENT_DATA_DESCRIPTOR *, int *))(v24 + 184);
      v45 = v25;
      v28 = *(_OWORD *)((char *)a3 + 120);
      v46 = v26;
      v48 = (int *)*((_QWORD *)a3 + 17);
      v47 = v28;
      PointerTarget = v27(v35, v12, v22, 0LL, &pData, &v34);
    }
    if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
    {
      *(_QWORD *)&v46 = v10 + 4;
      *(_QWORD *)&v47 = &v43;
      v39 = v34;
      v48 = &v39;
      v40 = *((_DWORD *)v10 + 8);
      v50 = &v40;
      v41 = *((_DWORD *)v10 + 9);
      v52 = &v41;
      v54 = &v42;
      *((_QWORD *)&v46 + 1) = 4LL;
      v43 = v30;
      *((_QWORD *)&v47 + 1) = 8LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      LODWORD(v42) = PointerTarget;
      v55 = 4LL;
      TlgWrite(v29, &unk_1802DDD13, 0LL, 0LL, 8u, &pData);
    }
    InputTraceLogging::GestureTargeting::SetPointerResult(
      *((_QWORD *)a3 + 28),
      *((_QWORD *)a3 + 4),
      *((_DWORD *)a3 + 6),
      *v11,
      (const struct TargetingInfo *)&v34);
    v31 = (unsigned int)*v11;
    v38 = 0LL;
    v37 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v31, &v37);
    if ( PointerTarget < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v35, &v38);
    if ( v34 )
    {
      if ( v35 != v38 )
      {
        if ( (_DWORD)v37 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v37);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v34);
          if ( v33 != IsRoute )
          {
            *((_BYTE *)a3 + v9 + 384) |= 1u;
            *((_BYTE *)a3 + 64) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)v10 + 3) & 0x40000) == 0 )
      {
        v14 = v36;
        *v36 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_POINTER_BUFFERED,
            *((_DWORD *)v10 + 2),
            *v11);
        goto LABEL_40;
      }
      v34 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)*v11,
      &v34);
    v14 = v36;
LABEL_40:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
    goto LABEL_8;
  }
  if ( (v18 & 0x800002) != 0 )
  {
    if ( (v18 & 0x20006) == 0x20002 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(this[43], *v11);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        (__int64 (__fastcall ****)(_QWORD))&v35,
        (__int64 (__fastcall ***)(_QWORD))HoverTarget);
      (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
        a2,
        (unsigned int)*v11,
        &v34);
    }
    goto LABEL_7;
  }
  v19 = (unsigned int)*v11;
  v38 = 0LL;
  v37 = 0LL;
  (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v19, &v37);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v35, &v38);
  if ( !(_DWORD)v37 && !v38 )
  {
    v20 = CManipulationContext::GetHoverTarget(this[43], *v11);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
      (__int64 (__fastcall ****)(_QWORD))&v35,
      (__int64 (__fastcall ***)(_QWORD))v20);
  }
  v13 = (__int64 *)&v38;
LABEL_6:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v13);
LABEL_7:
  v14 = v36;
LABEL_8:
  if ( v35 && TargetingInfo::IsRoute((TargetingInfo *)&v34) )
  {
    v15 = ConvertToInputType(*(_DWORD *)v10, *((_DWORD *)v10 + 3));
    (*(void (__fastcall **)(__int64, _QWORD, void **))(v16 + 72))(v17, v15, v14);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
}
