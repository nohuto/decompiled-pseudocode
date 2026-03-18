/*
 * XREFs of VslGetKsrContext @ 0x140A22F94
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 *VslGetKsrContext()
{
  if ( !VslVsmEnabled )
    return 0LL;
  VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
  qword_140A4F690 = (__int64)VslpRegisterKsrCallback;
  return &VslpIumKsrInitContext;
}
