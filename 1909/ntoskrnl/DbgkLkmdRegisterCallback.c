/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x140758C00
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14001D240 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x140759178 (ExAllocateCallBack.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // edi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rsi
  unsigned int j; // ebx
  __int64 result; // rax
  unsigned __int64 Count; // rbx

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v7 = ExReferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * i);
    if ( v7 )
    {
      Count = v7[1].Count;
      ExDereferenceCallBackBlock((signed __int64 *)&RunOnce + 2 * i, v7);
      if ( a1 == Count )
        return 3221227288LL;
    }
  }
  v8 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v8 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&RunOnce + 2 * j, v8, 0LL) )
    {
      result = 0LL;
      *((_DWORD *)&RunOnce + 4 * j + 2) = a3;
      return result;
    }
  }
  ExFreePoolWithTag(v8, 0);
  return 3221226539LL;
}
