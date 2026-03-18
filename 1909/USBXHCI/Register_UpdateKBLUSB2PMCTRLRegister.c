/*
 * XREFs of Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C0020B10
 * Callers:
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00608DC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_UpdateKBLUSB2PMCTRLRegister(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  int Ulong; // eax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  Ulong = XilRegister_ReadUlong(a1, v2 + 33220);
  return XilRegister_WriteUlong(a1, v2 + 33220, v4 | Ulong & 0xFFFFFFFC);
}
