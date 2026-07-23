/*
 * XREFs of MiZeroBootLargePages @ 0x140192694
 * Callers:
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
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
  word_14043F3C8 = 263;
  v1 = v0;
  byte_14043F3CA = 6;
  qword_14043F3D8 = (__int64)&qword_14043F3D0;
  v2 = (unsigned __int16)KeNumberNodes;
  qword_14043F3D0 = (__int64)&qword_14043F3D0;
  v3 = 0;
  dword_14043F3CC = 0;
  dword_14043F3C0 = (unsigned __int16)KeNumberNodes;
  if ( !KeNumberNodes )
    goto LABEL_9;
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v3, &Affinity, &Count);
    if ( !Count )
    {
      if ( _InterlockedExchangeAdd(&dword_14043F3C0, 0xFFFFFFFF) == 1 )
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
      if ( _InterlockedExchangeAdd(&dword_14043F3C0, v3 - v2) == v2 - v3 )
        v3 = 0;
      ExFreePoolWithTag(v5, 0);
      goto LABEL_7;
    }
    ObCloseHandle(Handle, 0);
LABEL_6:
    if ( ++v3 >= v2 )
      goto LABEL_7;
  }
  if ( _InterlockedExchangeAdd(&dword_14043F3C0, v3 - v2) == v2 - v3 )
    v3 = 0;
LABEL_7:
  if ( v3 )
    KeWaitForGate((__int64)&word_14043F3C8, 0);
LABEL_9:
  MiDereferencePageRunsEx(v1, 1);
}
