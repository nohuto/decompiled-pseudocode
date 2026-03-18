/*
 * XREFs of UpdateRawMouseMode @ 0x1C001E588
 * Callers:
 *     SetNewForegroundQueue @ 0x1C001B530 (SetNewForegroundQueue.c)
 *     LockCaptureWindow @ 0x1C001E234 (LockCaptureWindow.c)
 *     EditionUpdateRawMouseMode @ 0x1C001E560 (EditionUpdateRawMouseMode.c)
 *     TransferWakeBit @ 0x1C003B44C (TransferWakeBit.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     DestroyThreadHidObjects @ 0x1C00E6C10 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00E72BC (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x1C00ED150 (UnlockCaptureWindow.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 * Callees:
 *     HasHidTable @ 0x1C001E620 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rax

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v3 = *(_QWORD *)(a1 + 112);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(a1 + 96);
    result = HasHidTable(v4);
    if ( !(_DWORD)result
      || (v3 ? (v6 = *(_QWORD *)(v3 + 16)) : (v6 = *(_QWORD *)(a1 + 96)),
          result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 824LL) + 100LL),
          v5 = 1,
          (result & 1) == 0) )
    {
      v5 = 0;
    }
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = v5;
  }
  return result;
}
