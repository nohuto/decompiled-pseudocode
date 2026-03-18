/*
 * XREFs of MiZeroBootLargePages @ 0x1401852F4
 * Callers:
 *     MiZeroPageThread @ 0x140185170 (MiZeroPageThread.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1401089A0 (KeQueryNodeActiveAffinity.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     MiDereferencePageRunsEx @ 0x14012B7B0 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406B4000 (PsCreateSystemThreadEx.c)
 */

void MiZeroBootLargePages()
{
  __int64 v0; // rax
  __int64 v1; // r14
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v4; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rbp
  USHORT Count; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-38h] BYREF

  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  v0 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  word_14046A148 = 263;
  v1 = v0;
  byte_14046A14A = 6;
  qword_14046A158 = (__int64)&qword_14046A150;
  v2 = (unsigned __int16)KeNumberNodes;
  qword_14046A150 = (__int64)&qword_14046A150;
  v3 = 0;
  dword_14046A14C = 0;
  dword_14046A140 = (unsigned __int16)KeNumberNodes;
  if ( !KeNumberNodes )
    goto LABEL_10;
  v4 = 0;
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v3, &Affinity, &Count);
    if ( !Count )
    {
      if ( _InterlockedExchangeAdd(&dword_14046A140, 0xFFFFFFFF) == 1 )
        goto LABEL_10;
      goto LABEL_7;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x20206D4Du);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0x90uLL);
    v6[12] = v3;
    if ( (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, MiZeroNodePages, v6, &Affinity, 0LL) < 0 )
    {
      if ( _InterlockedExchangeAdd(&dword_14046A140, v4 - v2) == v2 - v4 )
        v4 = 0;
      ExFreePoolWithTag(v6, 0);
      goto LABEL_8;
    }
    ObCloseHandle(Handle, 0);
LABEL_7:
    v4 = ++v3;
    if ( v3 >= v2 )
      goto LABEL_8;
  }
  if ( _InterlockedExchangeAdd(&dword_14046A140, v4 - v2) == v2 - v4 )
    v4 = 0;
LABEL_8:
  if ( v4 )
    KeWaitForGate((__int64)&word_14046A148, 0);
LABEL_10:
  MiDereferencePageRunsEx(v1, 1);
}
