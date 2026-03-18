/*
 * XREFs of _SetTargetingWindowValue @ 0x1C00B369C
 * Callers:
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C00B3620 (NtUserRegisterTouchHitTestingWindow.c)
 * Callees:
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 */

__int64 __fastcall SetTargetingWindowValue(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = a2;
  if ( gSqmIsOptedIn )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v4 = 8635LL;
LABEL_5:
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v4, 1LL);
        return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v3, 5u);
      }
      if ( a2 == 2 )
      {
        v4 = 8636LL;
        goto LABEL_5;
      }
    }
    else
    {
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 8295LL, 1LL);
    }
  }
  if ( (_DWORD)v3 )
    return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v3, 5u);
  v6 = (unsigned __int16)gatomPtrTargetFlags;
  v7 = *(_QWORD *)(a1 + 120);
  if ( gatomPtrTargetFlags == word_1C0317660 )
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v7, v6, 1LL);
  return 1LL;
}
