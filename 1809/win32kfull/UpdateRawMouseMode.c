/*
 * XREFs of UpdateRawMouseMode @ 0x1C00D20E4
 * Callers:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     SetNewForegroundQueue @ 0x1C00D0EA0 (SetNewForegroundQueue.c)
 *     LockCaptureWindow @ 0x1C00D2044 (LockCaptureWindow.c)
 *     EditionUpdateRawMouseMode @ 0x1C00D20D0 (EditionUpdateRawMouseMode.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 *     DestroyThreadHidObjects @ 0x1C0102B50 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C01030EC (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     TransferWakeBit @ 0x1C010C064 (TransferWakeBit.c)
 *     UnlockCaptureWindow @ 0x1C0112CC0 (UnlockCaptureWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C00D2180 (HasHidTable.c)
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
    v3 = *(_QWORD *)(a1 + 104);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(a1 + 88);
    result = HasHidTable(v4);
    if ( !(_DWORD)result
      || (v3 ? (v6 = *(_QWORD *)(v3 + 16)) : (v6 = *(_QWORD *)(a1 + 88)),
          result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 832LL) + 100LL),
          v5 = 1,
          (result & 1) == 0) )
    {
      v5 = 0;
    }
    gForegroundQRawMouseRequested = v5;
  }
  return result;
}
