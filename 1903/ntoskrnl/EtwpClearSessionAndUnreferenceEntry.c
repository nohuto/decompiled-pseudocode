/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140665E24
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140665C08 (EtwpDisableTraceProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5338 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405D3DF8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAllocDataBlock @ 0x140663284 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x14066524C (EtwpUpdateFilterData.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140666F2C (EtwpUnreferenceDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x1408FF09C (EtwpCopySchematizedFilters.c)
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
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  __int128 v19; // xmm1
  _QWORD *v20; // r14
  _DWORD *v21; // rbx
  struct _KTHREAD *v22; // rax
  __int64 v23; // rsi
  char *v24; // r15
  char v25; // dl
  char v26; // cl
  int SchematizedFilterSize; // eax
  int v28; // r13d
  unsigned int v29; // r15d
  int v30; // eax
  __int64 v31; // rcx
  char v32; // [rsp+38h] [rbp-39h]
  char v33; // [rsp+39h] [rbp-38h]
  int v35; // [rsp+3Ch] [rbp-35h]
  _DWORD *v36; // [rsp+40h] [rbp-31h] BYREF
  int v37; // [rsp+48h] [rbp-29h]
  __int64 v38; // [rsp+50h] [rbp-21h]
  int v39; // [rsp+58h] [rbp-19h]
  int v40; // [rsp+5Ch] [rbp-15h]
  __int128 v41; // [rsp+60h] [rbp-11h]
  __int128 v42; // [rsp+70h] [rbp-1h]
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  v40 = a1;
  v32 = 0;
  memset(Source2, 0, sizeof(Source2));
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v36 = 0LL;
  v35 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v39 = *(unsigned __int16 *)(a2 + 88);
  if ( v39 == a1 )
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
      v33 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v8 = 0;
  v10 = a2 + 132;
  v41 = 0uLL;
  v11 = 0;
  v12 = -1LL;
  v13 = 0;
  v14 = 1 << v7;
  v15 = 0LL;
  *((_QWORD *)&v42 + 1) = -1LL;
  *(_QWORD *)&v42 = 0LL;
  v16 = 8LL;
  do
  {
    if ( *(_DWORD *)(v10 - 4) )
    {
      v17 = *(_BYTE *)v10;
      v18 = v13;
      LODWORD(v41) = 1;
      if ( v13 <= v17 )
        v18 = v17;
      v15 |= *(_QWORD *)(v10 + 12);
      v12 &= *(_QWORD *)(v10 + 20);
      v13 = v18;
      v11 |= *(_DWORD *)(v10 + 4);
    }
    v10 += 32LL;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)&v42 = v15;
  BYTE4(v41) = v13;
  LOBYTE(v15) = 1;
  *((_QWORD *)&v42 + 1) = v12;
  v19 = v42;
  DWORD2(v41) = v11;
  *(_OWORD *)(a2 + 96) = v41;
  *(_OWORD *)(a2 + 112) = v19;
  EtwpUpdateFilterData(a2, v7, 0LL, v15, 0LL);
  v33 = 1;
  v20 = *(_QWORD **)(a2 + 56);
  if ( v20 != (_QWORD *)(a2 + 56) )
  {
    v21 = v36;
    LOBYTE(v14) = ~(_BYTE)v14;
    v37 = v14;
    do
    {
      if ( a3 )
      {
        v22 = KeGetCurrentThread();
        v23 = (__int64)(v20 - 2);
        v24 = (char *)v20 + 85;
        --v22->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v20[2] + 408LL, 0LL);
        v21 = v36;
        v32 = 1;
        *(_QWORD *)(v20[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v23 = (__int64)v20;
        v24 = (char *)v20 + 100;
      }
      v25 = *v24;
      v20 = (_QWORD *)*v20;
      v26 = *v24 & v14;
      *v24 = v26;
      if ( (*(_BYTE *)(v23 + 98) & 8) != 0 && v39 != v40 || v26 == v25 )
      {
        v6 = v35;
      }
      else
      {
        EtwpComputeRegEntryEnableInfo(v23, (__int64)Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v23 + 100));
        v28 = SchematizedFilterSize;
        v29 = 120;
        if ( SchematizedFilterSize )
          v29 = SchematizedFilterSize + 136;
        if ( v21 )
        {
          if ( v21[1] != v29 || RtlCompareMemory(v21 + 18, Source2, 0x20uLL) != 32 )
          {
            EtwpUnreferenceDataBlock(v21);
            v21 = 0LL;
            v36 = 0LL;
          }
          if ( v21 )
            goto LABEL_29;
        }
        v30 = EtwpAllocDataBlock(v29, 0LL, &v36);
        v21 = v36;
        v35 = v30;
        if ( v30 >= 0 )
        {
          *v36 = 3;
          v21[1] = v29;
          v31 = *(_QWORD *)(v23 + 32);
          BYTE3(v38) = 0;
          *(_OWORD *)(v21 + 10) = *(_OWORD *)(v31 + 40);
          *(_OWORD *)(v21 + 18) = Source2[0];
          *(_OWORD *)(v21 + 22) = Source2[1];
          v21[28] = *(_BYTE *)(a2 + 91) & 1;
          LOWORD(v38) = *(_WORD *)(a2 + 88);
          BYTE2(v38) = *(_BYTE *)(a2 + 90);
          HIDWORD(v38) = *(_DWORD *)(a2 + 80);
          *((_QWORD *)v21 + 13) = v38;
          if ( v28 )
          {
            v21[33] = 0x80000000;
            v21[32] = v28;
            *((_QWORD *)v21 + 15) = 136LL;
            EtwpCopySchematizedFilters(v21 + 34);
            v21[29] = 1;
          }
          else
          {
            v21[29] = 0;
          }
        }
        if ( v21 )
        {
LABEL_29:
          v6 = EtwpSendDataBlock(v23, v21);
          v35 = v6;
        }
        else
        {
          v6 = v35;
        }
        LOBYTE(v14) = v37;
      }
      if ( v32 )
      {
        *(_QWORD *)(*(_QWORD *)(v23 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v23 + 32) + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v21 = v36;
        v32 = 0;
      }
    }
    while ( v20 != (_QWORD *)(a2 + 56) );
    if ( v21 )
      EtwpUnreferenceDataBlock(v21);
  }
LABEL_7:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(a2 + 408, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v33 == 1 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return v6;
}
