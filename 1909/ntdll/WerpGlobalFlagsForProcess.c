/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x18006B88C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18006B450 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     WerpPathTail @ 0x18006BA78 (WerpPathTail.c)
 *     RtlUnicodeStringToInteger @ 0x180074900 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  _WORD *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  HANDLE v7; // rdi
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rsi
  int v11; // ecx
  unsigned int v12; // r14d
  void *ProcessHeap; // rcx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v17[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 Heap; // [rsp+58h] [rbp-B0h]
  _WORD v21[4]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-A0h]
  _QWORD v23[3]; // [rsp+70h] [rbp-98h] BYREF
  int v24; // [rsp+88h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-78h]
  _QWORD ProcessInformation[68]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v27[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  Handle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v17[0] = 0;
  v19 = 0LL;
  Heap = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)43, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (_WORD *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( Heap )
      {
        WORD1(v19) = v6;
        if ( (int)RtlAppendUnicodeToString(
                    (unsigned __int16 *)&v19,
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && (int)RtlAppendUnicodeToString((unsigned __int16 *)&v19, v4) >= 0 )
        {
          LODWORD(v23[0]) = 48;
          v23[2] = &v19;
          v23[1] = 0LL;
          v24 = 64;
          v25 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, v23) >= 0 )
          {
            v7 = Handle;
            if ( (int)RtlInitUnicodeStringEx((__int64)v21, (__int64)L"GlobalFlag") >= 0 )
            {
              v8 = v27;
              v9 = NtQueryValueKey(v7, v21, 2LL, v27, 1024, &v16);
              if ( v9 < 0 )
              {
                if ( v9 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v12 = v16;
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    v14 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v16);
                    v10 = v14;
                    if ( !v14 )
                      break;
                    v8 = (_DWORD *)v14;
                    v15 = NtQueryValueKey(v7, v21, 2LL, v14, v12, &v16);
                    if ( v15 >= 0 )
                      goto LABEL_17;
                    if ( v15 != -2147483643 )
                      goto LABEL_33;
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8);
                  }
                }
              }
              else
              {
                v10 = 0LL;
LABEL_17:
                v11 = v8[1];
                if ( ((v11 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v11 == 4 )
                  {
                    if ( v8[2] == 4 )
                    {
                      v16 = 4;
                      v17[0] = v8[3];
                    }
                  }
                  else if ( v11 == 1 && ((unsigned __int8)v17 & 3) == 0 )
                  {
                    v16 = 4;
                    v22 = v8 + 3;
                    v21[0] = *((_WORD *)v8 + 4);
                    v21[1] = *((_WORD *)v8 + 4);
                    RtlUnicodeStringToInteger(v21, 0LL, v17);
                  }
                }
                else if ( v11 == 4 )
                {
                  v16 = v8[2];
                  if ( v8[2] <= 4u )
                    memmove(v17, v8 + 3, (unsigned int)v8[2]);
                }
LABEL_33:
                if ( v10 )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v17[0];
}
