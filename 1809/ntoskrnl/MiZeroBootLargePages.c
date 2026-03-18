/*
 * XREFs of MiZeroBootLargePages @ 0x140192534
 * Callers:
 *     MiZeroPageThread @ 0x1401791E0 (MiZeroPageThread.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400E3C20 (KeQueryNodeActiveAffinity.c)
 *     KeWaitForGate @ 0x1400FA2E4 (KeWaitForGate.c)
 *     MiDereferencePageRunsEx @ 0x14012B5D8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B6B0 (MiReferencePageRuns.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14066AAE0 (PsCreateSystemThreadEx.c)
 */

void MiZeroBootLargePages()
{
  __int64 v0; // rax
  __int64 v1; // rbp
  unsigned int v2; // edi
  int v3; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rsi
  USHORT Count; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-28h] BYREF

  v0 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  word_14043E308 = 263;
  v1 = v0;
  byte_14043E30A = 6;
  qword_14043E318 = (__int64)&qword_14043E310;
  v2 = (unsigned __int16)KeNumberNodes;
  qword_14043E310 = (__int64)&qword_14043E310;
  v3 = 0;
  dword_14043E30C = 0;
  dword_14043E300 = (unsigned __int16)KeNumberNodes;
  if ( !KeNumberNodes )
    goto LABEL_9;
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v3, &Affinity, &Count);
    if ( !Count )
    {
      if ( _InterlockedExchangeAdd(&dword_14043E300, 0xFFFFFFFF) == 1 )
        goto LABEL_9;
      goto LABEL_6;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x20206D4Du);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0x90uLL);
    v5[12] = v3;
    if ( (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, MiZeroNodePages, v5, &Affinity, 0LL) < 0 )
    {
      if ( _InterlockedExchangeAdd(&dword_14043E300, v3 - v2) == v2 - v3 )
        v3 = 0;
      ExFreePoolWithTag(v5, 0);
      goto LABEL_7;
    }
    ObCloseHandle(Handle, 0);
LABEL_6:
    if ( ++v3 >= v2 )
      goto LABEL_7;
  }
  if ( _InterlockedExchangeAdd(&dword_14043E300, v3 - v2) == v2 - v3 )
    v3 = 0;
LABEL_7:
  if ( v3 )
    KeWaitForGate((__int64)&word_14043E308, 0);
LABEL_9:
  MiDereferencePageRunsEx(v1, 1);
}
