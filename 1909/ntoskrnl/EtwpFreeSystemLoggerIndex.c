/*
 * XREFs of EtwpFreeSystemLoggerIndex @ 0x140720D14
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpFreeSystemLoggerIndex(__int64 a1, unsigned int a2)
{
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4224), a2);
}
