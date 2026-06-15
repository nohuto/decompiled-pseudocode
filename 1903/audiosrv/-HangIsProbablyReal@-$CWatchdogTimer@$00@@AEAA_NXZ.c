/*
 * XREFs of ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C2C24
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800C2F20 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?IsVirtualMachine@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C2E8C (-IsVirtualMachine@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800C31BC (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 */

char __fastcall CWatchdogTimer<1>::HangIsProbablyReal(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  _BYTE v11[8]; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-30h] BYREF

  if ( IsDebuggerPresent() )
  {
    v2 = *(const struct _TlgProvider_t **)(a1 + 8);
    if ( *(_DWORD *)v2 > 5u )
    {
      if ( TlgKeywordOn(v2, 1uLL) )
        TlgWrite(v3, &unk_180177884, v4, v5, 2u, &pData);
    }
    return 0;
  }
  if ( (unsigned __int8)CWatchdogTimer<1>::IsVirtualMachine() )
  {
    v6 = *(const struct _TlgProvider_t **)(a1 + 8);
    if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(v6, 1uLL) )
      TlgWrite(v7, &unk_180177860, v8, v9, 2u, &v13);
    return 0;
  }
  v11[0] = 0;
  if ( (int)CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(a1, v11) < 0 )
    return 0;
  if ( !v11[0] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
    return 0;
  }
  return 1;
}
