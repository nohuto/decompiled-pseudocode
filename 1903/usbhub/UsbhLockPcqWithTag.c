/*
 * XREFs of UsbhLockPcqWithTag @ 0x1C000BE3C
 * Callers:
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000AF4C (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B77C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0046FCC (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_Check_Action @ 0x1C00471B4 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00472DC (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C00474FC (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C004776C (Usbh_PCE_ResumeDone_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0047894 (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0047A8C (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0047BF0 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 */

__int64 __fastcall UsbhLockPcqWithTag(int a1, __int64 a2, int a3, KIRQL *a4, int a5)
{
  KIRQL v9; // al
  int v10; // r8d
  int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax

  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  *(_DWORD *)(a2 + 448) = 1;
  *a4 = v9;
  Log(a1, 16, 1886464811, a3, *(unsigned __int16 *)(a2 + 4));
  Log(a1, v11, v10, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v12 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v12;
  v13 = a2 + 32 * (v12 + 43);
  *(_DWORD *)v13 = a3;
  v14 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v13 + 8) = -1;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 12) = a5;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  return *(unsigned int *)(a2 + 12);
}
