/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x1C012730C
 * Callers:
 *     ndisGetProcessorInfo @ 0x1C0127134 (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  _LIST_ENTRY *Flink; // r14
  ULONG v2; // r12d
  int v3; // r13d
  ULONG v4; // ebx
  _DWORD *PoolWithTag; // rax
  void *v6; // r15
  size_t v7; // rbx
  _DWORD *v8; // rax
  void *v9; // rdi
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v10; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v11; // rsi
  unsigned int v12; // ebx
  ULONG v13; // edx
  __m128i *v14; // rdi
  __int64 v15; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v16; // rdi
  ULONG v17; // r12d
  __int64 Size; // rax
  __m128i v20; // xmm0
  unsigned int v21; // r14d
  int v22; // r15d
  unsigned __int64 v23; // rsi
  char v24; // al
  unsigned __int64 v25; // r12
  char v26; // r15
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v28; // r15d
  unsigned __int16 v29; // r14
  ULONG v30; // ebx
  __m128i v31; // xmm0
  unsigned __int64 v32; // rsi
  char v33; // al
  unsigned __int64 v34; // r12
  __m128i v35; // xmm0
  unsigned __int64 v36; // rsi
  char v37; // al
  unsigned __int64 v38; // r14
  int v39; // r15d
  WORD v40; // r14
  __m128i v41; // xmm0
  unsigned __int64 Mask; // rsi
  char v43; // al
  unsigned __int64 v44; // r13
  ULONG v45; // eax
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rdx
  char v50; // al
  char v51; // [rsp+20h] [rbp-48h]
  unsigned int i; // [rsp+24h] [rbp-44h]
  char v53; // [rsp+28h] [rbp-40h]
  unsigned int v54; // [rsp+2Ch] [rbp-3Ch]
  NTSTATUS v55; // [rsp+30h] [rbp-38h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v56; // [rsp+38h] [rbp-30h]
  _DWORD *v57; // [rsp+40h] [rbp-28h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v58; // [rsp+48h] [rbp-20h]
  _LIST_ENTRY *v59; // [rsp+50h] [rbp-18h]
  _DWORD *v60; // [rsp+58h] [rbp-10h]
  __int64 ProcNumber; // [rsp+B0h] [rbp+48h] BYREF
  ULONG Length; // [rsp+B8h] [rbp+50h] BYREF
  ULONG v63; // [rsp+C0h] [rbp+58h]
  ULONG v64; // [rsp+C8h] [rbp+60h]

  ProcNumber = a1;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v2 = 0;
  v59 = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v3 = 0;
  v63 = 0;
  v4 = 0;
  v54 = 0;
  v51 = 1;
  v53 = 1;
  for ( i = 0; v4 < ndisNumberOfActiveProcessorsAtBoot; ++v4 )
    KeGetProcessorNumberFromIndex(v4, (PPROCESSOR_NUMBER)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * v4));
  if ( v4 < ndisMaxNumberOfProcessors )
  {
    v48 = ndisMaxNumberOfProcessors - v4;
    v49 = *(_QWORD *)&WPP_MAIN_CB.DeviceType + 3LL + 20LL * v4;
    do
    {
      *(_DWORD *)(v49 - 3) = 0xFFFFFF;
      v49 += 20LL;
      --v48;
    }
    while ( v48 );
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  v57 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 4LL * ndisMaxNumberOfProcessors;
    memset(PoolWithTag, 0, v7);
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x2020444Eu);
    v60 = v8;
    v9 = v8;
    if ( v8
      && (memset(v8, 255, 4LL * ndisMaxNumberOfProcessors),
          Length = 0,
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v10 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x2020444Eu),
          v58 = v10,
          (v11 = v10) != 0LL) )
    {
      v55 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v10, &Length);
      v12 = v55;
      if ( v55 >= 0 )
      {
        v13 = 0;
        v14 = (__m128i *)v11;
        v64 = 0;
        v56 = v11;
        if ( Length )
        {
          do
          {
            if ( v14->m128i_i32[0] )
            {
              if ( v14->m128i_i32[0] == 1 )
              {
                v35 = v14[2];
                v36 = v14[2].m128i_u64[0];
                LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v35, 4);
                v37 = 0;
                if ( v35.m128i_i64[0] )
                {
                  do
                  {
                    v38 = v36;
                    if ( (v36 & 1) != 0 )
                    {
                      *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType
                               + 20LL * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                               + 16) = v14->m128i_i16[4];
                      v37 = BYTE2(ProcNumber);
                    }
                    ++v37;
                    v36 >>= 1;
                    BYTE2(ProcNumber) = v37;
                  }
                  while ( v38 >= 2 );
                  v13 = v64;
                }
              }
              else if ( v14->m128i_i32[0] == 3 )
              {
                v28 = 0;
                v29 = 0;
                if ( v14[1].m128i_i16[7] )
                {
                  v30 = v63;
                  do
                  {
                    v31 = v14[v29 + 2];
                    v32 = v14[v29 + 2].m128i_u64[0];
                    LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v31, 4);
                    v33 = 0;
                    if ( v31.m128i_i64[0] )
                    {
                      do
                      {
                        v34 = v32;
                        if ( (v32 & 1) != 0 )
                        {
                          ++v28;
                          *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType
                                    + 20LL * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)
                                    + 4) = v30;
                          v33 = BYTE2(ProcNumber);
                        }
                        ++v33;
                        v32 >>= 1;
                        BYTE2(ProcNumber) = v33;
                      }
                      while ( v34 >= 2 );
                      v14 = (__m128i *)v56;
                    }
                    ++v29;
                  }
                  while ( v29 < (unsigned int)v14[1].m128i_i16[7] );
                  v13 = v64;
                  v2 = v30;
                }
                if ( v2 )
                {
                  v50 = v53;
                  if ( v28 != v54 )
                    v50 = 0;
                  v53 = v50;
                }
                else
                {
                  v54 = v28;
                }
                v63 = ++v2;
              }
            }
            else
            {
              v20 = v14[2];
              v21 = 0;
              v22 = 0;
              v23 = v14[2].m128i_u64[0];
              LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v20, 4);
              v24 = 0;
              if ( v20.m128i_i64[0] )
              {
                do
                {
                  v25 = v23;
                  if ( (v23 & 1) != 0 )
                  {
                    ++v21;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                    *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * ProcessorIndexFromNumber + 12) = v22++;
                    v57[ProcessorIndexFromNumber] = v3;
                    v24 = BYTE2(ProcNumber);
                  }
                  ++v24;
                  v23 >>= 1;
                  BYTE2(ProcNumber) = v24;
                }
                while ( v25 >= 2 );
                v14 = (__m128i *)v56;
                v2 = v63;
                v13 = v64;
              }
              if ( v3 )
              {
                v26 = v51;
                if ( v21 != i )
                  v26 = 0;
                v51 = v26;
              }
              else
              {
                i = v21;
              }
              ++v3;
            }
            v15 = v14->m128i_u32[1];
            v13 += v15;
            v14 = (__m128i *)((char *)v14 + v15);
            v64 = v13;
            v56 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v14;
          }
          while ( v13 < Length );
          v12 = v55;
          v11 = v58;
          Flink = v59;
        }
        v16 = v11;
        HIDWORD(Flink->Blink) = v2;
        v17 = 0;
        LODWORD(Flink[1].Flink) = v3;
        v63 = 0;
        if ( Length )
        {
          do
          {
            if ( v16->Relationship == RelationProcessorPackage )
            {
              v39 = 0;
              v40 = 0;
              if ( v16->Processor.GroupCount )
              {
                do
                {
                  v41 = *((__m128i *)&v16->Group.GroupInfo[0].MaximumProcessorCount + v40);
                  Mask = v16->Processor.GroupMask[v40].Mask;
                  LODWORD(ProcNumber) = (unsigned __int16)_mm_extract_epi16(v41, 4);
                  v43 = 0;
                  if ( v41.m128i_i64[0] )
                  {
                    do
                    {
                      v44 = Mask;
                      if ( (Mask & 1) != 0 )
                      {
                        v45 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
                        v46 = (unsigned int)v57[v45];
                        v47 = v60[v46];
                        if ( v47 == -1 )
                        {
                          v47 = v39;
                          v60[v46] = v39++;
                        }
                        *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * v45 + 8) = v47;
                        v43 = BYTE2(ProcNumber);
                      }
                      ++v43;
                      Mask >>= 1;
                      BYTE2(ProcNumber) = v43;
                    }
                    while ( v44 >= 2 );
                  }
                  ++v40;
                }
                while ( v40 < v16->Processor.GroupCount );
                v17 = v63;
              }
            }
            Size = v16->Size;
            v17 += Size;
            v16 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v16 + Size);
            v63 = v17;
          }
          while ( v17 < Length );
          v12 = v55;
          v11 = v58;
          Flink = v59;
        }
        if ( v51 )
        {
          LODWORD(Flink[1].Blink) = i;
          if ( v53 )
          {
            if ( i )
              HIDWORD(Flink[1].Flink) = v54 / i;
          }
        }
        v9 = v60;
        v6 = v57;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      v12 = -1073741670;
    }
    ExFreePoolWithTag(v6, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
