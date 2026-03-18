/*
 * XREFs of IsTopLevelParent @ 0x1C00BFCB0
 * Callers:
 *     IsTopmostBandWindow @ 0x1C008C624 (IsTopmostBandWindow.c)
 *     IsParentBandValid @ 0x1C00BFC54 (IsParentBandValid.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTopLevelParent(__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( a1 != *(_QWORD *)(v1 + 104) && a1 != *(_QWORD *)(*(_QWORD *)(v1 + 8) + 24LL) )
      return 0;
  }
  return result;
}
