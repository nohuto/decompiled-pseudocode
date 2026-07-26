/*
 * XREFs of ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006FA5C
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C006F850 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0070BF0 (ndisOidPostIovDeleteNicSwitch.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C006FF78 (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C00700B0 (ndisIovFindVPortByVPortIdInternal.c)
 */

void __fastcall ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(__int64 a1, __int64 a2)
{
  __int64 SwitchBySwitchId; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rbp
  _QWORD *VPortByVPortIdInternal; // rax
  KIRQL v7; // r10
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx

  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(a1, a2);
  v4 = SwitchBySwitchId;
  if ( SwitchBySwitchId )
  {
    v5 = *(_DWORD **)(SwitchBySwitchId + 40);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1864) = 2884957;
    VPortByVPortIdInternal = (_QWORD *)ndisIovFindVPortByVPortIdInternal(a1, 0LL);
    v8 = VPortByVPortIdInternal;
    v9 = *VPortByVPortIdInternal;
    if ( *(_QWORD **)(*VPortByVPortIdInternal + 8LL) != VPortByVPortIdInternal )
      goto LABEL_10;
    v10 = (_QWORD *)VPortByVPortIdInternal[1];
    if ( (_QWORD *)*v10 != v8 )
      goto LABEL_10;
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    --*(_DWORD *)(a1 + 4776);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
    *(_QWORD *)(a1 + 4720) = 0LL;
    v11 = v8[4];
    if ( *(_QWORD **)(v11 + 8) != v8 + 4
      || (v12 = (_QWORD *)v8[5], (_QWORD *)*v12 != v8 + 4)
      || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, --*(_DWORD *)(v4 + 48), v13 = v8[6], *(_QWORD **)(v13 + 8) != v8 + 6)
      || (v14 = (_QWORD *)v8[7], (_QWORD *)*v14 != v8 + 6) )
    {
LABEL_10:
      __fastfail(3u);
    }
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    --v5[7];
    ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(v5, 0);
  }
}
