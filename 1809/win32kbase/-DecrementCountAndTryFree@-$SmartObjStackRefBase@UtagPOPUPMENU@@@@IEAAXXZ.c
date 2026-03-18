/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C00E41F0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00E3E14 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C001D8A0 (Win32FreeToPagedLookasideList.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (_UNKNOWN *)*a1 != &gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, *a1);
    }
  }
  return result;
}
