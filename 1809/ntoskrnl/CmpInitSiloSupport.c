/*
 * XREFs of CmpInitSiloSupport @ 0x1407306D4
 * Callers:
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x140728938 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x140730704 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
