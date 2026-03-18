/*
 * XREFs of ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801ED050
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801ECE74 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18002C150 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801E9B78 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801E9E6C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801EA7C0 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x1801EA7DC (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1801EBC7C (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1801ECAA8 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1801F6E64 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801F9A3C (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 */

void __fastcall CManipulationManager::TargetPointer(
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
  __int64 (__fastcall *v26)(__int64 *, unsigned __int64, __int64, _QWORD, _OWORD *, int *); // rax
  const struct _TlgProvider_t *v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rdx
  char IsRoute; // al
  char v31; // dl
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-B8h] BYREF
  void **v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v42[3]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]

  v33 = 0LL;
  v6 = a4;
  v34 = a5;
  *a5 = 0LL;
  v32 = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v33);
  v9 = 232 * v6;
  v10 = (char *)a3 + 232 * v6;
  v11 = (int *)(v10 + 100);
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(this + 38), *((_QWORD *)v10 + 22), &v40) )
    v12 = v40;
  else
    v12 = 1000LL * *((unsigned int *)v10 + 40);
  if ( (*((_BYTE *)a3 + 40) & 2) != 0 )
  {
    v13 = (__int64 *)&v33;
    goto LABEL_6;
  }
  if ( (*((_DWORD *)v10 + 27) & 0x40004) != 0 || CManipulationFrame::IsMousewheelFrame(a3) )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)(v10 + 96),
                      a2,
                      (struct TargetingInfo *)&v32);
    if ( PointerTarget >= 0 && v33 && v32 )
    {
      v24 = *v33;
      v25 = *((_OWORD *)a3 + 4);
      LOBYTE(v22) = 1;
      v42[0] = *((_OWORD *)a3 + 3);
      v26 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, _OWORD *, int *))(v24 + 184);
      v42[2] = *((_OWORD *)a3 + 5);
      v42[1] = v25;
      PointerTarget = v26(v33, v12, v22, 0LL, v42, &v32);
    }
    if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v44 = v10 + 100;
      v46 = &v41;
      v37 = v32;
      v48 = &v37;
      v38 = *((_DWORD *)v10 + 32);
      v50 = &v38;
      v39 = *((_DWORD *)v10 + 33);
      v52 = &v39;
      v54 = &v40;
      v45 = 4LL;
      v41 = v28;
      v47 = 8LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      LODWORD(v40) = PointerTarget;
      v55 = 4LL;
      TlgWrite(v27, &unk_1802B6A4F, 0LL, 0LL, 8u, &pData);
    }
    InputTraceLogging::GestureTargeting::SetPointerResult(
      *((_QWORD *)a3 + 22),
      *((_QWORD *)a3 + 4),
      *((_DWORD *)a3 + 6),
      *v11,
      (const struct TargetingInfo *)&v32);
    v29 = (unsigned int)*v11;
    v36 = 0LL;
    v35 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v29, &v35);
    if ( PointerTarget < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v33, &v36);
    if ( v32 )
    {
      if ( v33 != v36 )
      {
        if ( (_DWORD)v35 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v35);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v32);
          if ( v31 != IsRoute )
          {
            *((_BYTE *)a3 + v9 + 320) |= 1u;
            *((_BYTE *)a3 + 40) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)v10 + 27) & 0x40000) == 0 )
      {
        v14 = v34;
        *v34 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_POINTER_BUFFERED,
            *((_DWORD *)v10 + 26),
            *v11);
        goto LABEL_40;
      }
      v32 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v33);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)*v11,
      &v32);
    v14 = v34;
LABEL_40:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v36);
    goto LABEL_8;
  }
  if ( (v18 & 0x800002) != 0 )
  {
    if ( (v18 & 0x20006) == 0x20002 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(this[33], *v11);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        (__int64 (__fastcall ****)(_QWORD))&v33,
        (__int64 (__fastcall ***)(_QWORD))HoverTarget);
      (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
        a2,
        (unsigned int)*v11,
        &v32);
    }
    goto LABEL_7;
  }
  v19 = (unsigned int)*v11;
  v36 = 0LL;
  v35 = 0LL;
  (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v19, &v35);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v33, &v36);
  if ( !(_DWORD)v35 && !v36 )
  {
    v20 = CManipulationContext::GetHoverTarget(this[33], *v11);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
      (__int64 (__fastcall ****)(_QWORD))&v33,
      (__int64 (__fastcall ***)(_QWORD))v20);
  }
  v13 = (__int64 *)&v36;
LABEL_6:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v13);
LABEL_7:
  v14 = v34;
LABEL_8:
  if ( v33 && TargetingInfo::IsRoute((TargetingInfo *)&v32) )
  {
    v15 = ConvertToInputType(*((_DWORD *)v10 + 24), *((_DWORD *)v10 + 27));
    (*(void (__fastcall **)(__int64, _QWORD, void **))(v16 + 72))(v17, v15, v14);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v33);
}
