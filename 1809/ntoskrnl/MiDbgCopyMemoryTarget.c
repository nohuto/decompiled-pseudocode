/*
 * XREFs of MiDbgCopyMemoryTarget @ 0x1402BAB80
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiCopyFromUntrustedMemory @ 0x1402BA6E0 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x1402BA808 (MiCopyToUntrustedMemory.c)
 */

__int64 __fastcall MiDbgCopyMemoryTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edi
  _BYTE *v11; // rbp
  __int64 i; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  unsigned int v18; // r8d
  unsigned int v19; // edx
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  int v22; // eax
  signed __int32 v23; // eax
  unsigned int v24; // edi
  __int64 result; // rax
  int j; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v27[5]; // [rsp+28h] [rbp-40h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v28 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v28, a2, (__int64)a3);
    goto LABEL_25;
  }
  v9 = v8 | *(_DWORD *)(a4 + 4);
  v10 = 0;
  *(_DWORD *)a4 = v9;
  v11 = *(_BYTE **)a2;
  MiFillPteHierarchy(*(_QWORD *)a2, v27);
  for ( i = 3LL; ; i = v15 - 1 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v27[i]);
    a2 = 3221225477LL;
    if ( (v13 & 1) == 0 )
      break;
    if ( (v13 & 0x80u) != 0LL || !v15 )
      goto LABEL_8;
  }
  v10 = -1073741819;
LABEL_8:
  if ( (v13 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
    {
      if ( (v13 & 0x800) == 0 )
      {
        v10 = -1073741819;
        goto LABEL_24;
      }
      if ( (v13 & 0x42) == 0 )
      {
        MiWriteValidPteNewProtection(v14, v13 | 0x42);
        LeafVa = MiGetLeafVa((unsigned __int64)v11);
        SystemRegionType = MiGetSystemRegionType(LeafVa);
        v18 = 2;
        if ( SystemRegionType == 1 )
        {
          v19 = 2;
        }
        else if ( SystemRegionType == 2 )
        {
          v19 = 1;
          v18 = 0;
        }
        else
        {
          v19 = 0;
        }
        KeFlushSingleTb((unsigned __int64)v11, v19, v18);
      }
    }
    if ( v10 >= 0 )
    {
      v20 = *(_DWORD *)(v6 + 20);
      v21 = *(_DWORD *)(v6 + 16);
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
        v22 = MiCopyToUntrustedMemory(v11, *(_BYTE **)(v6 + 8), v21, v20);
      else
        v22 = MiCopyFromUntrustedMemory(*(_BYTE **)(v6 + 8), v11, v21, v20);
      v10 = v22;
    }
  }
LABEL_24:
  *(_DWORD *)(v6 + 28) = v10;
LABEL_25:
  v23 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v24 = ~v23 & 0x80000000;
  if ( (v23 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j, a2, (__int64)a3) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v24 )
        break;
    }
  }
  else
  {
    result = v24 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
