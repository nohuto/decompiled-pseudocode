/*
 * XREFs of ndisIovDeleteNicSwitch @ 0x1C006F9A4
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C006F850 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0070BF0 (ndisOidPostIovDeleteNicSwitch.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C006FF78 (ndisIovFindSwitchBySwitchId.c)
 */

void __fastcall ndisIovDeleteNicSwitch(__int64 a1, __int64 a2)
{
  _QWORD *SwitchBySwitchId; // rbx
  KIRQL v4; // al
  __int64 v5; // r8
  _QWORD *v6; // rdx

  SwitchBySwitchId = (_QWORD *)ndisIovFindSwitchBySwitchId(a1, a2);
  if ( SwitchBySwitchId )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1864) = 2885020;
    v5 = *SwitchBySwitchId;
    if ( *(_QWORD **)(*SwitchBySwitchId + 8LL) != SwitchBySwitchId
      || (v6 = (_QWORD *)SwitchBySwitchId[1], (_QWORD *)*v6 != SwitchBySwitchId) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    --*(_DWORD *)(a1 + 4728);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    ExFreePoolWithTag(SwitchBySwitchId, 0);
  }
}
