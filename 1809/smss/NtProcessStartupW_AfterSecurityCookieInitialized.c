/*
 * XREFs of NtProcessStartupW_AfterSecurityCookieInitialized @ 0x140002EE0
 * Callers:
 *     NtProcessStartupW @ 0x140002EC0 (NtProcessStartupW.c)
 * Callees:
 *     wmain @ 0x1400031DC (wmain.c)
 */

NTSTATUS __fastcall NtProcessStartupW_AfterSecurityCookieInitialized(__int64 a1)
{
  NTSTATUS v2; // ebx
  struct _RTL_USER_PROCESS_PARAMETERS *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r8
  PRTL_USER_PROCESS_PARAMETERS v6; // r12
  int v7; // eax
  unsigned int v8; // edi
  UNICODE_STRING *p_CommandLine; // r14
  wint_t *v10; // r15
  int Length; // ebp
  wint_t *Buffer; // rax
  wint_t *v13; // rbx
  PWSTR Environment; // rcx
  int v15; // edx
  __int64 v17; // rcx
  __int64 v18; // rbx
  SIZE_T v19; // rsi
  char **Heap; // rax
  char **v21; // r14
  char *v22; // rbx
  char *v23; // rdi
  unsigned int v24; // r12d
  char *v25; // rsi
  _QWORD *v26; // r14
  PWSTR v27; // rax
  struct _RTL_USER_PROCESS_PARAMETERS *v30; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+80h] [rbp+8h]
  ULONG DebugFlags; // [rsp+88h] [rbp+10h]
  __int64 *v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(struct _RTL_USER_PROCESS_PARAMETERS **)(a1 + 32);
  v34 = 0LL;
  DebugFlags = 0;
  v4 = 0LL;
  v6 = RtlNormalizeProcessParams(v3);
  v30 = v6;
  v31 = 0;
  v33 = &v34;
  v7 = 1;
  v8 = 1;
  p_CommandLine = 0LL;
  v10 = 0LL;
  Length = 0;
  if ( v6 )
  {
    p_CommandLine = &v6->CommandLine;
    DebugFlags = v6->DebugFlags;
    Buffer = v6->CommandLine.Buffer;
    if ( Buffer && p_CommandLine->Length
      || (Buffer = v6->ImagePathName.Buffer, p_CommandLine = &v6->ImagePathName, Buffer) )
    {
      Length = p_CommandLine->Length;
      v10 = Buffer;
      if ( p_CommandLine->Length )
      {
        do
        {
          if ( !*v10 || !Length )
            break;
          do
          {
            if ( !*v10 )
              break;
            if ( !iswspace(*v10) )
              break;
            ++v10;
            Length -= 2;
          }
          while ( Length );
          if ( !Length )
            break;
          if ( *v10 )
          {
            ++v8;
            v13 = v10;
            do
            {
              ++v10;
              Length -= 2;
            }
            while ( Length && !iswspace(*v10) );
            v4 += 2 * (v10 - v13) + 2;
          }
        }
        while ( Length );
        v2 = 0;
      }
    }
    Environment = v6->Environment;
    v15 = 0;
    if ( Environment && *Environment )
    {
      do
      {
        ++Environment;
        ++v15;
        while ( *Environment++ )
          ;
      }
      while ( *Environment );
    }
    v7 = v15 + 1;
  }
  v17 = v8 + v7;
  if ( (unsigned int)v17 > 2 )
  {
    if ( v8 > 1 )
    {
      v10 = p_CommandLine->Buffer;
      Length = p_CommandLine->Length;
    }
    v18 = v17;
    v19 = 8 * v17 + v4;
    Heap = (char **)RtlAllocateHeap(*(PVOID *)(a1 + 48), 0, v19);
    v21 = Heap;
    if ( Heap )
    {
      v33 = (__int64 *)Heap;
      if ( v8 > 1 )
      {
        v22 = (char *)&Heap[v18];
        v23 = (char *)Heap + v19;
        if ( Length )
        {
          v24 = 0;
          do
          {
            if ( v22 >= v23 || !*v10 )
              break;
            do
            {
              if ( !*v10 )
                break;
              if ( !iswspace(*v10) )
                break;
              ++v10;
              Length -= 2;
            }
            while ( Length );
            if ( !Length )
              break;
            if ( *v10 )
            {
              *v21++ = v22;
              ++v24;
              do
              {
                v25 = v22;
                *(_WORD *)v22 = *v10++;
                v22 += 2;
                Length -= 2;
                if ( !Length )
                  break;
                if ( v22 >= v23 )
                  goto LABEL_62;
              }
              while ( !iswspace(*v10) );
              if ( v22 < v23 )
              {
                *(_WORD *)v22 = 0;
                v22 += 2;
                continue;
              }
LABEL_62:
              v22 = v25;
              *(_WORD *)v25 = 0;
            }
          }
          while ( Length );
          v31 = v24;
          v6 = v30;
        }
      }
      v2 = 0;
      *v21 = 0LL;
      v26 = v21 + 1;
      v27 = v6->Environment;
      if ( v27 && *v27 )
      {
        do
        {
          *v26++ = v27++;
          while ( *v27++ )
            ;
        }
        while ( *v27 );
      }
      *v26 = 0LL;
    }
    else
    {
      v2 = -1073741801;
    }
  }
  if ( DebugFlags )
    __debugbreak();
  if ( v2 >= 0 )
    v2 = wmain(v31, v33, v5, DebugFlags);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2);
}
