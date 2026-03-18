/*
 * XREFs of VslGetKsrContext @ 0x1409DF56C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 *VslGetKsrContext()
{
  if ( !VslVsmEnabled )
    return 0LL;
  VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
  qword_140A0A670 = (__int64)VslpRegisterKsrCallback;
  return &VslpIumKsrInitContext;
}
