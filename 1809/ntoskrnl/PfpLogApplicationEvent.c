/*
 * XREFs of PfpLogApplicationEvent @ 0x1400D8518
 * Callers:
 *     PspExitProcess @ 0x140609E0C (PspExitProcess.c)
 *     PfCalculateProcessHash @ 0x140668160 (PfCalculateProcessHash.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PfLogEvent @ 0x1400D5478 (PfLogEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmGetSessionGlobalVA @ 0x1405B22A8 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x1406CC434 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, UNICODE_STRING *a2, char a3)
{
  UNICODE_STRING *p_DestinationString; // r14
  int v5; // esi
  __int64 v6; // rcx
  int v7; // eax
  __int64 DirectoryFrameFromProcess; // rax
  __int64 Length; // rcx
  wchar_t *Buffer; // rdx
  unsigned int v11; // ebx
  int SessionId; // eax
  unsigned int v13; // r9d
  int v14; // r11d
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v20[256]; // [rsp+30h] [rbp-D0h] BYREF

  p_DestinationString = a2;
  if ( dword_14043CE18 >= (unsigned int)dword_14043CE1C )
    return 3221225659LL;
  v5 = 0;
  v20[255] = 0LL;
  if ( a3 )
  {
    v20[0] = a1;
    v20[2] = 0LL;
    v14 = 14;
    v16 = *(_DWORD *)(a1 + 736);
    v17 = *(_QWORD *)(a1 + 736) ^ *(_QWORD *)(a1 + 776);
    LODWORD(v20[2]) = v16;
    v13 = 24;
    v18 = *(_DWORD *)(a1 + 1180);
    v20[1] = v17 & 0x1FFFFFFFFFFFFFFFLL;
    HIDWORD(v20[2]) = v18;
  }
  else
  {
    if ( !a2 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    memset(v20, 0, 0x40uLL);
    v6 = *(_QWORD *)(a1 + 736) ^ *(_QWORD *)(a1 + 776);
    HIDWORD(v20[3]) = *(_DWORD *)(a1 + 736);
    v20[6] = a1;
    v7 = *(_DWORD *)(a1 + 1180);
    v20[4] = v6 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v20[3]) = v7;
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1);
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v11 = p_DestinationString->Length;
    v20[5] = DirectoryFrameFromProcess;
    if ( (unsigned int)Length > 0x7C0 )
      v11 = 1984;
    WORD2(v20[7]) = v11 >> 1;
    memmove((char *)&v20[7] + 6, (char *)Buffer + Length - v11, v11);
    *((_WORD *)&v20[7] + WORD2(v20[7]) + 3) = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId != -1 )
      v5 = SessionId;
    LODWORD(v20[0]) = v5;
    v20[1] = MmGetSessionGlobalVA(a1);
    v13 = v11 + 64;
    v14 = 1;
    v20[2] = PsIdleProcess;
  }
  return PfLogEvent(
           v14,
           dword_14043D15C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v20,
           v13);
}
