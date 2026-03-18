/*
 * XREFs of VerifierPoCallDriver @ 0x1409711E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x140180740 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierPoCallDriver(void *a1, __int64 a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvPoCallDriver )
    return pXdvPoCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1);
}
