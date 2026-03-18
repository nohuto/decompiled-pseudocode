/*
 * XREFs of xxxMNButtonDown @ 0x1C020B6E8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C020A874 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C020A934 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 */

__int64 *__fastcall xxxMNButtonDown(__int64 **a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 *v8; // rax
  int v9; // edi
  __int64 *result; // rax

  if ( *(_DWORD *)(**a1 + 80) == a3 )
  {
    if ( a4 )
      *(_DWORD *)**a1 |= 0x80u;
    result = (__int64 *)xxxMNHideNextHierarchy(a1);
    if ( !(_DWORD)result )
    {
      if ( !a4 )
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
  if ( a4 )
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
    if ( a4 )
    {
      *(_DWORD *)(a2 + 8) |= 8u;
      return (__int64 *)xxxMNDoScroll((__int64)a1, a3, 1);
    }
  }
  return result;
}
