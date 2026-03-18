/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00F88FC
 * Callers:
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     GetCPD @ 0x1C00F86FC (GetCPD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(__int64 *a1)
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
