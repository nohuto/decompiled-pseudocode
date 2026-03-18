/*
 * XREFs of UpdateRawMouseMode @ 0x1C001E6F8
 * Callers:
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     SetNewForegroundQueue @ 0x1C0013A60 (SetNewForegroundQueue.c)
 *     LockCaptureWindow @ 0x1C001E3A4 (LockCaptureWindow.c)
 *     EditionUpdateRawMouseMode @ 0x1C001E6D0 (EditionUpdateRawMouseMode.c)
 *     TransferWakeBit @ 0x1C009A67C (TransferWakeBit.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     DestroyThreadHidObjects @ 0x1C010C990 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C010CF3C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x1C0112530 (UnlockCaptureWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C001E790 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rax

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v4 = *(_QWORD *)(a1 + 112);
    if ( v4 )
      v5 = *(_QWORD *)(v4 + 16);
    else
      v5 = *(_QWORD *)(a1 + 96);
    result = HasHidTable(v5, a2);
    if ( !(_DWORD)result
      || (v4 ? (v7 = *(_QWORD *)(v4 + 16)) : (v7 = *(_QWORD *)(a1 + 96)),
          result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 416) + 824LL) + 100LL),
          v6 = 1,
          (result & 1) == 0) )
    {
      v6 = 0;
    }
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = v6;
  }
  return result;
}
