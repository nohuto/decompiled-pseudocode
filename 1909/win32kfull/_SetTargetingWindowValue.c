/*
 * XREFs of _SetTargetingWindowValue @ 0x1C0016F4C
 * Callers:
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C0016ED0 (NtUserRegisterTouchHitTestingWindow.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 */

__int64 __fastcall SetTargetingWindowValue(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v5 = a2;
  if ( gSqmIsOptedIn )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v6 = 8635LL;
LABEL_5:
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v6, 1LL);
        return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v5, 5LL);
      }
      if ( a2 == 2 )
      {
        v6 = 8636LL;
        goto LABEL_5;
      }
    }
    else
    {
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 8295LL, 1LL);
    }
  }
  if ( (_DWORD)v5 )
    return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v5, 5LL);
  v8 = (unsigned __int16)gatomPtrTargetFlags;
  v9 = *(_QWORD *)(a1 + 144);
  if ( gatomPtrTargetFlags == word_1C032A65C )
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v9, v8, 1LL, a4);
  return 1LL;
}
