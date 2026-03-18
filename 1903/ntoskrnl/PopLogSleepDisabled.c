/*
 * XREFs of PopLogSleepDisabled @ 0x140736600
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopLogDisabledSleepReason @ 0x1406A209C (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1406A2194 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x140A1FE8C (PopInitPlatformSettings.c)
 *     PopCheckForUpgradeInProgress @ 0x140A21254 (PopCheckForUpgradeInProgress.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PopGetReasonListByReasonCode @ 0x1406A236C (PopGetReasonListByReasonCode.c)
 */

__int64 __fastcall PopLogSleepDisabled(int a1, char a2, const void *a3, size_t a4)
{
  unsigned int v8; // edi
  PVOID PoolWithTag; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax

  v8 = 0;
  if ( PopGetReasonListByReasonCode(a1) )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 32, 0x66756263u);
    v10 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, a4 + 32);
      *(_DWORD *)(v10 + 24) = a1;
      if ( (a2 & 1) != 0 )
        *(_BYTE *)(v10 + 16) = 1;
      if ( (a2 & 2) != 0 )
        *(_BYTE *)(v10 + 17) = 1;
      if ( (a2 & 4) != 0 )
        *(_BYTE *)(v10 + 18) = 1;
      if ( (a2 & 8) != 0 )
        *(_BYTE *)(v10 + 19) = 1;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(v10 + 22) = 1;
      if ( (a2 & 0x20) != 0 )
        *(_BYTE *)(v10 + 20) = 1;
      if ( a4 )
      {
        *(_DWORD *)(v10 + 28) = a4;
        memmove((void *)(v10 + 32), a3, a4);
      }
      v11 = (__int64 *)qword_140443808;
      if ( *(__int64 **)qword_140443808 != &PowerStateDisableReasonListHead )
        __fastfail(3u);
      *(_QWORD *)v10 = &PowerStateDisableReasonListHead;
      *(_QWORD *)(v10 + 8) = v11;
      *v11 = v10;
      qword_140443808 = v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
