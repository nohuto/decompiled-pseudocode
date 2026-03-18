/*
 * XREFs of EditionFreeIMEKeyboardLayouts @ 0x1C010FCE0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C010FD44 (xxxImmUnloadThreadsLayout.c)
 */

unsigned int __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  unsigned int result; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  struct tagTHREADINFO **v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = *(_DWORD *)(a1 + 32);
  if ( (result & 4) == 0 )
  {
    result = GetThreadsWithPKL(&v7, (struct _TL *)&v4, 0LL);
    if ( result )
    {
      xxxImmUnloadThreadsLayout(v7, result, 0LL, 2LL, v4, v5, v6);
      return PopAndFreeAlwaysW32ThreadLock((__int64)&v4, v2, v3);
    }
  }
  return result;
}
