/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0065E94
 * Callers:
 *     xxxMNCanClose @ 0x1C0020A70 (xxxMNCanClose.c)
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
  }
  return result;
}
