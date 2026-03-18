/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x1C022B11C
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbp

  v3 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v6 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v7 = a1 >> 16;
    v8 = gSharedInfo[1];
    v9 = v8 + (unsigned int)(v6 * LODWORD(gSharedInfo[2]));
    v10 = 3 * ((__int64)(unsigned int)(v6 * LODWORD(gSharedInfo[2])) >> 5);
    if ( ((_WORD)v7 == *(_WORD *)(v9 + 26)
       || (_WORD)v7 == 0xFFFF
       || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v4, v8, v6, v5))
      && *(_BYTE *)(v9 + 24) == 1 )
    {
      return *(_QWORD *)(gpKernelHandleTable + 8 * v10);
    }
  }
  return v3;
}
