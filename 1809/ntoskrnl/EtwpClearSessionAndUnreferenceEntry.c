/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1405C5D5C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1405C3530 (EtwpDisableTraceProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405C4DE8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C639C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUpdateFilterData @ 0x1406581D4 (EtwpUpdateFilterData.c)
 *     EtwpAllocDataBlock @ 0x140659E84 (EtwpAllocDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x1408C3164 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // r15
  int v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // r11d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int128 v17; // xmm1
  _QWORD *v18; // r14
  char v19; // r13
  struct _KTHREAD *v20; // rax
  _QWORD *v21; // rsi
  char *v22; // r15
  char v23; // dl
  char v24; // cl
  int SchematizedFilterSize; // eax
  int v26; // r13d
  unsigned int v27; // r15d
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  char v30; // [rsp+38h] [rbp-39h]
  char v31; // [rsp+39h] [rbp-38h]
  __int64 v33; // [rsp+50h] [rbp-21h]
  int v34; // [rsp+58h] [rbp-19h]
  _OWORD v36[2]; // [rsp+60h] [rbp-11h] BYREF
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  v30 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v34 = *(unsigned __int16 *)(a2 + 88);
  if ( v34 == a1 )
  {
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v8 = 0;
  v9 = a2 + 128;
  while ( *(_DWORD *)v9 != 1 || *(unsigned __int16 *)(v9 + 6) != a1 )
  {
    ++v8;
    v9 += 32LL;
    if ( v8 >= 8 )
    {
      v31 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v9 = 0;
  memset(v36, 0, sizeof(v36));
  v11 = *(_QWORD *)&v36[1];
  v12 = a2 + 132;
  v13 = DWORD2(v36[0]);
  LOBYTE(v14) = BYTE4(v36[0]);
  v15 = -1LL;
  *((_QWORD *)&v36[1] + 1) = -1LL;
  v16 = 8LL;
  do
  {
    if ( *(_DWORD *)(v12 - 4) )
    {
      v28 = *(_BYTE *)v12;
      v29 = v14;
      LODWORD(v36[0]) = 1;
      if ( (unsigned __int8)v14 <= v28 )
        v29 = v28;
      v11 |= *(_QWORD *)(v12 + 12);
      v15 &= *(_QWORD *)(v12 + 20);
      LOBYTE(v14) = v29;
      v13 |= *(_DWORD *)(v12 + 4);
    }
    v12 += 32LL;
    --v16;
  }
  while ( v16 );
  BYTE4(v36[0]) = v14;
  *((_QWORD *)&v36[1] + 1) = v15;
  LOBYTE(v14) = 1;
  DWORD2(v36[0]) = v13;
  *(_QWORD *)&v36[1] = v11;
  v17 = v36[1];
  *(_OWORD *)(a2 + 96) = v36[0];
  *(_OWORD *)(a2 + 112) = v17;
  EtwpUpdateFilterData(a2, v8, 0, v14, 0LL);
  v31 = 1;
  v18 = *(_QWORD **)(a2 + 56);
  if ( v18 != (_QWORD *)(a2 + 56) )
  {
    v19 = ~(unsigned __int8)(1 << v8);
    do
    {
      if ( v5 )
      {
        v20 = KeGetCurrentThread();
        v21 = v18 - 2;
        v22 = (char *)v18 + 85;
        --v20->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v18[2] + 408LL, 0LL);
        v30 = 1;
        *(_QWORD *)(v18[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v21 = v18;
        v22 = (char *)v18 + 100;
      }
      v23 = *v22;
      v18 = (_QWORD *)*v18;
      v24 = *v22 & v19;
      *v22 = v24;
      if ( ((*((_BYTE *)v21 + 98) & 8) == 0 || v34 == a1) && v24 != v23 )
      {
        EtwpComputeRegEntryEnableInfo(v21, Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *((_BYTE *)v21 + 100));
        v26 = SchematizedFilterSize;
        v27 = 120;
        if ( SchematizedFilterSize )
          v27 = SchematizedFilterSize + 136;
        v7 = EtwpAllocDataBlock(v27, 0LL);
        if ( v7 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v27;
          MEMORY[0x28] = *(_OWORD *)(v21[4] + 40LL);
          MEMORY[0x48] = Source2[0];
          MEMORY[0x58] = Source2[1];
          MEMORY[0x70] = *(_BYTE *)(a2 + 91) & 1;
          LOWORD(v33) = *(_WORD *)(a2 + 88);
          WORD1(v33) = *(unsigned __int8 *)(a2 + 90);
          HIDWORD(v33) = *(_DWORD *)(a2 + 80);
          MEMORY[0x68] = v33;
          if ( v26 )
          {
            MEMORY[0x84] = 0x80000000;
            MEMORY[0x80] = v26;
            MEMORY[0x78] = 136LL;
            EtwpCopySchematizedFilters((void *)0x88);
            MEMORY[0x74] = 1;
          }
          else
          {
            MEMORY[0x74] = 0;
          }
        }
        v19 = ~(unsigned __int8)(1 << v8);
      }
      if ( v30 )
      {
        *(_QWORD *)(v21[4] + 416LL) = 0LL;
        ExReleasePushLockEx(v21[4] + 408LL, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v30 = 0;
      }
      v5 = a3;
    }
    while ( v18 != (_QWORD *)(a2 + 56) );
  }
LABEL_7:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(a2 + 408, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v31 == 1 )
    EtwpUnreferenceGuidEntry((volatile signed __int64 *)a2);
  return (unsigned int)v7;
}
