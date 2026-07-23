/*
 * XREFs of MmChangeImageProtection @ 0x140652920
 * Callers:
 *     <none>
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MiSetImageProtection @ 0x1400DA5A4 (MiSetImageProtection.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     MiSessionReferenceImage @ 0x1401783DC (MiSessionReferenceImage.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  __int64 Lock; // r14
  _QWORD *v11; // rax
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // ebx
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  _QWORD *v20; // r15
  _QWORD *v21; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rsi

  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 10) & 7) != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 44) )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 40);
  if ( (v8 & 0xFFF) != 0 )
    return 3221225485LL;
  v9 = v8 >> 12;
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v11 = MiLookupDataTableEntry(*(_QWORD *)(a1 + 32), 0);
  v12 = (ULONG_PTR)v11;
  if ( v11 )
  {
    v13 = v11[6];
    v14 = a2 + a3;
    v15 = v13 + *((unsigned int *)v11 + 16);
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v15
      || a2 < v13
      || v14 > v15
      || v14 - 1 < a2 )
    {
      v17 = -1073741800;
    }
    else
    {
      v16 = *(_DWORD *)(v12 + 104);
      if ( (v16 & 0x80000) != 0 )
      {
        v17 = -1073741757;
      }
      else
      {
        v17 = 0;
        *(_DWORD *)(v12 + 104) = v16 | 0x80000;
        if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
          MiSessionReferenceImage(v18);
        else
          ++*(_WORD *)(v12 + 108);
      }
    }
  }
  else
  {
    v17 = -1073741275;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock);
  MmReleaseLoadLock(Lock);
  if ( v17 >= 0 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v12 + 48)) )
    {
      v17 = -1073741800;
    }
    else
    {
      v19 = 0;
      v20 = (_QWORD *)(a1 + 48);
      if ( v9 )
      {
        v21 = (_QWORD *)(a1 + 48);
        while ( (*(_QWORD *)(48LL * *v21 - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
        {
          ++v19;
          ++v21;
          if ( v19 >= v9 )
            goto LABEL_19;
        }
        v17 = -1073741800;
      }
      else
      {
LABEL_19:
        MiSetImageProtection(v12, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 1u);
        if ( a4 == 1 )
        {
          v23 = *(_QWORD *)(v12 + 112);
          if ( v23
            && (v26 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v23) + 96) + 40LL), (v26 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
          {
            v24 = v26 & 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v24 = 0LL;
          }
          if ( qword_14040EE50 )
          {
            v25 = qword_14040EE50(v24, a1, a2, a3, a2 - *(_QWORD *)(v12 + 48));
            v17 = v25;
            if ( v25 >= 0 )
            {
              if ( (MiFlags & 0x10000) != 0 && v25 == 300 && v9 )
              {
                v27 = v9;
                do
                {
                  MiMarkPfnVerified(48LL * *v20++ - 0x58000000000LL, 0);
                  --v27;
                }
                while ( v27 );
              }
              MiSetImageProtection(v12, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 3u);
              v17 = 0;
            }
          }
          else
          {
            v17 = -1073741822;
          }
        }
        else if ( (MiFlags & 0x10000) != 0 && v9 )
        {
          v28 = v9;
          do
          {
            MiClearPfnImageVerified(48LL * *v20++ - 0x58000000000LL, 24);
            --v28;
          }
          while ( v28 );
        }
      }
    }
    MmAcquireLoadLock();
    --*(_WORD *)(Lock + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v12 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(Lock);
    MiUnloadSystemImage(v12);
    MmReleaseLoadLock(Lock);
  }
  KiLeaveCriticalRegionUnsafe(Lock);
  return (unsigned int)v17;
}
