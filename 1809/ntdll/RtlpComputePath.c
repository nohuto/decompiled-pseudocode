/*
 * XREFs of RtlpComputePath @ 0x180056598
 * Callers:
 *     RtlpComputeSearchPath @ 0x180054B80 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x180054C10 (RtlpComputeExePath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180055730 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x180056450 (RtlpComputeDllPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 *     RtlpGetDirPath @ 0x180057540 (RtlpGetDirPath.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpAddForwarderPath @ 0x1800E0520 (RtlpAddForwarderPath.c)
 */

unsigned __int64 __fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  int v7; // r12d
  __int128 *v8; // r15
  unsigned int v9; // r13d
  _DWORD *v10; // r15
  _WORD *v11; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  __int128 *v15; // rax
  _DWORD *v16; // rdx
  unsigned __int64 v18; // rax
  __int64 Length; // rax
  int v20; // eax
  void **v21; // rbx
  int EnvironmentVariable; // [rsp+30h] [rbp-48h]
  __int128 *v23; // [rsp+48h] [rbp-30h]
  void *Heap; // [rsp+58h] [rbp-20h]
  void *DirPath; // [rsp+68h] [rbp-10h]
  _DWORD *v26; // [rsp+C0h] [rbp+48h]
  wchar_t *v28; // [rsp+D0h] [rbp+58h]
  char v29; // [rsp+D8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v26 = a1;
  v4 = ((unsigned __int64)xmmword_180178390 >> 60) & 3;
  DirPath = 0LL;
  v5 = 112LL;
  v6 = 0LL;
  Heap = 0LL;
  v7 = 0;
  v8 = 0LL;
  EnvironmentVariable = 0;
  v9 = 0;
  v23 = 0LL;
  if ( a2 )
  {
    v10 = a1;
    while ( 1 )
    {
      if ( *v10 )
      {
        switch ( *v10 )
        {
          case 1:
            goto LABEL_63;
          case 2:
            v5 += (unsigned __int16)RtlpSystemDirs;
            if ( (_BYTE)v4 == 1 )
              v23 = &RtlpSystemDirs;
            break;
          case 3:
            RtlEnterCriticalSection((__int64)&FastPebLock);
            EnvironmentVariable = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL);
            v7 = EnvironmentVariable;
            if ( EnvironmentVariable == -1073741789 )
            {
              Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 0LL);
              if ( !Heap )
              {
                RtlLeaveCriticalSection((__int64)&FastPebLock);
                return v6;
              }
              v7 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4LL);
              EnvironmentVariable = v7;
            }
            RtlLeaveCriticalSection((__int64)&FastPebLock);
            if ( v7 == -1073741568 )
            {
              v7 = 0;
              EnvironmentVariable = 0;
            }
            else
            {
              if ( v7 < 0 )
                goto LABEL_41;
              v5 += 2LL;
            }
            break;
          case 4:
            v5 += 4LL;
            break;
          case 5:
            if ( a3 )
              RtlpGetDirPath(a3);
LABEL_63:
            DirPath = (void *)RtlpGetDirPath(0LL);
            v5 += 2LL;
            break;
          case 6:
            Length = (unsigned __int16)word_18015F4B8;
            goto LABEL_67;
          case 7:
            v5 += (unsigned __int16)RtlpSystem32Dirs;
            if ( a4 )
              v5 += (unsigned __int16)RtlpSystem32Dirs + 22LL;
            if ( (_BYTE)v4 == 1 )
              v23 = &RtlpSystem32Dirs;
            break;
          default:
            Length = LdrpAppPackagesPath.Length;
LABEL_66:
            v5 += 2LL;
LABEL_67:
            v5 += Length;
            break;
        }
      }
      else if ( (_WORD)LdrpDllDirectory )
      {
        Length = (unsigned __int16)LdrpDllDirectory;
        goto LABEL_66;
      }
      ++v9;
      ++v10;
      if ( v9 >= a2 )
      {
        v8 = v23;
        break;
      }
      a3 = v28;
      a4 = v29;
    }
  }
  if ( (unsigned __int64)(v5 - 112) > 0xFFFE )
  {
    v7 = -1073741562;
  }
  else
  {
    v6 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    if ( v6 )
    {
      v11 = (_WORD *)(v6 + 112);
      *(_WORD *)(v6 + 72) = a2;
      v12 = 0;
      *(_DWORD *)(v6 + 96) = v5;
      *(_QWORD *)(v6 + 104) = 0LL;
      if ( v8 )
      {
        *(_QWORD *)(v6 + 24) = v11;
        v20 = 7;
        if ( &RtlpSystem32Dirs != v8 )
          v20 = 2;
        *(_DWORD *)v6 = v20;
        memmove((void *)(v6 + 112), *((const void **)v8 + 1), *(unsigned __int16 *)v8);
        v12 = 1;
        v11 += (unsigned __int64)*(unsigned __int16 *)v8 >> 1;
        if ( v29 )
          v11 = (_WORD *)RtlpAddForwarderPath(v11);
      }
      v13 = a2;
      v14 = 0;
      if ( a2 )
      {
        v15 = v23;
        v16 = v26;
        while ( 1 )
        {
          if ( v15 && (*v16 == 2 || *v16 == 7) )
            goto LABEL_38;
          *(_DWORD *)(v6 + 4LL * v12) = *v16;
          *(_QWORD *)(v6 + 8LL * v12 + 24) = v11;
          if ( *v16 )
          {
            if ( *v16 != 1 )
            {
              switch ( *v16 )
              {
                case 2:
                  memmove(v11, *((const void **)&RtlpSystemDirs + 1), (unsigned __int16)RtlpSystemDirs);
                  v11 += (unsigned __int64)(unsigned __int16)RtlpSystemDirs >> 1;
                  goto LABEL_36;
                case 3:
                  goto LABEL_37;
                case 4:
                  *(_QWORD *)(v6 + 104) = v11;
                  *v11 = 46;
                  v11 += 2;
                  *(v11 - 1) = 59;
                  goto LABEL_37;
              }
              if ( *v16 != 5 )
              {
                if ( *v16 == 6 )
                {
                  v21 = (void **)LdrpUserDllDirectories;
                  if ( LdrpUserDllDirectories != (_UNKNOWN *)&LdrpUserDllDirectories )
                  {
                    do
                    {
                      memmove(v11, (char *)v21 + 18, *((unsigned __int16 *)v21 + 8));
                      v11 += ((unsigned __int64)*((unsigned __int16 *)v21 + 8) >> 1) + 1;
                      *(v11 - 1) = 59;
                      v21 = (void **)*v21;
                    }
                    while ( v21 != (void **)&LdrpUserDllDirectories );
                    v16 = v26;
                  }
                  v13 = a2;
                  goto LABEL_37;
                }
                if ( *v16 == 7 )
                {
                  memmove(v11, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
                  v11 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
                  if ( v29 )
                    v11 = (_WORD *)RtlpAddForwarderPath(v11);
                }
                else
                {
                  *(v11 - 1) = 0;
                  memmove(v11, LdrpAppPackagesPath.Buffer, LdrpAppPackagesPath.Length);
                  *(_QWORD *)(v6 + 88) = v11;
                  v11 += ((unsigned __int64)LdrpAppPackagesPath.Length >> 1) + 1;
                }
                goto LABEL_36;
              }
            }
            memmove(v11, DirPath, 0LL);
            v18 = 0LL;
          }
          else
          {
            if ( !(_WORD)LdrpDllDirectory )
              goto LABEL_37;
            memmove(v11, *((const void **)&LdrpDllDirectory + 1), (unsigned __int16)LdrpDllDirectory);
            v18 = (unsigned __int16)LdrpDllDirectory;
          }
          v11 += (v18 >> 1) + 1;
          *(v11 - 1) = 59;
LABEL_36:
          v16 = v26;
LABEL_37:
          v15 = v23;
          ++v12;
LABEL_38:
          ++v16;
          ++v14;
          v26 = v16;
          if ( v14 >= v13 )
          {
            v7 = EnvironmentVariable;
            break;
          }
        }
      }
      *(v11 - 1) = 0;
    }
    else
    {
      v7 = -1073741801;
    }
  }
LABEL_41:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v6 && v7 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    return 0LL;
  }
  return v6;
}
