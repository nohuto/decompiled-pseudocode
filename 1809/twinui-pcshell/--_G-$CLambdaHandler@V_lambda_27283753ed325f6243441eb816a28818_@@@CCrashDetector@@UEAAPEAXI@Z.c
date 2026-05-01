/*
 * XREFs of ??_G?$CLambdaHandler@V_lambda_27283753ed325f6243441eb816a28818_@@@CCrashDetector@@UEAAPEAXI@Z @ 0x1801141C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler<_lambda_27283753ed325f6243441eb816a28818_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
