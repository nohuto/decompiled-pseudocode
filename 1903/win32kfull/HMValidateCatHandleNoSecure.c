/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C0259E24
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r14

  v5 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v6 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v7 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v8 = a1 >> 16;
    v10 = HMPkheFromPhe(gSharedInfo[1] + (unsigned int)(v6 * LODWORD(gSharedInfo[2])));
    if ( ((_WORD)v8 == *(_WORD *)(v7 + 26) || (_WORD)v8 == 0xFFFF || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v9))
      && *(_BYTE *)(v7 + 24) == 1 )
    {
      return *(_QWORD *)v10;
    }
  }
  return v5;
}
