/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140693238
 * Callers:
 *     EtwpDisableTraceProviders @ 0x14069301C (EtwpDisableTraceProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5838 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405D42F8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateFilterData @ 0x140692660 (EtwpUpdateFilterData.c)
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x14069434C (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1406AAAE4 (EtwpAllocDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x1408FE9F0 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r15d
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // r10
  unsigned __int8 v13; // r11
  int v14; // r13d
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int8 v17; // al
  _QWORD *v18; // r14
  char v19; // r13
  struct _KTHREAD *v20; // rax
  __int64 v21; // rsi
  char *v22; // r15
  char v23; // dl
  char v24; // cl
  int SchematizedFilterSize; // eax
  int v26; // r13d
  unsigned int v27; // r15d
  char v28; // [rsp+38h] [rbp-39h]
  char v29; // [rsp+39h] [rbp-38h]
  __int64 v31; // [rsp+3Ch] [rbp-35h]
  char v32; // [rsp+48h] [rbp-29h]
  __int64 v33; // [rsp+50h] [rbp-21h]
  int v34; // [rsp+58h] [rbp-19h]
  __int128 v36; // [rsp+60h] [rbp-11h]
  __int128 v37; // [rsp+70h] [rbp-1h]
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  v28 = 0;
  memset(Source2, 0, sizeof(Source2));
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  LODWORD(v31) = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v34 = *(unsigned __int16 *)(a2 + 88);
  if ( v34 == a1 )
  {
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v7 = 0;
  v8 = a2 + 128;
  while ( *(_DWORD *)v8 != 1 || *(unsigned __int16 *)(v8 + 6) != a1 )
  {
    ++v7;
    v8 += 32LL;
    if ( v7 >= 8 )
    {
      v29 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v8 = 0;
  v10 = a2 + 132;
  v36 = 0uLL;
  v11 = 0;
  v12 = -1LL;
  v13 = 0;
  v14 = 1 << v7;
  v15 = 0LL;
  v16 = 8LL;
  do
  {
    if ( *(_DWORD *)(v10 - 4) )
    {
      v17 = v13;
      LODWORD(v36) = 1;
      if ( v13 <= *(_BYTE *)v10 )
        v17 = *(_BYTE *)v10;
      v15 |= *(_QWORD *)(v10 + 12);
      v12 &= *(_QWORD *)(v10 + 20);
      v13 = v17;
      v11 |= *(_DWORD *)(v10 + 4);
    }
    v10 += 32LL;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)&v37 = v15;
  BYTE4(v36) = v13;
  LOBYTE(v15) = 1;
  *((_QWORD *)&v37 + 1) = v12;
  DWORD2(v36) = v11;
  *(_OWORD *)(a2 + 96) = v36;
  *(_OWORD *)(a2 + 112) = v37;
  EtwpUpdateFilterData(a2, v7, 0LL, v15, 0LL);
  v29 = 1;
  v18 = *(_QWORD **)(a2 + 56);
  if ( v18 != (_QWORD *)(a2 + 56) )
  {
    v19 = ~(_BYTE)v14;
    v32 = v19;
    do
    {
      if ( a3 )
      {
        v20 = KeGetCurrentThread();
        v21 = (__int64)(v18 - 2);
        v22 = (char *)v18 + 85;
        --v20->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v18[2] + 408LL, 0LL);
        v28 = 1;
        *(_QWORD *)(v18[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v21 = (__int64)v18;
        v22 = (char *)v18 + 100;
      }
      v23 = *v22;
      v18 = (_QWORD *)*v18;
      v24 = *v22 & v19;
      *v22 = v24;
      if ( (*(_BYTE *)(v21 + 98) & 8) != 0 && v34 != a1 || v24 == v23 )
      {
        v6 = v31;
      }
      else
      {
        EtwpComputeRegEntryEnableInfo(v21, (__int64)Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v21 + 100));
        v26 = SchematizedFilterSize;
        v27 = 120;
        if ( SchematizedFilterSize )
          v27 = SchematizedFilterSize + 136;
        v31 = (unsigned int)EtwpAllocDataBlock(v27, 0LL);
        if ( (int)v31 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v27;
          MEMORY[0x28] = *(_OWORD *)(*(_QWORD *)(v21 + 32) + 40LL);
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
        v6 = v31;
        v19 = v32;
      }
      if ( v28 )
      {
        *(_QWORD *)(*(_QWORD *)(v21 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v21 + 32) + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v28 = 0;
      }
    }
    while ( v18 != (_QWORD *)(a2 + 56) );
  }
LABEL_7:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(a2 + 408, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v29 == 1 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return v6;
}
