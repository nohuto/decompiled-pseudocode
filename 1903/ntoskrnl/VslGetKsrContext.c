/*
 * XREFs of VslGetKsrContext @ 0x140A22EB4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 *VslGetKsrContext()
{
  if ( !VslVsmEnabled )
    return 0LL;
  VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
  qword_140A50690 = (__int64)VslpRegisterKsrCallback;
  return &VslpIumKsrInitContext;
}
