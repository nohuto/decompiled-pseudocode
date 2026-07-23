/*
 * XREFs of WmipGetSMBiosEventlog @ 0x1408B3C60
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1406A8E70 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     WmipFindSMBiosStructure @ 0x1408B3A24 (WmipFindSMBiosStructure.c)
 */

__int64 __fastcall WmipGetSMBiosEventlog(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned __int8 v6; // r11
  __int128 *v7; // r10
  unsigned __int16 v8; // r12
  char v9; // r13
  unsigned int v10; // ebx
  unsigned __int16 v11; // r9
  char v12; // dl
  unsigned int v13; // esi
  void *v14; // r14
  __int128 v15; // xmm0
  const void *v16; // rax
  void *v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+58h] BYREF

  result = WmipFindSMBiosStructure(15, &v18, &BaseAddress, &NumberOfBytes);
  if ( (int)result < 0 )
    return result;
  v5 = v18;
  v6 = *(_BYTE *)(v18 + 1);
  v7 = (__int128 *)(v18 + 4);
  v8 = *(_WORD *)(v18 + 4);
  v9 = *(_BYTE *)(v18 + 10);
  v10 = *(_DWORD *)(v18 + 16);
  if ( v6 < 0x17u )
  {
    v11 = 0;
    v12 = 0;
  }
  else
  {
    v11 = *(unsigned __int8 *)(v18 + 21) * *(unsigned __int8 *)(v18 + 22);
    v12 = 1;
    if ( v6 != v11 + 23 )
    {
      if ( BaseAddress )
        MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
      ExReleaseResourceLite(&WmipSMBiosLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 3221225473LL;
    }
  }
  v13 = v11 + v8 + 23;
  if ( *a2 < v13 )
  {
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    result = 3221225507LL;
  }
  else
  {
    *(_BYTE *)(a1 + 3) = 0;
    v14 = (void *)(v11 + a1 + 23);
    *(_WORD *)a1 = v11;
    *(_BYTE *)(a1 + 2) = v12;
    if ( v12 == 1 )
    {
      memmove((void *)(a1 + 4), v7, *(unsigned __int8 *)(v5 + 1) - 4LL);
    }
    else
    {
      v15 = *v7;
      *(_WORD *)(a1 + 20) = 0;
      *(_OWORD *)(a1 + 4) = v15;
      *(_BYTE *)(a1 + 22) = 0;
    }
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v9
      && v9 == 3
      && (NumberOfBytes = v10, v16 = (const void *)MmMapIoSpaceEx(v10, v8, 4u), v17 = (void *)v16, v14)
      && v16 )
    {
      memmove(v14, v16, v8);
      MmUnmapIoSpace(v17, v8);
      result = 0LL;
    }
    else
    {
      result = 3221225473LL;
    }
  }
  *a2 = v13;
  return result;
}
