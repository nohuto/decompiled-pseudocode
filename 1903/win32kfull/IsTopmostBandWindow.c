/*
 * XREFs of IsTopmostBandWindow @ 0x1C008C624
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     IsTopLevelParent @ 0x1C00BFCB0 (IsTopLevelParent.c)
 */

__int64 __fastcall IsTopmostBandWindow(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 1 )
    return 0LL;
  else
    return IsTopLevelParent(a2);
}
