/*
 * XREFs of PopGetConsoleDisplayRequestCount @ 0x1400D5B9C
 * Callers:
 *     PopPolicySystemIdle @ 0x140670540 (PopPolicySystemIdle.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     TtmIsEnabled @ 0x140670BDC (TtmIsEnabled.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1408BCC8C (TtmGetSessionDisplayRequiredCount.c)
 */

__int64 PopGetConsoleDisplayRequestCount()
{
  unsigned int v0; // ebx
  int v1; // eax
  unsigned int v2; // ecx
  _QWORD v4[6]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+10h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  ULONG ActiveConsoleId; // [rsp+70h] [rbp+20h] BYREF

  v0 = 0;
  v6 = 0;
  memset(v4, 0, 0x28uLL);
  v5 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId == -1 )
    {
      return v5;
    }
    else if ( (unsigned __int8)TtmIsEnabled(ActiveConsoleId) )
    {
      return (unsigned int)TtmGetSessionDisplayRequiredCount();
    }
    else
    {
      v4[0] = 2LL;
      v4[2] = &v6;
      v4[4] = &v5;
      v4[1] = 4LL;
      v4[3] = 4LL;
      v1 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, ULONG *))PopInvokeWin32Callout)(
             5LL,
             v4,
             1LL,
             &ActiveConsoleId);
      v2 = v5;
      if ( v1 < 0 )
        return 0;
      return v2;
    }
  }
  return v0;
}
