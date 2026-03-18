/*
 * XREFs of _anonymous_namespace_::GNT_NextTopScan @ 0x1C00F6090
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0041730 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C00F603C (_anonymous_namespace_--NTW_GetNextTop.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GNT_NextTopScan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 64);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 456);
    if ( !v5 || (*(_DWORD *)(v5 + 48) & 2) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v5 = *(_QWORD *)(a1 + 456);
    }
    if ( !v5 || (*(_DWORD *)(v5 + 48) & 2) != 0 )
      return 0LL;
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) + 88LL);
  }
  while ( result && *(_QWORD *)(result + 96) != a3 )
    result = *(_QWORD *)(result + 64);
  return result;
}
