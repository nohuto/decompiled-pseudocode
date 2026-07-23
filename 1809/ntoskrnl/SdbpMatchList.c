/*
 * XREFs of SdbpMatchList @ 0x140724254
 * Callers:
 *     SdbpCheckForMatch @ 0x140724154 (SdbpCheckForMatch.c)
 *     SdbpMatchOne @ 0x1408E8CE0 (SdbpMatchOne.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14067E3B4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x14067E5A4 (SdbGetFirstChild.c)
 *     SdbpFindMatcher @ 0x14072434C (SdbpFindMatcher.c)
 */

__int64 __fastcall SdbpMatchList(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, int a6, int a7)
{
  unsigned int FirstChild; // ebx
  __int64 (__fastcall *Matcher)(int *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rax
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF

  a7 = 1;
  FirstChild = SdbGetFirstChild(a3, a4);
  if ( FirstChild )
  {
    while ( 1 )
    {
      Matcher = (__int64 (__fastcall *)(int *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher(&v15, a2, a3, FirstChild);
      if ( Matcher )
      {
        result = Matcher(&a7, a2, a3, a4, FirstChild, a5, v15);
        if ( !(_DWORD)result )
          return result;
        if ( (unsigned int)SdbFindFirstTag(a3, FirstChild, 4099) )
        {
          v13 = a7 == 0;
          a7 = v13;
        }
        else
        {
          v13 = a7;
        }
        if ( v13 == a6 )
          break;
      }
      FirstChild = SdbGetNextChild(a3, a4, FirstChild);
      if ( !FirstChild )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v13 = a7;
  }
  *a1 = v13;
  return 1LL;
}
