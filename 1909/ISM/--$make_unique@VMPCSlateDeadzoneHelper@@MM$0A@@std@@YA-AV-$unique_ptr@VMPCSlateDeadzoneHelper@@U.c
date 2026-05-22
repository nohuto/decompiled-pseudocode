/*
 * XREFs of ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18012EB18
 * Callers:
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801301F0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x180135510 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180137910 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180140B68 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(_QWORD *a1, float *a2, float *a3)
{
  MPCSlateDeadzoneHelper *v7; // [rsp+40h] [rbp+8h]

  v7 = (MPCSlateDeadzoneHelper *)operator new(0x20uLL);
  *a1 = MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(v7, *a2, *a3);
  return a1;
}
