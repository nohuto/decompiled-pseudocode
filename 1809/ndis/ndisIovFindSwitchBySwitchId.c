/*
 * XREFs of ndisIovFindSwitchBySwitchId @ 0x1C006FF78
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C006F850 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006F9A4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006FA5C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C0070D30 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisOidPreIovEnumVFs @ 0x1C0071340 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0071650 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovAllocateVF @ 0x1C00F8AEC (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00F8C80 (ndisIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F9B20 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00FA0B0 (ndisOidPreIovNicSwitchParameters.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindSwitchBySwitchId(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rdi
  KIRQL v5; // r8
  __int64 *v6; // rax
  unsigned int v7; // ecx

  v3 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v6 = *(__int64 **)(a1 + 4736);
  *(_DWORD *)(a1 + 1864) = 2886344;
  while ( v6 != (__int64 *)(a1 + 4736) )
  {
    v7 = *((_DWORD *)v6 + 9);
    if ( v7 == a2 )
    {
      v3 = v6;
      break;
    }
    if ( v7 > a2 )
      break;
    v6 = (__int64 *)*v6;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  return v3;
}
