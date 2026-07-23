/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1406B2CE4
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406B2BC4 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140734ED4 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x140761790 (RtlpOpenBaseImageFileOptionsKeyEx.c)
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
