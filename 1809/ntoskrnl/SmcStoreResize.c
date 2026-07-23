/*
 * XREFs of SmcStoreResize @ 0x1408B085C
 * Callers:
 *     SmcProcessResizeRequest @ 0x1408AD3AC (SmcProcessResizeRequest.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     SmAlloc @ 0x1400E4BD4 (SmAlloc.c)
 *     SmStoreResize @ 0x1408ACDDC (SmStoreResize.c)
 *     SmcCacheReference @ 0x1408AFF08 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x1408B0700 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x1408B0740 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  struct _PRIVILEGE_SET *v3; // rsi
  struct _EX_RUNDOWN_REF v4; // rax
  unsigned __int64 Count; // rdi
  int v6; // edi
  __int64 v7; // rax
  ULONG *v8; // r13
  unsigned __int64 v9; // r12
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // r14
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi
  struct _PRIVILEGE_SET *v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  _DWORD *v18; // rcx
  struct _KTHREAD *v19; // rax
  _DWORD *v20; // rcx
  unsigned __int64 v21; // r9
  struct _PRIVILEGE_SET *v22; // rdx
  unsigned __int64 v23; // r8
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+A8h] [rbp+48h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v28 = 0;
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( !v4.Count )
    return (unsigned int)-1073741672;
  v7 = *(unsigned int *)(v4.Count + 8);
  v8 = a2 + 4;
  if ( a2[4] > (unsigned int)v7 )
  {
    v6 = -1073741811;
    goto LABEL_35;
  }
  v9 = (unsigned __int64)(v7 + 31) >> 5;
  v3 = (struct _PRIVILEGE_SET *)SmAlloc((unsigned int)(4 * v9), 0x72436D73u);
  if ( v3 )
  {
    v10 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(Count + 8);
    BitMapHeader.Buffer = &v3->PrivilegeCount;
    if ( v10 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      v26[1] = v3;
      v26[0] = 0x400000000LL;
      v26[2] = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (volatile signed __int64 *)(Count + 160);
    ExAcquirePushLockExclusiveEx(Count + 160, 0LL);
    v13 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(Count, a2[2], a2[3]);
    v29 = v13;
    if ( v13 )
    {
      v28 = ExAcquireRundownProtection_0(v13 + 2);
      if ( (*a2 & 0x100) != 0 )
      {
        v6 = SmcStorePlacementGet(Count, *v8, (__int64)v26);
        if ( v6 < 0 )
          goto LABEL_30;
        v14 = v29;
        v15 = v3;
        v16 = (unsigned int)v9;
        v17 = 0LL;
        v18 = (_DWORD *)v29[1].Count;
        if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9) )
          v16 = 0LL;
        if ( v16 )
        {
          do
          {
            ++v17;
            *v18 |= v15->PrivilegeCount;
            v15 = (struct _PRIVILEGE_SET *)((char *)v15 + 4);
            ++v18;
          }
          while ( v17 < v16 );
        }
      }
      else
      {
        v14 = v29;
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegion();
      SmStoreResize(a2[3], a2[2], (unsigned int)&BitMapHeader, (_DWORD)a2 + 16, (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !*v8 )
      {
        v6 = 0;
LABEL_33:
        if ( v28 )
          ExReleaseRundownProtection_0(v29 + 2);
        goto LABEL_35;
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v12, 0LL);
      v20 = (_DWORD *)v14[1].Count;
      v21 = (unsigned int)v9;
      v22 = v3;
      v23 = 0LL;
      if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9) )
        v21 = 0LL;
      if ( v21 )
      {
        do
        {
          ++v23;
          *v20 ^= v22->PrivilegeCount;
          v22 = (struct _PRIVILEGE_SET *)((char *)v22 + 4);
          ++v20;
        }
        while ( v23 < v21 );
      }
      v6 = 0;
    }
    else
    {
      v6 = -1073741672;
    }
LABEL_30:
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    goto LABEL_33;
  }
  v6 = -1073741670;
LABEL_35:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  if ( v3 )
    CmSiFreeMemory(v3);
  return (unsigned int)v6;
}
