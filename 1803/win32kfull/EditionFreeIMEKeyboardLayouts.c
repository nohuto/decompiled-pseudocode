/*
 * XREFs of EditionFreeIMEKeyboardLayouts @ 0x1C0108DD0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0108E1C (xxxImmUnloadThreadsLayout.c)
 */

unsigned int __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  unsigned int result; // eax
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF
  struct tagTHREADINFO **v3; // [rsp+50h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 32);
  if ( (result & 4) == 0 )
  {
    result = GetThreadsWithPKL(&v3, (struct _TL *)v2, 0LL);
    if ( result )
    {
      xxxImmUnloadThreadsLayout(v3, result, 0LL, 2LL);
      return PopAndFreeAlwaysW32ThreadLock((__int64)v2);
    }
  }
  return result;
}
