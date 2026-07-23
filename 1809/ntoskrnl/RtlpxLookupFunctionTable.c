/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1400A17F0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x14009DB60 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400A0350 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlPcToFileHeader @ 0x14012F740 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTable @ 0x1401376E0 (RtlLookupFunctionTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6908 (RtlGuardCheckLongJumpTarget.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1409D077C (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x1409D0FD0 (KiVerifyPdata.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14009B76C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1400DA708 (MmUnlockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  PVOID v2; // r13
  int v3; // ebp
  int *v6; // r14
  unsigned int v7; // esi
  int v8; // r9d
  int v9; // r10d
  int v10; // r12d
  int v11; // edx
  unsigned __int64 v12; // rax
  int *v13; // r11
  unsigned __int64 v14; // r8
  PVOID result; // rax
  unsigned int v16; // r11d
  int v17; // r9d
  int v18; // r14d
  int v19; // edx
  unsigned __int64 v20; // rax
  int *v21; // r10
  unsigned __int64 v22; // r8
  unsigned int v23; // r9d
  PVOID *v24; // rdx
  int v25; // r10d
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
    goto LABEL_19;
  if ( *RtlpInvertedFunctionTable != 1 )
  {
    v7 = 0;
    v8 = 1;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v7 = dword_140439F34;
    v9 = *RtlpInvertedFunctionTable - 1;
    v10 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? 0x1000 : 0;
    if ( v9 >= 1 )
    {
      do
      {
        v11 = (v9 + v8) >> 1;
        v12 = *(_QWORD *)&RtlpInvertedFunctionTable[6 * v11 + 6];
        v13 = &RtlpInvertedFunctionTable[6 * v11];
        v14 = v12 + (unsigned int)v13[8];
        if ( a1 >= v12 )
        {
          if ( a1 > 0x7FFFFFFEFFFFLL
            && (KiSpeculationFeatures & 0x20000000000LL) != 0
            && a1 >= v14 + v7
            && a1 < v14 + v10 + v7 )
          {
            *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
            *(_QWORD *)(a2 + 8) = v14 + v7;
            *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
            result = &RtlRetpolineStubsFunctionTable;
            *(_DWORD *)(a2 + 16) = v10;
            goto LABEL_18;
          }
          if ( a1 < v14 )
          {
            *(_OWORD *)a2 = *((_OWORD *)v13 + 1);
            *(_QWORD *)(a2 + 16) = *((_QWORD *)v13 + 4);
            result = *(PVOID *)a2;
LABEL_18:
            if ( v6[2] != v29 )
              goto LABEL_19;
            return result;
          }
          v8 = v11 + 1;
        }
        else
        {
          if ( !v11 )
            break;
          v9 = v11 - 1;
        }
      }
      while ( v9 >= v8 );
    }
  }
  if ( !*((_BYTE *)RtlpInvertedFunctionTable + 12) )
  {
    result = 0LL;
    goto LABEL_18;
  }
LABEL_19:
  MmLockLoadedModuleListShared(&v28);
  if ( *RtlpInvertedFunctionTable != 1 )
  {
    v16 = 0;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v16 = dword_140439F34;
    v17 = *RtlpInvertedFunctionTable - 1;
    v18 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? 0x1000 : 0;
    if ( v17 >= 1 )
    {
      do
      {
        v19 = (v17 + v3) >> 1;
        v20 = *(_QWORD *)&RtlpInvertedFunctionTable[6 * v19 + 6];
        v21 = &RtlpInvertedFunctionTable[6 * v19];
        v22 = v20 + (unsigned int)v21[8];
        if ( a1 >= v20 )
        {
          if ( a1 > 0x7FFFFFFEFFFFLL
            && (KiSpeculationFeatures & 0x20000000000LL) != 0
            && a1 >= v22 + v16
            && a1 < v22 + v18 + v16 )
          {
            *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
            *(_QWORD *)(a2 + 8) = v22 + v16;
            v2 = &RtlRetpolineStubsFunctionTable;
            *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
            *(_DWORD *)(a2 + 16) = v18;
            goto LABEL_51;
          }
          if ( a1 < v22 )
          {
            *(_OWORD *)a2 = *((_OWORD *)v21 + 1);
            *(_QWORD *)(a2 + 16) = *((_QWORD *)v21 + 4);
            v2 = *(PVOID *)a2;
            goto LABEL_51;
          }
          v3 = v19 + 1;
        }
        else
        {
          if ( !v19 )
            break;
          v17 = v19 - 1;
        }
      }
      while ( v17 >= v3 );
    }
  }
  if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
  {
    v23 = 0;
    v24 = (PVOID *)PsLoadedModuleList;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v23 = dword_140439F34;
    v25 = (KiSpeculationFeatures & 0x20000000000LL) != 0 ? 0x1000 : 0;
    if ( PsLoadedModuleList )
    {
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        while ( 1 )
        {
          v26 = (unsigned __int64)v24[6];
          v27 = v26 + *((unsigned int *)v24 + 16);
          if ( a1 >= v26 && a1 < v27 )
          {
            v2 = v24[2];
            *(_QWORD *)a2 = v2;
            *(_QWORD *)(a2 + 8) = v26;
            *(_DWORD *)(a2 + 16) = *((_DWORD *)v24 + 16);
            *(_DWORD *)(a2 + 20) = *((_DWORD *)v24 + 6);
            goto LABEL_51;
          }
          if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 && a1 >= v27 + v23 && a1 < v27 + v25 + v23 )
            break;
          v24 = (PVOID *)*v24;
          if ( v24 == &PsLoadedModuleList )
            goto LABEL_51;
        }
        *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
        *(_QWORD *)(a2 + 8) = v27 + v23;
        v2 = &RtlRetpolineStubsFunctionTable;
        *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
        *(_DWORD *)(a2 + 16) = v25;
      }
    }
  }
LABEL_51:
  MmUnlockLoadedModuleListShared(v28);
  return v2;
}
