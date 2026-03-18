/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C022B1E0
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rbp

  v3 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v5 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = gSharedInfo[1];
    v6 = v5 + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5);
    if ( (WORD1(a1) == *(_WORD *)(v6 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL, v5, (unsigned __int16)a1, v4))
      && (*(_BYTE *)(v6 + 25) & 1) == 0
      && *(_BYTE *)(v6 + 24) == 11 )
    {
      v3 = *(_QWORD *)(gpKernelHandleTable + 8 * v7);
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 480) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v3;
  return v3;
}
