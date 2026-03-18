/*
 * XREFs of _SetTargetingWindowValue @ 0x1C01015CC
 * Callers:
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C0101560 (NtUserRegisterTouchHitTestingWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetTargetingWindowValue(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rcx

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
        v5 = (_QWORD *)(a1 + 120);
        return RealInternalSetProp(v5, (unsigned __int16)gatomPtrTargetFlags, v3, 5LL);
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
  v5 = (_QWORD *)(a1 + 120);
  if ( (_DWORD)v3 )
    return RealInternalSetProp(v5, (unsigned __int16)gatomPtrTargetFlags, v3, 5LL);
  RealInternalRemoveProp(*v5, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  return 1LL;
}
