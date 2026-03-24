/*
 * XREFs of VerifierIofCallDriver @ 0x140932260
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x1401731D0 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x140923CD4 (IovCallDriver.c)
 */

__int64 __fastcall VerifierIofCallDriver(void *a1, IRP *a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 )
    return IovCallDriver(a1, a2, retaddr);
  else
    return IofCallDriverSpecifyReturn(a1);
}
