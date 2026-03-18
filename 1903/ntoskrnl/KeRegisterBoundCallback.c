/*
 * XREFs of KeRegisterBoundCallback @ 0x1402A5B80
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14018F34C (ExCompareExchangeCallBack.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 *     ExAllocateCallBack @ 0x14076A948 (ExAllocateCallBack.c)
 *     MmVerifyCallbackFunction @ 0x14088AF88 (MmVerifyCallbackFunction.c)
 */

__int64 __fastcall KeRegisterBoundCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi

  v2 = 0LL;
  if ( (unsigned int)MmVerifyCallbackFunction() )
  {
    v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( ExCompareExchangeCallBack(&KiBoundsCallback, v3, 0LL) )
        return a1;
      else
        RtlpSysVolFree(v4);
    }
  }
  return v2;
}
