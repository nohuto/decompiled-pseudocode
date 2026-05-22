/*
 * XREFs of ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800EC360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x1800EC5D4 (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::OnDeviceUpdate(GazeProcessor *this, struct DeviceInfo *a2)
{
  __int64 v3; // rcx
  int updated; // eax
  unsigned int v5; // ebx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 7) = a2;
  memset(v7, 0, 24);
  v3 = *((_QWORD *)this + 24);
  if ( !v3 )
    return 0LL;
  if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 40LL))(v3, v7) < 0 )
    return 0LL;
  updated = GazeProcessor::UpdateDeviceTransformsFromInputConfig(this, (struct SystemContextMessage *)v7);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
