/*
 * XREFs of PnpSendIrp @ 0x14000E9CC
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14000E8D0 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x14015A5B0 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x1406E92C0 (PnpQueryDeviceRelations.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x14000EA6C (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x1406FDEA4 (PnpAsynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v8 = PnpSetDeviceAffinityThread(a1, &PreviousAffinity);
  if ( a4 )
    v9 = PnpAsynchronousCall(a1, a2, a4, a5);
  else
    v9 = IopSynchronousCall(a1, a2, -1073741637, 0, a5);
  v10 = v9;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
