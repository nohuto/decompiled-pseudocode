/*
 * XREFs of ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001C630
 * Callers:
 *     <none>
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(struct _NDIS_WORK_ITEM *a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  KIRQL v4; // bl
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)a2[10];
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(139LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v2);
  v6 = 0LL;
  v5[0] = 0LL;
  v5[1] = a2[11];
  v6 = a2[12];
  LODWORD(v5[0]) = 1;
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v5, 1LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v2, 0xAu);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ExFreePoolWithTag(a2, 0);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(140LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
}
