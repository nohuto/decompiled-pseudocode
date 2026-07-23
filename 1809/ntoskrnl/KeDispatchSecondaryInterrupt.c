/*
 * XREFs of KeDispatchSecondaryInterrupt @ 0x1402934E0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertSecondarySignalList @ 0x14029396C (KiInsertSecondarySignalList.c)
 *     KiInterruptDispatchCommon @ 0x140299A54 (KiInterruptDispatchCommon.c)
 */

char __fastcall KeDispatchSecondaryInterrupt(int a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v4; // rdi
  char v5; // si
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[1] = v7;
  v7[0] = v7;
  CurrentIrql = KeGetCurrentIrql();
  v4 = v7;
  if ( !CurrentIrql )
    v4 = 0LL;
  v5 = KiInterruptDispatchCommon(1, a1, (a2 >> 20) & 1, (_DWORD)v4, a3);
  if ( CurrentIrql )
    KiInsertSecondarySignalList(v4);
  return v5;
}
