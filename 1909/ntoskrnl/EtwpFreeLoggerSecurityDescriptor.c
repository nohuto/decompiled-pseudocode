/*
 * XREFs of EtwpFreeLoggerSecurityDescriptor @ 0x1406AC978
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1405C7520 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall EtwpFreeLoggerSecurityDescriptor(__int64 a1)
{
  __int64 v1; // rcx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 800), 0LL);
  ObDereferenceSecurityDescriptor(v1 & 0xFFFFFFFFFFFFFFF0uLL, (v1 & 0xF) + 1);
}
