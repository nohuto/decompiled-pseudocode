/*
 * XREFs of ?Lookup@CBackTraceBucket@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@_K@Z @ 0x1C0109EE0
 * Callers:
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C0109DCC (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CBackTraceBucket::Lookup(
        volatile signed __int32 **this,
        const struct NSInstrumentation::CBackTrace *const a2,
        __int64 a3)
{
  volatile signed __int32 *i; // rbx

  for ( i = *this; ; i = *(volatile signed __int32 **)i )
  {
    if ( !i )
      return 0LL;
    if ( *((_QWORD *)i + 1) == a3 && !memcmp((const void *)(i + 4), a2, 0xA0uLL) )
      break;
  }
  _InterlockedIncrement(i + 44);
  return (struct NSInstrumentation::CBackTraceStorageUnit *)i;
}
