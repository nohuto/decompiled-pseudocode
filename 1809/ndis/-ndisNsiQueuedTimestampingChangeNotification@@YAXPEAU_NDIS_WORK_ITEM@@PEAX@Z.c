/*
 * XREFs of ?ndisNsiQueuedTimestampingChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0040490
 * Callers:
 *     <none>
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisNsiQueuedTimestampingChangeNotification(PVOID P, char *a2)
{
  KIRQL v4; // bl
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x9Eu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a2);
  memset(v5, 0, 0x40uLL);
  HIDWORD(v5[1]) = 0;
  v5[5] = 0LL;
  v5[0] = ndisNsiSavedClientNpi;
  LOWORD(v5[1]) = 17;
  v5[2] = a2 + 1312;
  LODWORD(v5[3]) = 8;
  (*(void (__fastcall **)(_QWORD *))(qword_1C009FEC8 + 8))(v5);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(a2, 0xAu);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(0x9Fu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
}
