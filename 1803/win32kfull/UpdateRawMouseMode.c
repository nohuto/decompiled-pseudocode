/*
 * XREFs of UpdateRawMouseMode @ 0x1C001DE64
 * Callers:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     EditionUpdateRawMouseMode @ 0x1C001DE50 (EditionUpdateRawMouseMode.c)
 *     DestroyThreadHidObjects @ 0x1C00568F0 (DestroyThreadHidObjects.c)
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0059E7C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     SetNewForegroundQueue @ 0x1C005A780 (SetNewForegroundQueue.c)
 *     LockCaptureWindow @ 0x1C0060898 (LockCaptureWindow.c)
 *     TransferWakeBit @ 0x1C00F2D20 (TransferWakeBit.c)
 *     UnlockCaptureWindow @ 0x1C00F69D0 (UnlockCaptureWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C001E310 (HasHidTable.c)
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
          result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 416) + 824LL) + 100LL),
          v5 = 1,
          (result & 1) == 0) )
    {
      v5 = 0;
    }
    gForegroundQRawMouseRequested = v5;
  }
  return result;
}
