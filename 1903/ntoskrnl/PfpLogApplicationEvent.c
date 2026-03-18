/*
 * XREFs of PfpLogApplicationEvent @ 0x140096F98
 * Callers:
 *     PfCalculateProcessHash @ 0x1406588F0 (PfCalculateProcessHash.c)
 *     PspExitProcess @ 0x140671BFC (PspExitProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     PfLogEvent @ 0x1400956A8 (PfLogEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     MmGetSessionGlobalVA @ 0x140659910 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x140659930 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, _QWORD *a2, char a3)
{
  int v5; // eax
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int SessionId; // eax
  unsigned int v15; // r9d
  int v16; // r11d
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 SessionGlobalVA; // [rsp+40h] [rbp-C8h]
  PVOID v22; // [rsp+48h] [rbp-C0h]
  int v23; // [rsp+50h] [rbp-B8h]
  int v24; // [rsp+54h] [rbp-B4h]
  __int64 v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  int v28; // [rsp+70h] [rbp-98h]
  unsigned __int16 v29; // [rsp+74h] [rbp-94h]
  _WORD v30[989]; // [rsp+76h] [rbp-92h] BYREF
  __int64 v31; // [rsp+830h] [rbp+728h]

  v19[0] = 0LL;
  v19[1] = 0LL;
  if ( dword_140467818 >= (unsigned int)dword_14046781C )
    return 3221225659LL;
  v5 = *(_DWORD *)(a1 + 744);
  v6 = 0;
  v31 = 0LL;
  if ( a3 )
  {
    LODWORD(v22) = v5;
    v16 = 14;
    v18 = *(_QWORD *)(a1 + 784);
    v20 = a1;
    SessionGlobalVA = (a1 ^ v18) & 0x1FFFFFFFFFFFFFFFLL;
    v15 = 24;
    HIDWORD(v22) = *(_DWORD *)(a1 + 1180);
  }
  else
  {
    v24 = v5;
    v7 = v19;
    v8 = *(_QWORD *)(a1 + 784);
    v27 = a1;
    if ( a2 )
      v7 = a2;
    HIDWORD(v20) = 0;
    v28 = 0;
    v30[0] = 0;
    v25 = (a1 ^ v8) & 0x1FFFFFFFFFFFFFFFLL;
    v23 = *(_DWORD *)(a1 + 1180);
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v7);
    v11 = *v10;
    v12 = *((_QWORD *)v10 + 1);
    v13 = v11;
    v26 = DirectoryFrameFromProcess;
    if ( (unsigned int)v11 > 0x7C0 )
      v13 = 1984;
    v29 = v13 >> 1;
    memmove(v30, (const void *)(v11 + v12 - v13), v13);
    v30[v29] = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId != -1 )
      v6 = SessionId;
    LODWORD(v20) = v6;
    SessionGlobalVA = MmGetSessionGlobalVA(a1);
    v15 = v13 + 64;
    v16 = 1;
    v22 = PsIdleProcess;
  }
  return PfLogEvent(
           v16,
           dword_140467B5C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v20,
           v15);
}
