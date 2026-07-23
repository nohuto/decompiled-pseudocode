/*
 * XREFs of VslGetKsrContext @ 0x1409E056C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 *VslGetKsrContext()
{
  if ( !VslVsmEnabled )
    return 0LL;
  VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
  qword_140A0B670 = (__int64)VslpRegisterKsrCallback;
  return &VslpIumKsrInitContext;
}
