/*
 * XREFs of PopPluginNotifyActive @ 0x1402F5A98
 * Callers:
 *     PopPluginComponentActive @ 0x1400E1D70 (PopPluginComponentActive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginNotifyActive(__int64 a1, int a2, char a3)
{
  ULONG_PTR v6; // rbp
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v8, 0, 0x20uLL);
  v6 = *(_QWORD *)(a1 + 64);
  v8[0] = *(_QWORD *)(a1 + 72);
  LODWORD(v8[1]) = a2;
  BYTE4(v8[1]) = a3;
  v8[2] = 0LL;
  LOBYTE(v8[3]) = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v6 + 96))(7LL, v8);
  if ( (_BYTE)result )
  {
    if ( LOBYTE(v8[3]) )
      PopFxBugCheck(0x612uLL, v6, 0LL, 0LL);
  }
  return result;
}
