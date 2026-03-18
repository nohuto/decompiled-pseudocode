/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x140748000
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140088AA0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BB0 (ExGetCallBackBlockRoutine.c)
 *     ExCompareExchangeCallBack @ 0x14018665C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x140748578 (ExAllocateCallBack.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // edi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // r14
  struct _EX_RUNDOWN_REF *v9; // rsi
  unsigned int j; // ebx
  __int64 result; // rax
  __int64 v12; // rbx

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v7 = ExReferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * i);
    v8 = v7;
    if ( v7 )
    {
      v12 = ExGetCallBackBlockRoutine((__int64)v7);
      ExDereferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * i, v8);
      if ( a1 == v12 )
        return 3221227288LL;
    }
  }
  v9 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v9 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&RunOnce + 2 * j, v9, 0LL) )
    {
      result = 0LL;
      *((_DWORD *)&RunOnce + 4 * j + 2) = a3;
      return result;
    }
  }
  ExFreePoolWithTag(v9, 0);
  return 3221226539LL;
}
