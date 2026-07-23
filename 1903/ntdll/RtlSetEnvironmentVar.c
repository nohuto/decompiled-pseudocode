/*
 * XREFs of RtlSetEnvironmentVar @ 0x18005CDD0
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x18005CD80 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005D77C @ 0x18005D77C (sub_18005D77C.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // r15
  SIZE_T v6; // rbx
  PCWSTR v7; // r8
  unsigned __int64 i; // rax
  WCHAR v10; // cx
  SIZE_T j; // rax
  PPEB ProcessEnvironmentBlock; // rcx
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // r13
  char *v14; // rdx
  PVOID v15; // r9
  char *v16; // rsi
  char *v17; // r14
  SIZE_T v18; // rdi
  char *v19; // r13
  unsigned __int64 v20; // r15
  char *v21; // rax
  const WCHAR *v22; // r10
  char *v23; // r11
  SIZE_T v24; // rax
  const WCHAR *v25; // rbx
  WCHAR v26; // r8
  unsigned __int16 v27; // r9
  int v28; // ecx
  __int16 v29; // ax
  SIZE_T v30; // rax
  _BYTE *v31; // rdi
  SIZE_T v32; // r13
  SIZE_T v33; // r12
  char *v34; // rax
  char *v35; // r15
  __int64 v36; // rbx
  char *v37; // rdi
  char *v38; // rdi
  __int64 v39; // rbx
  char v40; // bl
  _QWORD *v41; // rax
  char *v42; // r14
  __int16 v43; // ax
  SIZE_T v44; // r15
  char *v45; // rsi
  char *v46; // rdi
  char *v47; // rdi
  size_t v48; // rbx
  char *v49; // rsi
  _RTL_CRITICAL_SECTION *FastPebLock; // rcx
  LOGICAL IsCriticalSectionLockedByThread; // eax
  char v53; // [rsp+20h] [rbp-98h]
  char v54; // [rsp+21h] [rbp-97h]
  PVOID BaseAddress; // [rsp+28h] [rbp-90h]
  char *v56; // [rsp+30h] [rbp-88h]
  char *v57; // [rsp+30h] [rbp-88h]
  char *v58; // [rsp+38h] [rbp-80h]
  NTSTATUS v59; // [rsp+40h] [rbp-78h]
  _QWORD *p_MaximumLength; // [rsp+48h] [rbp-70h]
  char *v61; // [rsp+58h] [rbp-60h]
  SIZE_T v62; // [rsp+60h] [rbp-58h]

  v5 = Value;
  v6 = NameLength;
  v7 = Name;
  v61 = 0LL;
  v62 = 0LL;
  v53 = 0;
  v54 = 0;
  if ( !v6 || !*Name )
    return -1073741811;
  for ( i = 1LL; i < v6; ++i )
  {
    v10 = Name[i];
    if ( !v10 || v10 == 61 )
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
  p_MaximumLength = &ProcessParameters->MaximumLength;
  v59 = 0;
  v14 = 0LL;
  v58 = 0LL;
  if ( Environment )
  {
    v15 = *Environment;
    BaseAddress = v15;
    if ( ProcessParameters->Environment == v15 )
    {
      FastPebLock = ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock
        || (IsCriticalSectionLockedByThread = RtlIsCriticalSectionLockedByThread(FastPebLock),
            v14 = 0LL,
            v7 = Name,
            v15 = BaseAddress,
            IsCriticalSectionLockedByThread) )
      {
        v53 = 1;
      }
    }
  }
  else
  {
    v54 = 1;
    v53 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v15 = ProcessParameters->Environment;
    BaseAddress = v15;
    v14 = 0LL;
    v7 = Name;
  }
  v16 = (char *)v15;
  v17 = 0LL;
  if ( v15 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v16 )
        goto LABEL_52;
      v19 = v16;
      v20 = 0LL;
      while ( 1 )
      {
        v16 += 2;
        if ( !*(_WORD *)v16 )
          break;
        if ( *(_WORD *)v16 == 61 )
        {
          v20 = (v16 - v19) >> 1;
          v16 += 2;
          v21 = v16;
          v61 = v16;
          while ( *(_WORD *)v16 )
            v16 += 2;
          v18 = (v16 - v21) >> 1;
          v62 = v18;
          break;
        }
      }
      v16 += 2;
      v56 = v16;
      v22 = v7;
      v23 = v19;
      v24 = v6;
      if ( v6 > v20 )
        v24 = v20;
      v25 = &v7[v24];
      while ( v22 < v25 )
      {
        v26 = *v22;
        v27 = *(_WORD *)v23;
        if ( *v22 != *(_WORD *)v23 )
        {
          if ( v26 >= 0x61u )
          {
            if ( v26 > 0x7Au )
            {
              if ( qword_180166510 && v26 >= 0xC0u )
                v26 += *(_WORD *)(qword_180166510
                                + 2LL
                                * ((v26 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                     + 2LL
                                                                     * (((v26 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2 * ((unsigned __int64)v26 >> 8))))));
            }
            else
            {
              v26 -= 32;
            }
          }
          if ( v27 >= 0x61u )
          {
            if ( v27 > 0x7Au )
            {
              if ( qword_180166510 && v27 >= 0xC0u )
                v27 += *(_WORD *)(qword_180166510
                                + 2LL
                                * ((v27 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                     + 2LL
                                                                     * (((v27 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2 * ((unsigned __int64)v27 >> 8))))));
            }
            else
            {
              v27 -= 32;
            }
          }
          if ( v26 != v27 )
          {
            v28 = v26 - v27;
            goto LABEL_34;
          }
        }
        ++v22;
        v23 += 2;
      }
      v28 = NameLength - v20;
LABEL_34:
      v15 = BaseAddress;
      if ( !v28 )
        break;
      v14 = v58;
      if ( v28 < 0 && !v58 )
      {
        v14 = v19;
        v58 = v19;
      }
      v5 = Value;
      v6 = NameLength;
      v7 = Name;
    }
    v42 = v16;
    while ( 1 )
    {
      v43 = *(_WORD *)v42;
      if ( !*(_WORD *)v42 )
        break;
      while ( 1 )
      {
        v42 += 2;
        if ( !v43 )
          break;
        v43 = *(_WORD *)v42;
      }
    }
    v17 = v42 + 2;
    v5 = Value;
    if ( !Value )
    {
      memmove(v19, v16, 2 * (unsigned int)((v17 - v16) >> 1));
      if ( v53 )
      {
        memset(&unk_180165B80, 0, 0x468uLL);
        v15 = BaseAddress;
        goto LABEL_51;
      }
      goto LABEL_83;
    }
    if ( ValueLength <= v18 )
    {
      memmove(v61, Value, 2 * ValueLength);
      *(_WORD *)&v61[2 * ValueLength] = 0;
      if ( ValueLength != v18 )
        memmove(&v61[2 * ValueLength + 2], v16, 2 * (unsigned int)((v17 - v16) >> 1));
      if ( v53 )
      {
        memset(&unk_180165B80, 0, 0x468uLL);
        v15 = BaseAddress;
LABEL_50:
        v5 = Value;
LABEL_51:
        v14 = v58;
        v6 = NameLength;
        goto LABEL_52;
      }
      v5 = Value;
LABEL_83:
      v15 = BaseAddress;
      goto LABEL_51;
    }
    v44 = 2 * (ValueLength + ((v17 - (_BYTE *)BaseAddress) >> 1) - v62);
    if ( v44 < RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress) )
    {
      v47 = &v61[2 * ValueLength];
      memmove(v47 + 2, v16, 2 * (unsigned int)((v17 - v16) >> 1));
      *(_WORD *)v47 = 0;
      memmove(v61, Value, 2 * ValueLength);
      v15 = BaseAddress;
      if ( !Environment )
      {
        p_MaximumLength[16] = BaseAddress;
        p_MaximumLength[126] = v44;
        ++p_MaximumLength[127];
      }
      if ( !v53 )
        goto LABEL_50;
      memset(&unk_180165B80, 0, 0x468uLL);
      goto LABEL_93;
    }
    v45 = (char *)sub_18005D77C(2 * (ValueLength + ((v17 - (_BYTE *)BaseAddress) >> 1) - v62));
    if ( v45 )
    {
      memmove(v45, BaseAddress, 2LL * (unsigned int)((v61 - (_BYTE *)BaseAddress) >> 1));
      v46 = &v45[2 * (unsigned int)((v61 - (_BYTE *)BaseAddress) >> 1)];
      memmove(v46, Value, 2 * ValueLength);
      *(_WORD *)&v46[2 * ValueLength] = 0;
      memmove(&v46[2 * ValueLength + 2], v56, 2 * (unsigned int)((v17 - v56) >> 1));
      if ( Environment )
      {
        *Environment = v45;
      }
      else
      {
        p_MaximumLength[16] = v45;
        p_MaximumLength[126] = v44;
        ++p_MaximumLength[127];
      }
      if ( v53 )
        memset(&unk_180165B80, 0, 0x468uLL);
      if ( v54 )
      {
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        v54 = 0;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      v16 = v56;
LABEL_93:
      v15 = BaseAddress;
      goto LABEL_50;
    }
LABEL_115:
    v59 = -1073741670;
    goto LABEL_116;
  }
LABEL_52:
  if ( v14 )
    v16 = v14;
  v57 = v16;
  if ( v17 )
  {
    v41 = p_MaximumLength;
    v40 = v53;
  }
  else
  {
    if ( !v5 )
    {
LABEL_116:
      v40 = v53;
LABEL_74:
      v41 = p_MaximumLength;
      goto LABEL_117;
    }
    if ( v16 )
    {
      while ( 1 )
      {
        v29 = *(_WORD *)v16;
        if ( !*(_WORD *)v16 )
          break;
        while ( 1 )
        {
          v16 += 2;
          if ( !v29 )
            break;
          v29 = *(_WORD *)v16;
        }
      }
      v30 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      v17 = v16 + 2;
      v31 = BaseAddress;
      v32 = ValueLength;
      v33 = 2 * (ValueLength + v6 + ((v16 + 2 - (_BYTE *)BaseAddress) >> 1)) + 4;
      v16 = v57;
    }
    else
    {
      v32 = ValueLength;
      v33 = 2 * (v6 + ValueLength) + 6;
      v30 = 0LL;
      v31 = BaseAddress;
    }
    if ( v33 >= v30 )
    {
      v34 = (char *)sub_18005D77C(v33);
      v35 = v34;
      if ( v34 )
      {
        if ( v16 )
        {
          v36 = (unsigned int)((v16 - v31) >> 1);
          memmove(v34, v31, 2 * v36);
        }
        else
        {
          v36 = 0LL;
        }
        v37 = &v35[2 * v36];
        memmove(v37, Name, 2 * NameLength);
        v38 = &v37[2 * NameLength];
        *(_WORD *)v38 = 61;
        v39 = 2 * v32;
        memmove(v38 + 2, Value, 2 * v32);
        *(_WORD *)&v38[2 * v32 + 2] = 0;
        if ( v16 )
        {
          memmove(&v38[v39 + 4], v16, 2 * (unsigned int)((v17 - v16) >> 1));
          v40 = v53;
          if ( v53 )
            memset(&unk_180165B80, 0, 0x468uLL);
        }
        else
        {
          *(_WORD *)&v38[v39 + 4] = 0;
          v40 = v53;
        }
        if ( Environment )
        {
          *Environment = v35;
        }
        else
        {
          p_MaximumLength[16] = v35;
          p_MaximumLength[126] = v33;
          ++p_MaximumLength[127];
        }
        if ( v54 )
        {
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          v54 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        goto LABEL_74;
      }
      goto LABEL_115;
    }
    memmove(&v16[2 * v6 + 4 + 2 * v32], v16, 2 * (unsigned int)((v17 - v16) >> 1));
    v48 = 2 * v6;
    memmove(v16, Name, v48);
    if ( v53 )
      memset(&unk_180165B80, 0, 0x468uLL);
    v49 = &v16[v48];
    *(_WORD *)v49 = 61;
    v49 += 2;
    memmove(v49, v5, 2 * v32);
    *(_WORD *)&v49[2 * v32] = 0;
    if ( Environment )
      goto LABEL_116;
    v41 = p_MaximumLength;
    p_MaximumLength[16] = v31;
    p_MaximumLength[126] = v33;
    ++p_MaximumLength[127];
    v40 = v53;
  }
LABEL_117:
  if ( v59 >= 0 && v40 )
    ++v41[127];
  if ( v54 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v59;
}
