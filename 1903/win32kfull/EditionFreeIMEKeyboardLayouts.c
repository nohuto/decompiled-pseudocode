/*
 * XREFs of EditionFreeIMEKeyboardLayouts @ 0x1C0135050
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01350B4 (xxxImmUnloadThreadsLayout.c)
 */

unsigned int __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  unsigned int result; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  struct tagTHREADINFO **v8; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = *(_DWORD *)(a1 + 32);
  if ( (result & 4) == 0 )
  {
    result = GetThreadsWithPKL(&v8, (struct _TL *)&v5, 0LL);
    if ( result )
    {
      xxxImmUnloadThreadsLayout(v8, result, 0LL, 2LL, v5, v6, v7);
      return PopAndFreeAlwaysW32ThreadLock((__int64)&v5, v2, v3, v4);
    }
  }
  return result;
}
