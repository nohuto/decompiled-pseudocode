/*
 * XREFs of EditionFreeIMEKeyboardLayouts @ 0x1C0129A20
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0129A74 (xxxImmUnloadThreadsLayout.c)
 */

unsigned int __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  unsigned int result; // eax
  __int64 v2; // rdx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF
  struct tagTHREADINFO **v4; // [rsp+50h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 32);
  if ( (result & 4) == 0 )
  {
    result = GetThreadsWithPKL(&v4, (struct _TL *)v3, 0LL);
    if ( result )
    {
      xxxImmUnloadThreadsLayout(v4, result, 0LL, 2LL);
      return PopAndFreeAlwaysW32ThreadLock((__int64)v3, v2);
    }
  }
  return result;
}
