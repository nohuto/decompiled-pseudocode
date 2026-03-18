/*
 * XREFs of ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801F18E8
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x18019C700 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801F15A8 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801F16D4 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x1801F206C (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessHandledInteractions(
        __int64 a1,
        struct IManipulationResource *a2,
        __int64 a3,
        bool a4,
        int a5,
        struct IManipulationTelemetryData *a6,
        _DWORD *a7)
{
  int v7; // r12d
  bool v11; // r15
  char v12; // cl
  __int64 v13; // rbx
  bool v14; // r9
  bool v15; // r9
  bool v16; // r8
  __int64 v17; // rax
  int v18; // eax
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A9h]
  __int64 v25; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v26; // [rsp+48h] [rbp-99h]
  int v27; // [rsp+50h] [rbp-91h]
  _OWORD v28[3]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v29; // [rsp+88h] [rbp-59h]
  int v30; // [rsp+90h] [rbp-51h]
  _BYTE v31[64]; // [rsp+98h] [rbp-49h] BYREF

  v7 = 0;
  v24 = a3;
  if ( a7 )
    *a7 = 1;
  v11 = (*(_BYTE *)(a1 + 808) & 0x20) != 0 && *(_DWORD *)(a1 + 784) != 1
     || (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( !(*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 16LL))(a2)
    || (*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 16LL))(a2) == 2
    && *(_DWORD *)(a1 + 788) == 3
    || v11
    || *(_DWORD *)(a1 + 788) == 6 )
  {
    if ( a7 )
      *a7 = 2;
    v12 = *(_BYTE *)(a1 + 808);
    if ( (v12 & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 808) = (16 * a4) | v12 & 0xEF;
      if ( !a5 )
      {
        v23 = 0LL;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v23);
        CInteractionProcessor::GetInteractionContext((CInteractionProcessor *)a1, *(_DWORD *)(a1 + 788), &v23);
        v13 = v23;
        if ( v23 )
        {
          memset_0(v28, 0, 0x3CuLL);
          if ( a4 )
          {
            if ( ((*(_BYTE *)(a1 + 808) & 0x20) != 0 || *(_DWORD *)(a1 + 788) == 6)
              && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 96LL))(v13, 0LL) )
              {
                if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, _OWORD *))(*(_QWORD *)v13 + 120LL))(
                       v13,
                       *(_QWORD *)(a1 + 832),
                       v24,
                       a1 + 1180,
                       v28) )
                {
                  CInteractionProcessor::ProcessOutput(
                    (CInteractionProcessor *)a1,
                    a2,
                    a4,
                    v14,
                    a6,
                    (struct InteractionOutput *)v28);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 128LL))(v13);
              }
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, 0LL);
            }
            v7 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v13 + 56LL))(v13, a1 + 1180, v28);
            if ( v7 < 0 )
              goto LABEL_33;
            v16 = a4;
          }
          else
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 96LL))(v13, 0LL) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 128LL))(v13);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, 0LL);
            }
            v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v31);
            v16 = 0;
            v28[0] = *(_OWORD *)v17;
            v28[1] = *(_OWORD *)(v17 + 16);
            v28[2] = *(_OWORD *)(v17 + 32);
            v29 = *(_QWORD *)(v17 + 48);
            v30 = *(_DWORD *)(v17 + 56);
          }
          CInteractionProcessor::ProcessOutput(
            (CInteractionProcessor *)a1,
            a2,
            v16,
            v15,
            a6,
            (struct InteractionOutput *)v28);
        }
LABEL_33:
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v23);
        return (unsigned int)v7;
      }
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v18 = *(_DWORD *)(a1 + 812);
      v27 = 4;
      HIDWORD(v25) = v18;
      v26 = *(_QWORD *)(a1 + 816);
      LODWORD(v25) = 3;
      v27 = (unsigned __int8)CInteractionProcessor::GetRailsEnabled(a1, 0) | 4;
      v19 = (2 * CInteractionProcessor::GetRailsEnabled(a1, 1)) | v27 & 0xFD;
      v20 = *(_QWORD *)a2;
      LOBYTE(v27) = v19;
      (*(void (__fastcall **)(struct IManipulationResource *, __int64 *))(v20 + 8))(a2, &v25);
      if ( a5 == 2 )
      {
        v21 = *(_QWORD *)a2;
        LODWORD(v25) = 0;
        (*(void (__fastcall **)(struct IManipulationResource *, __int64 *))(v21 + 8))(a2, &v25);
      }
      *(_DWORD *)(a1 + 1268) = a5;
    }
  }
  return (unsigned int)v7;
}
