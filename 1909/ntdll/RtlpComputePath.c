/*
 * XREFs of RtlpComputePath @ 0x18006BDE4
 * Callers:
 *     RtlpComputeSearchPath @ 0x18006BAD0 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x18006BB60 (RtlpComputeExePath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006BBD0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006BD10 (RtlpComputeDllPath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpGetDirPath @ 0x18006C3C8 (RtlpGetDirPath.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpAddForwarderPath @ 0x1800DDEA8 (RtlpAddForwarderPath.c)
 */

_WORD *__fastcall RtlpComputePath(_DWORD *a1, unsigned int a2, wchar_t *a3, char a4)
{
  unsigned __int64 v4; // rdi
  size_t v5; // r14
  SIZE_T v6; // rbx
  _WORD *v7; // rsi
  int v8; // r12d
  __int128 *v9; // r15
  unsigned int v10; // r13d
  _DWORD *v11; // r15
  void *DirPath; // rax
  PVOID Heap; // rax
  NTSTATUS v14; // eax
  _WORD *v15; // rdi
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  unsigned int v18; // r15d
  size_t v19; // r13
  ULONG_PTR v20; // r12
  __int128 *v21; // rax
  _DWORD *v22; // rdx
  size_t v23; // rax
  __int64 Length; // rax
  int v26; // eax
  void **v27; // rbx
  NTSTATUS v28; // [rsp+30h] [rbp-48h]
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int128 *v31; // [rsp+48h] [rbp-30h]
  size_t v32; // [rsp+50h] [rbp-28h]
  PVOID BaseAddress; // [rsp+58h] [rbp-20h]
  void *Src; // [rsp+60h] [rbp-18h]
  void *v35; // [rsp+68h] [rbp-10h]
  _DWORD *v36; // [rsp+C0h] [rbp+48h]
  wchar_t *v38; // [rsp+D0h] [rbp+58h]
  char v39; // [rsp+D8h] [rbp+60h]

  v39 = a4;
  v38 = a3;
  v36 = a1;
  v4 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 60) & 3;
  v35 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  Src = 0LL;
  v6 = 112LL;
  Size = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  v8 = 0;
  ReturnLength = 0LL;
  v9 = 0LL;
  v28 = 0;
  v10 = 0;
  v31 = 0LL;
  if ( a2 )
  {
    v11 = a1;
    while ( 1 )
    {
      if ( *v11 )
      {
        switch ( *v11 )
        {
          case 1:
            goto LABEL_67;
          case 2:
            v6 += RtlpSystemDirs.Length;
            if ( (_BYTE)v4 == 1 )
              v31 = (__int128 *)&RtlpSystemDirs;
            break;
          case 3:
            RtlEnterCriticalSection(&FastPebLock);
            v28 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, 0LL, 0LL, &ReturnLength);
            v8 = v28;
            if ( v28 == -1073741789 )
            {
              Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, 2 * ReturnLength);
              BaseAddress = Heap;
              if ( !Heap )
              {
                RtlLeaveCriticalSection(&FastPebLock);
                return v7;
              }
              v14 = RtlQueryEnvironmentVariable(0LL, L"PATH", 4uLL, (PWSTR)Heap, ReturnLength, &ReturnLength);
              v5 = Size;
              v8 = v14;
              v28 = v14;
            }
            RtlLeaveCriticalSection(&FastPebLock);
            if ( v8 == -1073741568 )
            {
              ReturnLength = 0LL;
              v8 = 0;
              v28 = 0;
            }
            else
            {
              if ( v8 < 0 )
                goto LABEL_43;
              v6 += 2 * ReturnLength + 2;
            }
            break;
          case 4:
            v6 += 4LL;
            break;
          case 5:
            if ( a3 )
            {
              DirPath = (void *)RtlpGetDirPath(a3);
              v5 = Size;
              Src = DirPath;
            }
            if ( v5 )
            {
              v6 += v5 + 2;
              break;
            }
LABEL_67:
            v35 = (void *)RtlpGetDirPath(0LL);
            v6 += v32 + 2;
            break;
          case 6:
            Length = (unsigned __int16)word_18015F3E8;
            goto LABEL_71;
          case 7:
            v6 += (unsigned __int16)RtlpSystem32Dirs;
            if ( a4 )
              v6 += (unsigned __int16)RtlpSystem32Dirs + 22LL;
            if ( (_BYTE)v4 == 1 )
              v31 = &RtlpSystem32Dirs;
            break;
          default:
            Length = (unsigned __int16)LdrpAppPackagesPath;
LABEL_70:
            v6 += 2LL;
LABEL_71:
            v6 += Length;
            break;
        }
      }
      else if ( LdrpDllDirectory.Length )
      {
        Length = LdrpDllDirectory.Length;
        goto LABEL_70;
      }
      ++v10;
      ++v11;
      if ( v10 >= a2 )
      {
        v9 = v31;
        break;
      }
      a3 = v38;
      a4 = v39;
    }
  }
  if ( v6 - 112 > 0xFFFE )
  {
    v8 = -1073741562;
  }
  else
  {
    v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( v7 )
    {
      v15 = v7 + 56;
      v7[36] = a2;
      v16 = 0;
      *((_DWORD *)v7 + 24) = v6;
      *((_QWORD *)v7 + 13) = 0LL;
      if ( v9 )
      {
        *((_QWORD *)v7 + 3) = v15;
        v26 = 7;
        if ( &RtlpSystem32Dirs != v9 )
          v26 = 2;
        *(_DWORD *)v7 = v26;
        memmove(v7 + 56, *((const void **)v9 + 1), *(unsigned __int16 *)v9);
        v16 = 1;
        v15 += (unsigned __int64)*(unsigned __int16 *)v9 >> 1;
        if ( v39 )
          v15 = (_WORD *)RtlpAddForwarderPath(v15);
      }
      v17 = a2;
      v18 = 0;
      if ( a2 )
      {
        v19 = Size;
        v20 = ReturnLength;
        v21 = v31;
        v22 = v36;
        while ( 1 )
        {
          if ( v21 && (*v22 == 2 || *v22 == 7) )
            goto LABEL_40;
          *(_DWORD *)&v7[2 * v16] = *v22;
          *(_QWORD *)&v7[4 * v16 + 12] = v15;
          if ( !*v22 )
            break;
          if ( *v22 == 1 )
            goto LABEL_68;
          if ( *v22 == 2 )
          {
            memmove(v15, RtlpSystemDirs.Buffer, RtlpSystemDirs.Length);
            v15 += (unsigned __int64)RtlpSystemDirs.Length >> 1;
            goto LABEL_38;
          }
          if ( *v22 != 3 )
          {
            if ( *v22 == 4 )
            {
              *((_QWORD *)v7 + 13) = v15;
              *v15 = 46;
              v15 += 2;
              *(v15 - 1) = 59;
              goto LABEL_39;
            }
            if ( *v22 != 5 )
            {
              if ( *v22 == 6 )
              {
                v27 = (void **)LdrpUserDllDirectories;
                if ( LdrpUserDllDirectories != (_UNKNOWN *)&LdrpUserDllDirectories )
                {
                  do
                  {
                    memmove(v15, (char *)v27 + 18, *((unsigned __int16 *)v27 + 8));
                    v15 += ((unsigned __int64)*((unsigned __int16 *)v27 + 8) >> 1) + 1;
                    *(v15 - 1) = 59;
                    v27 = (void **)*v27;
                  }
                  while ( v27 != (void **)&LdrpUserDllDirectories );
                  v19 = Size;
                  v20 = ReturnLength;
LABEL_51:
                  v22 = v36;
                }
                v17 = a2;
                goto LABEL_39;
              }
              if ( *v22 == 7 )
              {
                memmove(v15, *((const void **)&RtlpSystem32Dirs + 1), (unsigned __int16)RtlpSystem32Dirs);
                v15 += (unsigned __int64)(unsigned __int16)RtlpSystem32Dirs >> 1;
                if ( v39 )
                  v15 = (_WORD *)RtlpAddForwarderPath(v15);
              }
              else
              {
                *(v15 - 1) = 0;
                memmove(v15, *((const void **)&LdrpAppPackagesPath + 1), (unsigned __int16)LdrpAppPackagesPath);
                *((_QWORD *)v7 + 11) = v15;
                v15 += ((unsigned __int64)(unsigned __int16)LdrpAppPackagesPath >> 1) + 1;
              }
              goto LABEL_38;
            }
            if ( v19 )
            {
              memmove(v15, Src, v19);
              v23 = v19;
            }
            else
            {
LABEL_68:
              memmove(v15, v35, v32);
              v23 = v32;
            }
            goto LABEL_36;
          }
          if ( v20 )
          {
            memmove(v15, BaseAddress, 2 * v20);
            v15 += v20 + 1;
            *(v15 - 1) = 59;
            goto LABEL_51;
          }
LABEL_39:
          v21 = v31;
          ++v16;
LABEL_40:
          ++v22;
          ++v18;
          v36 = v22;
          if ( v18 >= v17 )
          {
            v8 = v28;
            goto LABEL_42;
          }
        }
        if ( !LdrpDllDirectory.Length )
          goto LABEL_39;
        memmove(v15, LdrpDllDirectory.Buffer, LdrpDllDirectory.Length);
        v23 = LdrpDllDirectory.Length;
LABEL_36:
        v15 += (v23 >> 1) + 1;
        *(v15 - 1) = 59;
LABEL_38:
        v22 = v36;
        goto LABEL_39;
      }
LABEL_42:
      *(v15 - 1) = 0;
    }
    else
    {
      v8 = -1073741801;
    }
  }
LABEL_43:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v7 && v8 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return 0LL;
  }
  return v7;
}
