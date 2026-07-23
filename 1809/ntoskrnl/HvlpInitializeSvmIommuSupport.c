/*
 * XREFs of HvlpInitializeSvmIommuSupport @ 0x140278254
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlSvmGetSystemCapabilities @ 0x140276030 (HvlSvmGetSystemCapabilities.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 HvlpInitializeSvmIommuSupport()
{
  __int64 v0; // rbx
  PVOID PoolWithTag; // rax
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-18h]

  HvlSvmGetSystemCapabilities((__int64)v6);
  if ( (v6[0] & 1) == 0 )
    return 3221225659LL;
  v0 = v7;
  if ( !v7 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v7, 0x204C5648u);
  qword_1404DEB98 = (__int64)PoolWithTag;
  v2 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 104 * v0);
  dword_1404DEB90 = v0;
  v4 = 0;
  if ( (_DWORD)v0 )
  {
    while ( 1 )
    {
      v5 = v2 + 104LL * v4;
      *(_DWORD *)v5 = v4;
      *(_QWORD *)(v5 + 32) = HvlpIommuPrqDpcRoutine;
      *(_DWORD *)(v5 + 8) = 275;
      *(_QWORD *)(v5 + 40) = v5;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)(v5 + 24) = 0LL;
      *(_QWORD *)(v5 + 96) = v5;
      *(_QWORD *)(v5 + 88) = HvlpProcessIommuPrq;
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_DWORD *)(v5 + 4) = 3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 72), HyperCriticalWorkQueue);
      if ( ++v4 >= dword_1404DEB90 )
        break;
      v2 = qword_1404DEB98;
    }
  }
  return 0LL;
}
