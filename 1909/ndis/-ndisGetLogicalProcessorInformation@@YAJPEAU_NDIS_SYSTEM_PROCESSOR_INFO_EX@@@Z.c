/*
 * XREFs of ?ndisGetLogicalProcessorInformation@@YAJPEAU_NDIS_SYSTEM_PROCESSOR_INFO_EX@@@Z @ 0x1C0146798
 * Callers:
 *     ?ndisGetProcessorInfo@@_Y2INIT@@AHXZ @ 0x1C01465C0 (-ndisGetProcessorInfo@@_Y2INIT@@AHXZ.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(struct _NDIS_SYSTEM_PROCESSOR_INFO_EX *a1)
{
  ULONG v1; // r12d
  int v2; // r13d
  ULONG v3; // r14d
  ULONG v4; // ebx
  _DWORD *PoolWithTag; // rax
  void *v6; // r15
  size_t v7; // rbx
  _DWORD *v8; // rax
  void *v9; // rbx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v10; // rax
  __m128i *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rax
  ULONG v14; // r15d
  __int64 v15; // r8
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v16; // rbx
  __int64 Size; // rax
  __m128i v19; // xmm0
  unsigned int v20; // r15d
  int v21; // r13d
  unsigned __int64 v22; // r14
  unsigned __int8 v23; // al
  ULONG v24; // edi
  unsigned __int64 v25; // r12
  char v26; // al
  int v27; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v29; // r15d
  unsigned __int16 v30; // r14
  __m128i v31; // xmm0
  unsigned __int64 v32; // rbx
  unsigned __int8 v33; // al
  unsigned __int64 v34; // r12
  __m128i v35; // xmm0
  unsigned __int64 v36; // rbx
  unsigned __int8 Number; // al
  unsigned __int64 v38; // r14
  int v39; // r12d
  unsigned __int16 v40; // r14
  __m128i v41; // xmm0
  unsigned __int64 v42; // rsi
  unsigned __int8 v43; // al
  unsigned __int64 v44; // r13
  ULONG v45; // eax
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rax
  char *v49; // rdx
  char v50; // al
  char v51; // [rsp+20h] [rbp-48h]
  unsigned int i; // [rsp+24h] [rbp-44h]
  char v53; // [rsp+28h] [rbp-40h]
  unsigned int v54; // [rsp+2Ch] [rbp-3Ch]
  int v55; // [rsp+30h] [rbp-38h]
  NTSTATUS v56; // [rsp+34h] [rbp-34h]
  __m128i *v57; // [rsp+38h] [rbp-30h]
  _DWORD *v58; // [rsp+40h] [rbp-28h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v59; // [rsp+48h] [rbp-20h]
  __int64 v60; // [rsp+50h] [rbp-18h]
  _DWORD *v61; // [rsp+58h] [rbp-10h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+48h] BYREF
  int v63; // [rsp+B4h] [rbp+4Ch]
  ULONG Length; // [rsp+B8h] [rbp+50h] BYREF
  ULONG v65; // [rsp+C0h] [rbp+58h]
  ULONG v66; // [rsp+C8h] [rbp+60h]

  v63 = HIDWORD(a1);
  v1 = 0;
  v2 = 0;
  v60 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v3 = 0;
  v55 = 0;
  v4 = 0;
  v65 = 0;
  v51 = 1;
  v53 = 1;
  ProcNumber = 0;
  v54 = 0;
  for ( i = 0; v4 < ndisNumberOfActiveProcessorsAtBoot; ++v4 )
    KeGetProcessorNumberFromIndex(v4, (PPROCESSOR_NUMBER)WPP_MAIN_CB.Queue.ListEntry.Blink + 5 * v4);
  if ( v4 < ndisMaxNumberOfProcessors )
  {
    v48 = ndisMaxNumberOfProcessors - v4;
    v49 = (char *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + 20 * v4 + 3;
    do
    {
      *(_DWORD *)(v49 - 3) = 0xFFFFFF;
      v49 += 20;
      --v48;
    }
    while ( v48 );
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  v58 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 4LL * ndisMaxNumberOfProcessors;
    memset(PoolWithTag, 0, v7);
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x2020444Eu);
    v61 = v8;
    v9 = v8;
    if ( v8
      && (memset(v8, 255, 4LL * ndisMaxNumberOfProcessors),
          Length = 0,
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v10 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x2020444Eu),
          v59 = v10,
          (v11 = (__m128i *)v10) != 0LL) )
    {
      v56 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v10, &Length);
      v12 = v56;
      if ( v56 >= 0 )
      {
        v66 = 0;
        v57 = v11;
        if ( Length )
        {
          do
          {
            if ( v11->m128i_i32[0] )
            {
              if ( v11->m128i_i32[0] == 1 )
              {
                v35 = v11[2];
                *(_WORD *)&ProcNumber.Number = 0;
                v36 = v35.m128i_i64[0];
                ProcNumber.Group = _mm_extract_epi16(v35, 4);
                Number = 0;
                if ( v35.m128i_i64[0] )
                {
                  do
                  {
                    v38 = v36;
                    if ( (v36 & 1) != 0 )
                    {
                      *((_WORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink[1].Flink
                      + 10 * KeGetProcessorIndexFromNumber(&ProcNumber)) = v11->m128i_i16[4];
                      Number = ProcNumber.Number;
                    }
                    ++Number;
                    v36 >>= 1;
                    ProcNumber.Number = Number;
                  }
                  while ( v38 >= 2 );
                  v3 = v65;
                }
              }
              else if ( v11->m128i_i32[0] == 3 )
              {
                v29 = 0;
                v30 = 0;
                if ( v11[1].m128i_i16[7] )
                {
                  do
                  {
                    v31 = v11[v30 + 2];
                    *(_WORD *)&ProcNumber.Number = 0;
                    v32 = v31.m128i_i64[0];
                    ProcNumber.Group = _mm_extract_epi16(v31, 4);
                    v33 = 0;
                    if ( v31.m128i_i64[0] )
                    {
                      do
                      {
                        v34 = v32;
                        if ( (v32 & 1) != 0 )
                        {
                          ++v29;
                          *((_DWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink
                          + 5 * KeGetProcessorIndexFromNumber(&ProcNumber)
                          + 1) = v2;
                          v33 = ProcNumber.Number;
                        }
                        ++v33;
                        v32 >>= 1;
                        ProcNumber.Number = v33;
                      }
                      while ( v34 >= 2 );
                      v11 = v57;
                    }
                    ++v30;
                  }
                  while ( v30 < (unsigned int)v11[1].m128i_i16[7] );
                  v1 = v66;
                }
                if ( v2 )
                {
                  v50 = v53;
                  if ( v29 != v54 )
                    v50 = 0;
                  v53 = v50;
                }
                else
                {
                  v54 = v29;
                }
                v3 = v65;
                v55 = ++v2;
              }
            }
            else
            {
              v19 = v11[2];
              *(_WORD *)&ProcNumber.Number = 0;
              v20 = 0;
              v21 = 0;
              v22 = v19.m128i_i64[0];
              ProcNumber.Group = _mm_extract_epi16(v19, 4);
              v23 = 0;
              if ( v19.m128i_i64[0] )
              {
                v24 = v65;
                do
                {
                  v25 = v22;
                  if ( (v22 & 1) != 0 )
                  {
                    ++v20;
                    v27 = v21++;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                    *((_DWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Blink + 5 * ProcessorIndexFromNumber + 1) = v27;
                    v58[ProcessorIndexFromNumber] = v24;
                    v23 = ProcNumber.Number;
                  }
                  ++v23;
                  v22 >>= 1;
                  ProcNumber.Number = v23;
                }
                while ( v25 >= 2 );
                v11 = v57;
                v1 = v66;
              }
              if ( v65 )
              {
                v26 = v51;
                if ( v20 != i )
                  v26 = 0;
                v51 = v26;
              }
              else
              {
                i = v20;
              }
              v2 = v55;
              v3 = ++v65;
            }
            v13 = v11->m128i_u32[1];
            v1 += v13;
            v11 = (__m128i *)((char *)v11 + v13);
            v66 = v1;
            v57 = v11;
          }
          while ( v1 < Length );
          v12 = v56;
        }
        v14 = 0;
        v15 = v60;
        v11 = (__m128i *)v59;
        v16 = v59;
        v65 = 0;
        *(_DWORD *)(v60 + 12) = v2;
        *(_DWORD *)(v60 + 16) = v3;
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
                  *(_WORD *)&ProcNumber.Number = 0;
                  v42 = v41.m128i_i64[0];
                  ProcNumber.Group = _mm_extract_epi16(v41, 4);
                  v43 = 0;
                  if ( v41.m128i_i64[0] )
                  {
                    do
                    {
                      v44 = v42;
                      if ( (v42 & 1) != 0 )
                      {
                        v45 = KeGetProcessorIndexFromNumber(&ProcNumber);
                        v46 = (unsigned int)v58[v45];
                        v47 = v61[v46];
                        if ( v47 == -1 )
                        {
                          v47 = v39++;
                          v61[v46] = v47;
                        }
                        *((_DWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Blink + 5 * v45) = v47;
                        v43 = ProcNumber.Number;
                      }
                      ++v43;
                      v42 >>= 1;
                      ProcNumber.Number = v43;
                    }
                    while ( v44 >= 2 );
                  }
                  ++v40;
                }
                while ( v40 < v16->Processor.GroupCount );
                v14 = v65;
              }
            }
            Size = v16->Size;
            v14 += Size;
            v16 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v16 + Size);
            v65 = v14;
          }
          while ( v14 < Length );
          v12 = v56;
          v11 = (__m128i *)v59;
          v15 = v60;
        }
        if ( v51 )
        {
          *(_DWORD *)(v15 + 24) = i;
          if ( v53 )
          {
            if ( i )
              *(_DWORD *)(v15 + 20) = v54 / i;
          }
        }
        v9 = v61;
        v6 = v58;
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
