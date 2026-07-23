/*
 * XREFs of ExpHwidAppendDeviceInfoBlock @ 0x14058728C
 * Callers:
 *     sub_140586A70 @ 0x140586A70 (sub_140586A70.c)
 *     sub_140586B00 @ 0x140586B00 (sub_140586B00.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140586BC0 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     ExpHwidProcessDevice @ 0x140587158 (ExpHwidProcessDevice.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140587E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     sub_1408DC320 @ 0x1408DC320 (sub_1408DC320.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpHwidAppendDeviceInfoBlock(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int *v13; // rcx
  unsigned int v15; // esi
  int v16; // eax
  unsigned int v17; // esi
  char *PoolWithTag; // rax
  char *v19; // rbp
  __int64 v20; // rcx
  unsigned int *v21; // rcx
  void *v22; // rcx

  v4 = a4;
  v8 = a4 + 28;
  if ( a4 > 0x3FFFE4 )
    return 2147483653LL;
  v9 = *(_DWORD *)a1;
  v10 = *(unsigned int *)(a1 + 4);
  v11 = (v8 + 3) & 0xFFFFFFFC;
  if ( v9 - (unsigned int)v10 >= v11 )
  {
    if ( !*(_BYTE *)(a1 + 12) )
    {
      v12 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)(v10 + v12) = *(_OWORD *)a2;
      *(_QWORD *)(v10 + v12 + 16) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v10 + v12 + 24) = *(_DWORD *)(a2 + 24);
      v13 = (unsigned int *)(*(_QWORD *)(a1 + 16) + *(unsigned int *)(a1 + 4));
      *v13 = v8;
      if ( a3 )
        memmove(v13 + 7, a3, (unsigned int)v4);
    }
    *(_DWORD *)(a1 + 4) += v11;
LABEL_7:
    ++*(_DWORD *)(a1 + 8);
    return 0LL;
  }
  v15 = v9 + v11;
  if ( v9 + v11 < v9 || v15 > 0x400000 )
    return 2147483653LL;
  v16 = 4096;
  if ( 0x400000 - v15 < 0x1000 )
    v16 = 0x400000 - v15;
  v17 = v16 + v15;
  if ( *(_BYTE *)(a1 + 12) )
  {
    v19 = 0LL;
LABEL_17:
    v22 = *(void **)(a1 + 16);
    *(_DWORD *)a1 = v17;
    *(_DWORD *)(a1 + 4) = v10 + v11;
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a1 + 16) = v19;
    goto LABEL_7;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x20534C53u);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 4));
    v20 = *(unsigned int *)(a1 + 4);
    *(_OWORD *)&v19[v20] = *(_OWORD *)a2;
    *(_QWORD *)&v19[v20 + 16] = *(_QWORD *)(a2 + 16);
    *(_DWORD *)&v19[v20 + 24] = *(_DWORD *)(a2 + 24);
    v21 = (unsigned int *)&v19[*(unsigned int *)(a1 + 4)];
    *v21 = v8;
    if ( a3 )
      memmove(v21 + 7, a3, v4);
    LODWORD(v10) = *(_DWORD *)(a1 + 4);
    goto LABEL_17;
  }
  return 3221225626LL;
}
