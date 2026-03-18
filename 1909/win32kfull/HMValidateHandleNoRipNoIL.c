/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1C0259794
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 *v8; // r14

  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v5 = (unsigned __int16)a1;
  v6 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v7 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v8 = (__int64 *)HMPkheFromPhe(v7);
    if ( (WORD1(a1) == *(_WORD *)(v7 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*(_BYTE *)(v7 + 25) & 1) == 0
      && *(_BYTE *)(v7 + 24) == 11 )
    {
      v4 = *v8;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v5) + 480) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v4;
  return v4;
}
