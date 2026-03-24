/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1406B1A44
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406B1924 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140733CE4 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1407605A0 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  void *CurrentServerSiloGlobals; // rbx
  HANDLE v3; // rdx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v3 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 131);
  Handle = v3;
  if ( !v3 )
  {
    result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
    if ( (int)result < 0 )
      return result;
    if ( RtlpDisableIFEOCaching
      || !_InterlockedCompareExchange64(
            (volatile signed __int64 *)CurrentServerSiloGlobals + 131,
            (signed __int64)Handle,
            0LL) )
    {
      v3 = Handle;
    }
    else
    {
      ZwClose(Handle);
      v3 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 131);
    }
  }
  *a1 = v3;
  return 0LL;
}
