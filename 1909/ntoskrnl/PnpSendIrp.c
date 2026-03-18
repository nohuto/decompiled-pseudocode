/*
 * XREFs of PnpSendIrp @ 0x1400ED8EC
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400ED9FC (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x140158FA4 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x14070434C (PnpQueryDeviceRelations.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x1400ED994 (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x14071AB3C (PnpAsynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
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
