/*
 * XREFs of RtlpxLookupFunctionTable @ 0x14001B410
 * Callers:
 *     RtlLookupFunctionEntry @ 0x14001A590 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001A8A0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlPcToFileHeader @ 0x14012F580 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTable @ 0x14013AE10 (RtlLookupFunctionTable.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x140A14208 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x140A14B10 (KiVerifyPdata.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14005F070 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400F79C0 (MmUnlockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  PVOID v2; // r13
  int v3; // r15d
  int *v6; // r12
  unsigned int v7; // ebp
  int v8; // r14d
  int v9; // r9d
  int v10; // r11d
  int v11; // edx
  char *v12; // r10
  int *v13; // rsi
  char *v14; // r8
  PVOID result; // rax
  unsigned int v16; // ebp
  int v17; // esi
  int v18; // r10d
  int v19; // edx
  char *v20; // r9
  int *v21; // r11
  char *v22; // r8
  unsigned int v23; // r9d
  int v24; // r10d
  PVOID *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int8 v28; // [rsp+68h] [rbp+10h] BYREF
  int v29; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v3 = 1;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v6 = RtlpInvertedFunctionTable;
  v29 = RtlpInvertedFunctionTable[2];
  if ( (v29 & 1) != 0 )
    goto LABEL_22;
  if ( *RtlpInvertedFunctionTable != 1 )
  {
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    {
      v7 = dword_1404648B0;
      v8 = 4096;
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    v9 = 1;
    v10 = *RtlpInvertedFunctionTable - 1;
    if ( v10 >= 1 )
    {
      do
      {
        v11 = (v10 + v9) >> 1;
        v12 = *(char **)&RtlpInvertedFunctionTable[6 * v11 + 6];
        v13 = &RtlpInvertedFunctionTable[6 * v11];
        v14 = &v12[v13[8]];
        if ( a1 >= (unsigned __int64)v12 )
        {
          if ( a1 > 0x7FFFFFFEFFFFLL
            && v8
            && a1 >= (unsigned __int64)&v14[v7]
            && a1 < (unsigned __int64)&v14[v8 + v7]
            && v12 != PsNtosImageBase
            && v12 != PsHalImageBase )
          {
            *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
            *(_QWORD *)(a2 + 8) = &v14[v7];
            *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
            result = &RtlRetpolineStubsFunctionTable;
            *(_DWORD *)(a2 + 16) = v8;
            goto LABEL_21;
          }
          if ( a1 < (unsigned __int64)v14 )
          {
            *(_OWORD *)a2 = *((_OWORD *)v13 + 1);
            *(_QWORD *)(a2 + 16) = *((_QWORD *)v13 + 4);
            result = *(PVOID *)a2;
LABEL_21:
            if ( v6[2] != v29 )
              goto LABEL_22;
            return result;
          }
          v9 = v11 + 1;
        }
        else
        {
          if ( !v11 )
            break;
          v10 = v11 - 1;
        }
      }
      while ( v10 >= v9 );
    }
  }
  if ( !*((_BYTE *)RtlpInvertedFunctionTable + 12) )
  {
    result = 0LL;
    goto LABEL_21;
  }
LABEL_22:
  MmLockLoadedModuleListShared(&v28);
  if ( *RtlpInvertedFunctionTable != 1 )
  {
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    {
      v16 = dword_1404648B0;
      v17 = 4096;
    }
    else
    {
      v16 = 0;
      v17 = 0;
    }
    v18 = *RtlpInvertedFunctionTable - 1;
    if ( v18 >= 1 )
    {
      do
      {
        v19 = (v18 + v3) >> 1;
        v20 = *(char **)&RtlpInvertedFunctionTable[6 * v19 + 6];
        v21 = &RtlpInvertedFunctionTable[6 * v19];
        v22 = &v20[v21[8]];
        if ( a1 >= (unsigned __int64)v20 )
        {
          if ( a1 > 0x7FFFFFFEFFFFLL
            && v17
            && a1 >= (unsigned __int64)&v22[v16]
            && a1 < (unsigned __int64)&v22[v17 + v16]
            && v20 != PsNtosImageBase
            && v20 != PsHalImageBase )
          {
            *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
            *(_QWORD *)(a2 + 8) = &v22[v16];
            v2 = &RtlRetpolineStubsFunctionTable;
            *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
            *(_DWORD *)(a2 + 16) = v17;
            goto LABEL_58;
          }
          if ( a1 < (unsigned __int64)v22 )
          {
            *(_OWORD *)a2 = *((_OWORD *)v21 + 1);
            *(_QWORD *)(a2 + 16) = *((_QWORD *)v21 + 4);
            v2 = *(PVOID *)a2;
            goto LABEL_58;
          }
          v3 = v19 + 1;
        }
        else
        {
          if ( !v19 )
            break;
          v18 = v19 - 1;
        }
      }
      while ( v18 >= v3 );
    }
  }
  if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
  {
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    {
      v23 = dword_1404648B0;
      v24 = 4096;
    }
    else
    {
      v23 = 0;
      v24 = 0;
    }
    v25 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList )
    {
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        while ( 1 )
        {
          v26 = (unsigned __int64)v25[6];
          v27 = v26 + *((unsigned int *)v25 + 16);
          if ( a1 >= v26 && a1 < v27 )
          {
            v2 = v25[2];
            *(_QWORD *)a2 = v2;
            *(_QWORD *)(a2 + 8) = v26;
            *(_DWORD *)(a2 + 16) = *((_DWORD *)v25 + 16);
            *(_DWORD *)(a2 + 20) = *((_DWORD *)v25 + 6);
            goto LABEL_58;
          }
          if ( v24 && a1 >= v27 + v23 && a1 < v27 + v24 + v23 )
            break;
          v25 = (PVOID *)*v25;
          if ( v25 == &PsLoadedModuleList )
            goto LABEL_58;
        }
        *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
        *(_QWORD *)(a2 + 8) = v27 + v23;
        v2 = &RtlRetpolineStubsFunctionTable;
        *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
        *(_DWORD *)(a2 + 16) = v24;
      }
    }
  }
LABEL_58:
  MmUnlockLoadedModuleListShared(v28);
  return v2;
}
