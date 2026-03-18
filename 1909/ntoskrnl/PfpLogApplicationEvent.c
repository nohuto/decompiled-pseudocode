/*
 * XREFs of PfpLogApplicationEvent @ 0x1400D42B8
 * Callers:
 *     PspExitProcess @ 0x140652A2C (PspExitProcess.c)
 *     PfCalculateProcessHash @ 0x14066B910 (PfCalculateProcessHash.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     PfLogEvent @ 0x1400D29C8 (PfLogEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     MmGetSessionGlobalVA @ 0x14066C930 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x14066C950 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, _QWORD *a2, char a3)
{
  int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int SessionId; // eax
  unsigned int v16; // r9d
  int v17; // r11d
  __int64 v19; // rcx
  int v20; // eax
  _QWORD v21[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 SessionGlobalVA; // [rsp+40h] [rbp-C8h]
  PVOID v24; // [rsp+48h] [rbp-C0h]
  int v25; // [rsp+50h] [rbp-B8h]
  int v26; // [rsp+54h] [rbp-B4h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __int64 v29; // [rsp+68h] [rbp-A0h]
  int v30; // [rsp+70h] [rbp-98h]
  unsigned __int16 v31; // [rsp+74h] [rbp-94h]
  _WORD v32[989]; // [rsp+76h] [rbp-92h] BYREF
  __int64 v33; // [rsp+830h] [rbp+728h]

  v21[0] = 0LL;
  v21[1] = 0LL;
  if ( dword_140467518 >= (unsigned int)dword_14046751C )
    return 3221225659LL;
  v5 = *(_DWORD *)(a1 + 744);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 784);
  v33 = 0LL;
  if ( a3 )
  {
    v19 = *(_QWORD *)(a1 + 744) ^ v7;
    v17 = 14;
    LODWORD(v24) = v5;
    v22 = a1;
    v20 = *(_DWORD *)(a1 + 1180);
    SessionGlobalVA = v19 & 0x1FFFFFFFFFFFFFFFLL;
    v16 = 24;
    HIDWORD(v24) = v20;
  }
  else
  {
    v26 = v5;
    v8 = v21;
    HIDWORD(v22) = 0;
    v30 = 0;
    v32[0] = 0;
    if ( a2 )
      v8 = a2;
    v29 = a1;
    v9 = *(_DWORD *)(a1 + 1180);
    v27 = (*(_QWORD *)(a1 + 744) ^ v7) & 0x1FFFFFFFFFFFFFFFLL;
    v25 = v9;
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v8);
    v12 = *v11;
    v13 = *((_QWORD *)v11 + 1);
    v14 = v12;
    v28 = DirectoryFrameFromProcess;
    if ( (unsigned int)v12 > 0x7C0 )
      v14 = 1984;
    v31 = v14 >> 1;
    memmove(v32, (const void *)(v12 + v13 - v14), v14);
    v32[v31] = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId != -1 )
      v6 = SessionId;
    LODWORD(v22) = v6;
    SessionGlobalVA = MmGetSessionGlobalVA(a1);
    v16 = v14 + 64;
    v17 = 1;
    v24 = PsIdleProcess;
  }
  return PfLogEvent(
           v17,
           dword_14046785C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v22,
           v16);
}
