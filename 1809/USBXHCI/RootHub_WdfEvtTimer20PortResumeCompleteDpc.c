/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C00230F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0022E94 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 */

__int64 __fastcall RootHub_WdfEvtTimer20PortResumeCompleteDpc(__int64 a1)
{
  _QWORD ***v1; // rax

  v1 = (_QWORD ***)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3D8);
  return RootHub_WdfEvtTimer20PortResumeComplete(**v1, *((_DWORD *)*v1 + 2));
}
