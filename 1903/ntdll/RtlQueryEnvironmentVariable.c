/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x18001A270
 * Callers:
 *     RtlExpandEnvironmentStrings @ 0x1800171C0 (RtlExpandEnvironmentStrings.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005CB10 (RtlQueryEnvironmentVariable_U.c)
 *     sub_18006BB94 @ 0x18006BB94 (sub_18006BB94.c)
 *     RtlGetExePath @ 0x180080DA0 (RtlGetExePath.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 * Callees:
 *     sub_180019D38 @ 0x180019D38 (sub_180019D38.c)
 *     sub_18001A0D8 @ 0x18001A0D8 (sub_18001A0D8.c)
 *     sub_18001A6F0 @ 0x18001A6F0 (sub_18001A6F0.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  struct _TEB *v10; // rsi
  int v11; // r15d
  unsigned __int64 *v12; // r12
  NTSTATUS result; // eax
  char *v14; // rax
  const WCHAR *v15; // rsi
  char *v16; // rdi
  PCWSTR i; // r9
  bool v18; // zf
  unsigned __int16 v19; // r10
  WCHAR v20; // r11
  int v21; // ebx
  char *v22; // r11
  __int64 v23; // rdx
  _DWORD *v24; // rdx
  __int64 v25; // r8
  char **j; // r9
  char **v27; // r10
  bool v28; // zf
  _BYTE *v29; // r11
  SIZE_T v30; // rax
  SIZE_T v31; // rbx
  PPEB ProcessEnvironmentBlock; // rcx
  int v33; // eax
  _RTL_CRITICAL_SECTION *FastPebLock; // rcx
  NTSTATUS v35; // [rsp+40h] [rbp-48h]
  char *v36; // [rsp+A0h] [rbp+18h] BYREF

  v10 = NtCurrentTeb();
  v11 = 0;
  v12 = ReturnLength;
  *ReturnLength = 0LL;
  if ( !NameLength )
    return -1073741568;
  result = sub_18001A6F0((wchar_t *)Name, NameLength, (__int64)v12);
  if ( result == -1073741568 )
  {
    if ( !Environment )
    {
      RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
      v36 = (char *)v10->ProcessEnvironmentBlock->ProcessParameters->Environment;
      v35 = sub_180019D38(&v36, (__int64)Name, NameLength, Value, ValueLength, v12);
      if ( v35 != -1073741568 )
      {
LABEL_56:
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        return v35;
      }
      v14 = v36;
      v15 = &Name[NameLength];
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !*(_WORD *)v14 )
          {
            qword_180165FE0 = (__int64)v14;
            v35 = -1073741568;
            goto LABEL_56;
          }
          v16 = v14;
          for ( i = Name; ; ++i )
          {
            v18 = i == v15;
            if ( i >= v15 )
              break;
            v19 = *(_WORD *)v14;
            if ( !*(_WORD *)v14 )
              goto LABEL_13;
            if ( v19 >= 0x61u )
            {
              if ( v19 > 0x7Au )
              {
                if ( qword_180166510 && v19 >= 0xC0u )
                  v19 += *(_WORD *)(qword_180166510
                                  + 2LL
                                  * ((v19 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                       + 2LL
                                                                       * (((v19 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2 * ((unsigned __int64)v19 >> 8))))));
              }
              else
              {
                v19 -= 32;
              }
            }
            v20 = *i;
            if ( *i >= 0x61u )
            {
              if ( v20 > 0x7Au )
              {
                if ( qword_180166510 && v20 >= 0xC0u )
                  v20 += *(_WORD *)(qword_180166510
                                  + 2LL
                                  * ((v20 & 0xF)
                                   + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                       + 2LL
                                                                       * (((v20 >> 4) & 0xF)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_180166510 + 2 * ((unsigned __int64)v20 >> 8))))));
              }
              else
              {
                v20 -= 32;
              }
            }
            if ( v19 != v20 )
            {
LABEL_13:
              v18 = i == v15;
              break;
            }
            v14 += 2;
          }
          if ( v18 && *(_WORD *)v14 == 61 )
            break;
          v21 = 0;
          while ( *(_WORD *)v14 )
          {
            if ( *(_WORD *)v14 == 61 && v14 != v16 )
              goto LABEL_20;
            v14 += 2;
          }
          v14 += 2;
        }
        v21 = 1;
LABEL_20:
        v22 = v14;
        while ( *(_WORD *)v14 )
          v14 += 2;
        v23 = (v22 - v16) >> 1;
        if ( (unsigned __int64)(v23 - 1) <= 0x13 )
        {
          v24 = (_DWORD *)((char *)&unk_180165B80 + 56 * v23 - 56);
          v25 = (unsigned int)*v24;
          if ( (unsigned int)v25 < 3 )
          {
            for ( j = (char **)(v24 + 2); ; j += 2 )
            {
              v27 = (char **)&v24[4 * v25 + 2];
              v28 = j == v27;
              if ( j >= v27 )
                break;
              if ( *j == v16 )
              {
                v28 = j == v27;
                break;
              }
            }
            if ( v28 )
            {
              *j = v16;
              j[1] = v14 + 2;
              ++*v24;
              qword_180165FE0 = (__int64)(v14 + 2);
            }
          }
        }
        if ( v21 )
          break;
        v14 += 2;
      }
      v29 = v22 + 2;
      v30 = (v14 - v29) >> 1;
      if ( Value )
      {
        if ( v30 < ValueLength )
        {
          *v12 = v30;
          v31 = v30;
          memmove(Value, v29, 2 * v30);
          Value[v31] = 0;
LABEL_45:
          v35 = v11;
          goto LABEL_56;
        }
        if ( ValueLength )
          *Value = 0;
      }
      *v12 = v30 + 1;
      v11 = -1073741789;
      goto LABEL_45;
    }
    v36 = (char *)Environment;
    if ( *(_WORD *)Environment )
    {
      ProcessEnvironmentBlock = v10->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment != Environment
        || (FastPebLock = ProcessEnvironmentBlock->FastPebLock) != 0LL
        && !RtlIsCriticalSectionLockedByThread(FastPebLock) )
      {
        v33 = 0;
        return sub_18001A0D8((char *)Environment, (unsigned __int64)Name, NameLength, Value, ValueLength, v12, v33);
      }
      result = sub_180019D38(&v36, (__int64)Name, NameLength, Value, ValueLength, v12);
      if ( result == -1073741568 )
      {
        v33 = 1;
        Environment = v36;
        return sub_18001A0D8((char *)Environment, (unsigned __int64)Name, NameLength, Value, ValueLength, v12, v33);
      }
    }
    else
    {
      return -1073741568;
    }
  }
  return result;
}
