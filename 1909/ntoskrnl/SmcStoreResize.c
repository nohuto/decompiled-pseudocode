/*
 * XREFs of SmcStoreResize @ 0x1408EBF54
 * Callers:
 *     SmcProcessResizeRequest @ 0x1408E898C (SmcProcessResizeRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlSetAllBits @ 0x1400D7250 (RtlSetAllBits.c)
 *     SmAlloc @ 0x1400D8890 (SmAlloc.c)
 *     SmStoreResize @ 0x1408E8550 (SmStoreResize.c)
 *     SmcCacheReference @ 0x1408EB5F0 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x1408EBDF4 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x1408EBE34 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // edx
  struct _PRIVILEGE_SET *v4; // rsi
  struct _EX_RUNDOWN_REF v5; // rax
  unsigned __int64 Count; // rdi
  int v7; // edi
  __int64 v8; // rax
  ULONG *v9; // r13
  unsigned __int64 v10; // r12
  bool v11; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // r14
  struct _EX_RUNDOWN_REF *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rdi
  struct _PRIVILEGE_SET *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  _DWORD *v19; // rcx
  struct _KTHREAD *v20; // rax
  _DWORD *v21; // rcx
  unsigned __int64 v22; // r9
  struct _PRIVILEGE_SET *v23; // rdx
  unsigned __int64 v24; // r8
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  struct _PRIVILEGE_SET *v28; // [rsp+48h] [rbp-18h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  int v31; // [rsp+A8h] [rbp+48h]
  struct _EX_RUNDOWN_REF *v32; // [rsp+B0h] [rbp+50h]

  v3 = a2[1];
  v27 = 0LL;
  v28 = 0LL;
  v4 = 0LL;
  v29 = 0LL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v31 = 0;
  v5.Count = SmcCacheReference(a1, v3).Count;
  Count = v5.Count;
  if ( !v5.Count )
    return (unsigned int)-1073741672;
  v8 = *(unsigned int *)(v5.Count + 8);
  v9 = a2 + 4;
  if ( a2[4] > (unsigned int)v8 )
  {
    v7 = -1073741811;
    goto LABEL_35;
  }
  v10 = (unsigned __int64)(v8 + 31) >> 5;
  v4 = (struct _PRIVILEGE_SET *)SmAlloc((unsigned int)(4 * v10), 0x72436D73u);
  if ( v4 )
  {
    v11 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(Count + 8);
    BitMapHeader.Buffer = &v4->PrivilegeCount;
    if ( v11 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      HIDWORD(v27) |= 4u;
      v29 = 0LL;
      v28 = v4;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (volatile signed __int64 *)(Count + 160);
    ExAcquirePushLockExclusiveEx(Count + 160, 0LL);
    v14 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(Count, a2[2], a2[3]);
    v32 = v14;
    if ( v14 )
    {
      v31 = ExAcquireRundownProtection_0(v14 + 2);
      if ( (*a2 & 0x100) != 0 )
      {
        v7 = SmcStorePlacementGet(Count, *v9, (__int64)&v27);
        if ( v7 < 0 )
          goto LABEL_30;
        v15 = v32;
        v16 = v4;
        v17 = (unsigned int)v10;
        v18 = 0LL;
        v19 = (_DWORD *)v32[1].Count;
        if ( v4 > (struct _PRIVILEGE_SET *)((char *)v4 + 4 * (unsigned int)v10) )
          v17 = 0LL;
        if ( v17 )
        {
          do
          {
            ++v18;
            *v19 |= v16->PrivilegeCount;
            v16 = (struct _PRIVILEGE_SET *)((char *)v16 + 4);
            ++v19;
          }
          while ( v18 < v17 );
        }
      }
      else
      {
        v15 = v32;
      }
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KeLeaveCriticalRegion();
      SmStoreResize(a2[3], a2[2], (unsigned int)&BitMapHeader, (_DWORD)a2 + 16, (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !*v9 )
      {
        v7 = 0;
LABEL_33:
        if ( v31 )
          ExReleaseRundownProtection_0(v32 + 2);
        goto LABEL_35;
      }
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v21 = (_DWORD *)v15[1].Count;
      v22 = (unsigned int)v10;
      v23 = v4;
      v24 = 0LL;
      if ( v4 > (struct _PRIVILEGE_SET *)((char *)v4 + 4 * (unsigned int)v10) )
        v22 = 0LL;
      if ( v22 )
      {
        do
        {
          ++v24;
          *v21 ^= v23->PrivilegeCount;
          v23 = (struct _PRIVILEGE_SET *)((char *)v23 + 4);
          ++v21;
        }
        while ( v24 < v22 );
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741672;
    }
LABEL_30:
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegion();
    goto LABEL_33;
  }
  v7 = -1073741670;
LABEL_35:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  if ( v4 )
    CmSiFreeMemory(v4);
  return (unsigned int)v7;
}
