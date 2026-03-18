/*
 * XREFs of ACPIInternalQueryExtendedAddress @ 0x1C002CD50
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0096920 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0096C64 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIInternalQueryExtendedAddress(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v3; // ebx
  _QWORD v5[14]; // [rsp+28h] [rbp-19h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[9] = 0LL;
  v5[6] = &GUID_PNP_EXTENDED_ADDRESS_INTERFACE;
  LOWORD(v5[5]) = 2075;
  v5[8] = v5;
  LODWORD(v5[7]) = 65576;
  v3 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v3 >= 0 )
  {
    if ( v5[4] )
    {
      if ( WORD1(v5[0]) == 1 )
      {
        ((void (__fastcall *)(_QWORD, __int64))v5[4])(v5[1], a2);
        if ( v5[3] )
          ((void (__fastcall *)(_QWORD))v5[3])(v5[1]);
      }
    }
  }
  return (unsigned int)v3;
}
