/*
 * XREFs of VerifierPoCallDriver @ 0x140932960
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x1401731B0 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierPoCallDriver(void *a1, __int64 a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvPoCallDriver )
    return pXdvPoCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1);
}
