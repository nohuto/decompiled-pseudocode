/*
 * XREFs of XilRegister_ReadUlong64 @ 0x1C0020D5C
 * Callers:
 *     XilCoreCommand_AbortCommandRing @ 0x1C0047224 (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C00474E0 (XilCoreCommand_QueryIsRingRunning.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C00683B4 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong64(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 537LL) )
    return *(_QWORD *)a2;
  Register_ReadSecureMmio(a1, a2, 3, 1, &v3);
  return v3;
}
