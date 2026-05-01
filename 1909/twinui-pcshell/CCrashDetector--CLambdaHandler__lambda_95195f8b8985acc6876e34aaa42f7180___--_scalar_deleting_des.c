/*
 * XREFs of CCrashDetector::CLambdaHandler__lambda_95195f8b8985acc6876e34aaa42f7180___::_scalar_deleting_destructor_ @ 0x18015AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler__lambda_95195f8b8985acc6876e34aaa42f7180___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
