/*
 * XREFs of MiLockdownSections @ 0x14071033C
 * Callers:
 *     MiConstructLoaderEntry @ 0x14070FBA0 (MiConstructLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140A13DBC (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MiUnlockLoaderEntry @ 0x1400F7668 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400F78A4 (MiLockLoaderEntry.c)
 */

__int64 __fastcall MiLockdownSections(__int64 a1)
{
  void *v1; // r15
  __int64 v2; // rsi
  __int64 result; // rax
  int v4; // edx
  int v5; // edi
  PIMAGE_NT_HEADERS v6; // rbx
  __int64 v7; // r14
  int NumberOfSections; // ebp
  _RTL_BITMAP *v9; // r12
  _DWORD *v10; // rbx
  BOOL v11; // eax
  int v12; // edx
  unsigned int v13; // ecx

  v1 = *(void **)(a1 + 48);
  v2 = a1 + 160;
  result = MiGetSystemRegionType((unsigned __int64)v1);
  v5 = v4 | 1;
  if ( (_DWORD)result == 1 )
    v5 = v4;
  if ( v5 )
  {
    v6 = RtlImageNtHeader(v1);
    v7 = v6->FileHeader.SizeOfOptionalHeader + 60LL;
    MiLockLoaderEntry(v2, 0LL);
    NumberOfSections = v6->FileHeader.NumberOfSections;
    v9 = *(_RTL_BITMAP **)(v2 + 112);
    if ( v6->FileHeader.NumberOfSections )
    {
      v10 = (unsigned int *)((char *)&v6->Signature + v7);
      do
      {
        v11 = 0;
        if ( *(v10 - 9) == 1987011374 )
          v11 = *((_WORD *)v10 - 16) == 29285;
        v12 = v11 | 2;
        if ( (*v10 & 0x20000000) == 0 )
          v12 = v11;
        if ( (v12 & v5) != 0 )
        {
          v13 = *(v10 - 5);
          if ( v13 < *(v10 - 7) )
            v13 = *(v10 - 7);
          RtlSetBits(
            v9,
            *(v10 - 6) >> 12,
            ((((unsigned __int64)v1 + *(v10 - 6) + v13 + 4095) & 0xFFFFFFFFFFFFF000uLL)
           - ((unsigned __int64)v1
            + (unsigned int)*(v10 - 6))) >> 12);
        }
        --NumberOfSections;
        v10 += 10;
      }
      while ( NumberOfSections > 0 );
    }
    return MiUnlockLoaderEntry(v2, 0);
  }
  return result;
}
