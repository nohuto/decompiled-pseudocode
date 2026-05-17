/*
 * XREFs of sub_1800ED05C @ 0x1800ED05C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlReleaseRelativeName @ 0x180025F30 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180029320 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x18009CD80 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

char __fastcall sub_1800ED05C(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v8; // [rsp+68h] [rbp-61h] BYREF
  __int128 v9; // [rsp+98h] [rbp-31h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-21h]
  int v11; // [rsp+B8h] [rbp-11h]
  __int64 v12; // [rsp+C0h] [rbp-9h]
  __int128 *v13; // [rsp+C8h] [rbp-1h]
  int v14; // [rsp+D0h] [rbp+7h]
  __int128 v15; // [rsp+D8h] [rbp+Fh]

  if ( a1 )
  {
    if ( !a3 )
      return 0;
    if ( a2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(a1 + 2 * v4) );
      if ( v4 < 0x104 )
      {
        *a3 = 0LL;
        if ( RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v8, 0LL, (__int64)&v9) )
        {
          v5 = *((_QWORD *)&v8 + 1);
          if ( (_WORD)v9 )
          {
            v6 = v10;
            v8 = v9;
          }
          else
          {
            v6 = 0LL;
            v10 = 0LL;
          }
          v12 = v6;
          v13 = &v8;
          v11 = 48;
          v14 = 64;
          v15 = 0LL;
          ZwOpenFile();
          RtlReleaseRelativeName((__int64)&v9);
          if ( v5 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
        }
      }
    }
  }
  if ( a3 && *a3 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
    *a3 = 0LL;
  }
  return 0;
}
