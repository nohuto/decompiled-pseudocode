/*
 * XREFs of TpDereferenceGlobalPool @ 0x18003135C
 * Callers:
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x18008BAA8 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x18008BF2C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 */

struct _PEB *__fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == TppPoolpGlobalPool && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)TppPoolpDereferenceGlobalPool(
                            (const void **)&TppPoolpGlobalPool,
                            (unsigned __int64)&TppPoolpGlobalPoolLock,
                            a3,
                            a4);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  return result;
}
