/*
 * XREFs of ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x180080304
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x180081480 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<LegacyDeviceInfo,,0>(_QWORD *a1)
{
  _DWORD *v2; // rbx
  _QWORD *result; // rax

  v2 = operator new(0x620uLL);
  memset_0(v2, 0, 0x620uLL);
  v2[2] = 1568;
  result = a1;
  *a1 = v2;
  return result;
}
