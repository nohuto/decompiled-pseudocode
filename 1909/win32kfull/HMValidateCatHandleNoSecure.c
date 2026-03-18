/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C02596E4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r14

  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v5 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v6 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v7 = a1 >> 16;
    v9 = HMPkheFromPhe(gSharedInfo[1] + (unsigned int)(v5 * LODWORD(gSharedInfo[2])));
    if ( ((_WORD)v7 == *(_WORD *)(v6 + 26) || (_WORD)v7 == 0xFFFF || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v8))
      && *(_BYTE *)(v6 + 24) == 1 )
    {
      return *(_QWORD *)v9;
    }
  }
  return v4;
}
