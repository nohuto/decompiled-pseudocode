/*
 * XREFs of RtlSetEnvironmentVar @ 0x180057690
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x180057640 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpAllocateEnvBlock @ 0x180057FB8 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // r12
  SIZE_T i; // rax
  WCHAR v8; // cx
  SIZE_T j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  PVOID v12; // r9
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r13
  SIZE_T v16; // rdi
  char *v17; // r12
  SIZE_T v18; // rbx
  char *v19; // r14
  __int16 v20; // ax
  char *v21; // rcx
  __int16 v22; // ax
  SIZE_T v23; // rax
  PVOID v24; // r15
  SIZE_T v25; // r13
  SIZE_T v26; // rdi
  SIZE_T v27; // r12
  char *v28; // rax
  char *v29; // r15
  __int64 v30; // rbx
  char *v31; // rdi
  char *v32; // rdi
  SIZE_T v33; // rbx
  char v34; // r14
  _RTL_USER_PROCESS_PARAMETERS *v35; // rax
  SIZE_T v36; // r15
  char *EnvBlock; // rsi
  char *v38; // rdi
  char *v39; // rsi
  char *v40; // rdi
  PCWSTR v41; // r9
  char *v42; // r10
  SIZE_T v43; // rax
  const WCHAR *v44; // r11
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  int v47; // edx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v50; // [rsp+20h] [rbp-98h]
  char v51; // [rsp+21h] [rbp-97h]
  PVOID BaseAddress; // [rsp+28h] [rbp-90h]
  char *v53; // [rsp+30h] [rbp-88h]
  char *v54; // [rsp+30h] [rbp-88h]
  NTSTATUS v55; // [rsp+38h] [rbp-80h]
  _RTL_USER_PROCESS_PARAMETERS *v56; // [rsp+40h] [rbp-78h]
  char *v57; // [rsp+50h] [rbp-68h]
  SIZE_T v58; // [rsp+60h] [rbp-58h]
  char *v59; // [rsp+68h] [rbp-50h]
  const WCHAR *v61; // [rsp+C8h] [rbp+10h]
  SIZE_T v62; // [rsp+D0h] [rbp+18h]

  v62 = NameLength;
  v61 = Name;
  v5 = Value;
  v57 = 0LL;
  v58 = 0LL;
  v50 = 0;
  v51 = 0;
  if ( !NameLength || !*Name )
    return -1073741811;
  for ( i = 1LL; i < NameLength; ++i )
  {
    v8 = Name[i];
    if ( !v8 || v8 == 61 )
      return -1073741811;
  }
  if ( v5 )
  {
    for ( j = 0LL; j < ValueLength; ++j )
    {
      if ( !v5[j] )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v56 = ProcessParameters;
  v55 = 0;
  v59 = 0LL;
  if ( Environment )
  {
    v12 = *Environment;
    BaseAddress = v12;
    if ( ProcessParameters->Environment != v12 )
      goto LABEL_15;
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      v50 = 1;
  }
  else
  {
    v51 = 1;
    v50 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v12 = ProcessParameters->Environment;
    BaseAddress = v12;
    NameLength = v62;
  }
  Name = v61;
LABEL_15:
  v13 = (char *)v12;
  v14 = 0LL;
  if ( v12 )
  {
    v15 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v13 )
        goto LABEL_33;
      v17 = v13;
      v18 = 0LL;
      while ( 1 )
      {
        v13 += 2;
        if ( !*(_WORD *)v13 )
          break;
        if ( *(_WORD *)v13 == 61 )
        {
          v18 = (v13 - v17) >> 1;
          v13 += 2;
          v15 = v13;
          v57 = v13;
          while ( *(_WORD *)v13 )
            v13 += 2;
          v16 = (v13 - v15) >> 1;
          v58 = v16;
          break;
        }
      }
      v13 += 2;
      v54 = v13;
      v41 = Name;
      v42 = v17;
      v43 = NameLength;
      if ( NameLength > v18 )
        v43 = v18;
      v44 = &Name[v43];
      while ( v41 < v44 )
      {
        v45 = *v41;
        v46 = *(unsigned __int16 *)v42;
        if ( (_DWORD)v45 != (_DWORD)v46 )
        {
          if ( (unsigned int)v45 >= 0x61 )
          {
            if ( (unsigned int)v45 > 0x7A )
              LODWORD(v45) = (unsigned __int16)(v45
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2
                                                         * ((v45 & 0xF)
                                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2LL
                                                                                * (((unsigned __int8)v45 >> 4)
                                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v45 >> 8)))))));
            else
              LODWORD(v45) = v45 - 32;
          }
          if ( (unsigned int)v46 >= 0x61 )
          {
            if ( (unsigned int)v46 > 0x7A )
              LODWORD(v46) = (unsigned __int16)(v46
                                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                         + 2
                                                         * ((v46 & 0xF)
                                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2LL
                                                                                * (((unsigned __int8)v46 >> 4)
                                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v46 >> 8)))))));
            else
              LODWORD(v46) = v46 - 32;
          }
          if ( (_DWORD)v45 != (_DWORD)v46 )
          {
            v47 = v45 - v46;
            NameLength = v62;
            goto LABEL_94;
          }
        }
        ++v41;
        v42 += 2;
      }
      NameLength = v62;
      v47 = v62 - v18;
LABEL_94:
      if ( !v47 )
        break;
      if ( v47 < 0 && !v59 )
        v59 = v17;
      Name = v61;
      v5 = Value;
      v12 = BaseAddress;
    }
    v19 = v13;
    while ( 1 )
    {
      v20 = *(_WORD *)v19;
      if ( !*(_WORD *)v19 )
        break;
      while ( 1 )
      {
        v19 += 2;
        if ( !v20 )
          break;
        v20 = *(_WORD *)v19;
      }
    }
    v14 = v19 + 2;
    if ( !Value )
    {
      v21 = v17;
      goto LABEL_67;
    }
    if ( ValueLength <= v16 )
    {
      memmove(v15, Value, 2 * ValueLength);
      *(_WORD *)&v15[2 * ValueLength] = 0;
      v21 = &v15[2 * ValueLength + 2];
      if ( ValueLength == v16 )
      {
LABEL_30:
        if ( v50 )
          memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
        v5 = Value;
        v12 = BaseAddress;
        goto LABEL_33;
      }
LABEL_67:
      memmove(v21, v13, 2 * (unsigned int)((v14 - v13) >> 1));
      goto LABEL_30;
    }
    v36 = 2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v58);
    if ( v36 < RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress) )
    {
      v40 = &v57[2 * ValueLength];
      memmove(v40 + 2, v13, 2 * (unsigned int)((v14 - v13) >> 1));
      *(_WORD *)v40 = 0;
      v5 = Value;
      memmove(v57, Value, 2 * ValueLength);
      v12 = BaseAddress;
      if ( !Environment )
      {
        v56->Environment = BaseAddress;
        v56->EnvironmentSize = v36;
        ++v56->EnvironmentVersion;
      }
      if ( v50 )
      {
        memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
        v12 = BaseAddress;
      }
    }
    else
    {
      EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v58));
      if ( !EnvBlock )
        goto LABEL_107;
      memmove(EnvBlock, BaseAddress, 2LL * (unsigned int)((v57 - (_BYTE *)BaseAddress) >> 1));
      v38 = &EnvBlock[2 * (unsigned int)((v57 - (_BYTE *)BaseAddress) >> 1)];
      v5 = Value;
      memmove(v38, Value, 2 * ValueLength);
      *(_WORD *)&v38[2 * ValueLength] = 0;
      memmove(&v38[2 * ValueLength + 2], v54, 2 * (unsigned int)((v14 - v54) >> 1));
      if ( Environment )
      {
        *Environment = EnvBlock;
      }
      else
      {
        v56->Environment = EnvBlock;
        v56->EnvironmentSize = v36;
        ++v56->EnvironmentVersion;
      }
      if ( v50 )
        memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
      if ( v51 )
      {
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        v51 = 0;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      v13 = v54;
      v12 = BaseAddress;
    }
  }
LABEL_33:
  if ( v59 )
    v13 = v59;
  v53 = v13;
  if ( v14 || !v5 )
    goto LABEL_55;
  if ( v13 )
  {
    while ( 1 )
    {
      v22 = *(_WORD *)v13;
      if ( !*(_WORD *)v13 )
        break;
      while ( 1 )
      {
        v13 += 2;
        if ( !v22 )
          break;
        v22 = *(_WORD *)v13;
      }
    }
    v23 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    v14 = v13 + 2;
    v24 = BaseAddress;
    v25 = v62;
    v26 = ValueLength;
    v27 = 2 * (ValueLength + v62 + ((v13 + 2 - (_BYTE *)BaseAddress) >> 1)) + 4;
    v13 = v53;
  }
  else
  {
    v25 = v62;
    v26 = ValueLength;
    v27 = 2 * (ValueLength + v62) + 6;
    v23 = 0LL;
    v24 = BaseAddress;
  }
  if ( v27 >= v23 )
  {
    v28 = (char *)RtlpAllocateEnvBlock(v27);
    v29 = v28;
    if ( v28 )
    {
      if ( v13 )
      {
        v30 = (unsigned int)((v13 - (_BYTE *)BaseAddress) >> 1);
        memmove(v28, BaseAddress, 2 * v30);
      }
      else
      {
        v30 = 0LL;
      }
      v31 = &v29[2 * v30];
      memmove(v31, v61, 2 * v25);
      v32 = &v31[2 * v25];
      *(_WORD *)v32 = 61;
      v33 = 2 * ValueLength;
      memmove(v32 + 2, Value, 2 * ValueLength);
      *(_WORD *)&v32[2 * ValueLength + 2] = 0;
      if ( v13 )
      {
        memmove(&v32[v33 + 4], v13, 2 * (unsigned int)((v14 - v13) >> 1));
        if ( v50 )
          memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
      }
      else
      {
        *(_WORD *)&v32[v33 + 4] = 0;
      }
      if ( Environment )
      {
        *Environment = v29;
      }
      else
      {
        v56->Environment = v29;
        v56->EnvironmentSize = v27;
        ++v56->EnvironmentVersion;
      }
      if ( v51 )
      {
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        v51 = 0;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
    else
    {
LABEL_107:
      v55 = -1073741670;
    }
LABEL_55:
    v34 = v50;
LABEL_56:
    v35 = v56;
    goto LABEL_108;
  }
  memmove(&v13[2 * v26 + 4 + 2 * v25], v13, 2 * (unsigned int)((v14 - v13) >> 1));
  memmove(v13, v61, 2 * v25);
  v34 = v50;
  if ( v50 )
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
  v39 = &v13[2 * v25];
  *(_WORD *)v39 = 61;
  v39 += 2;
  memmove(v39, Value, 2 * v26);
  *(_WORD *)&v39[2 * v26] = 0;
  if ( Environment )
    goto LABEL_56;
  v35 = v56;
  v56->Environment = v24;
  v56->EnvironmentSize = v27;
  ++v56->EnvironmentVersion;
LABEL_108:
  if ( v55 >= 0 && v34 )
    ++v35->EnvironmentVersion;
  if ( v51 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v55;
}
