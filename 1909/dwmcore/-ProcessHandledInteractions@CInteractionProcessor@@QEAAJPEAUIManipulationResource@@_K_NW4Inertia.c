/*
 * XREFs of ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x1802305E0
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801D5E90 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C52D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1802302A0 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1802303CC (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x180230D6C (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
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
  __int64 v18; // rax
  __int64 v20; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A9h]
  _DWORD v22[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v23; // [rsp+50h] [rbp-91h]
  _OWORD v24[3]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v25; // [rsp+88h] [rbp-59h]
  int v26; // [rsp+90h] [rbp-51h]
  _BYTE v27[64]; // [rsp+98h] [rbp-49h] BYREF

  v7 = 0;
  v21 = a3;
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
        v20 = 0LL;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v20);
        CInteractionProcessor::GetInteractionContext((CInteractionProcessor *)a1, *(_DWORD *)(a1 + 788), &v20);
        v13 = v20;
        if ( v20 )
        {
          memset_0(v24, 0, 0x3CuLL);
          if ( a4 )
          {
            if ( (*(_BYTE *)(a1 + 808) & 0x20) != 0 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 112LL))(v13) )
              {
                if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 120LL))(v20, 0LL) )
                {
                  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, _OWORD *))(*(_QWORD *)v20 + 144LL))(
                         v20,
                         *(_QWORD *)(a1 + 832),
                         v21,
                         a1 + 1180,
                         v24) )
                  {
                    CInteractionProcessor::ProcessOutput(
                      (CInteractionProcessor *)a1,
                      a2,
                      a4,
                      v14,
                      a6,
                      (struct InteractionOutput *)v24);
                  }
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 152LL))(v20);
                }
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 104LL))(v20, 0LL);
              }
              v13 = v20;
            }
            v7 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v13 + 80LL))(v13, a1 + 1180, v24);
            if ( v7 < 0 )
              goto LABEL_33;
            v16 = a4;
          }
          else
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 120LL))(v13, 0LL) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 152LL))(v20);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 104LL))(v20, 0LL);
            }
            v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 40LL))(v20, v27);
            v16 = 0;
            v24[0] = *(_OWORD *)v17;
            v24[1] = *(_OWORD *)(v17 + 16);
            v24[2] = *(_OWORD *)(v17 + 32);
            v25 = *(_QWORD *)(v17 + 48);
            v26 = *(_DWORD *)(v17 + 56);
          }
          CInteractionProcessor::ProcessOutput(
            (CInteractionProcessor *)a1,
            a2,
            v16,
            v15,
            a6,
            (struct InteractionOutput *)v24);
        }
LABEL_33:
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v20);
        return (unsigned int)v7;
      }
      v22[1] = *(_DWORD *)(a1 + 812);
      v22[2] = *(_DWORD *)(a1 + 816);
      v22[3] = *(_DWORD *)(a1 + 820);
      v22[0] = 3;
      v23 = (unsigned __int8)CInteractionProcessor::GetRailsEnabled(a1, 0) | 4;
      v23 = v23 & 0xFD | (unsigned __int8)(2 * CInteractionProcessor::GetRailsEnabled(a1, 1));
      (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(*(_QWORD *)a2 + 8LL))(a2, v22);
      if ( a5 == 2 )
      {
        v18 = *(_QWORD *)a2;
        v22[0] = 0;
        (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *))(v18 + 8))(a2, v22);
      }
      *(_DWORD *)(a1 + 1268) = a5;
    }
  }
  return (unsigned int)v7;
}
