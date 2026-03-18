/*
 * XREFs of xxxMNButtonDown @ 0x1C022321C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0222378 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0222438 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 */

__int64 *__fastcall xxxMNButtonDown(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v5; // r14d
  __int64 *v8; // rax
  int v9; // edi
  __int64 *result; // rax

  v4 = a4;
  v5 = a3;
  if ( *(_DWORD *)(**a1 + 80) == (_DWORD)a3 )
  {
    if ( (_DWORD)a4 )
      *(_DWORD *)**a1 |= 0x80u;
    result = (__int64 *)xxxMNHideNextHierarchy(a1, a2, a3, a4);
    if ( !(_DWORD)result )
    {
      if ( !v4 )
        return result;
      result = (__int64 *)xxxMNOpenHierarchy(a1, a2);
      if ( result )
      {
        result = *a1;
        *(_DWORD *)**a1 &= ~0x80u;
      }
    }
    goto LABEL_17;
  }
  v8 = *a1;
  if ( (_DWORD)a4 )
  {
    v9 = 1;
    *(_DWORD *)*v8 &= ~0x80u;
  }
  else
  {
    v9 = (*(_DWORD *)*v8 >> 10) & 1;
  }
  result = (__int64 *)xxxMNSelectItem(a1, a2);
  if ( !result
    || !result[2]
    || (result = (__int64 *)*result, (*((_DWORD *)result + 1) & 3) != 0)
    || !v9
    || (result = (__int64 *)xxxMNOpenHierarchy(a1, a2), result != (__int64 *)-1LL) )
  {
LABEL_17:
    if ( v4 )
    {
      *(_DWORD *)(a2 + 8) |= 8u;
      return (__int64 *)xxxMNDoScroll((__int64)a1, v5, 1);
    }
  }
  return result;
}
