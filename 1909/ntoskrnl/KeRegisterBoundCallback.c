/*
 * XREFs of KeRegisterBoundCallback @ 0x1402A58E0
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     ExAllocateCallBack @ 0x140759178 (ExAllocateCallBack.c)
 *     MmVerifyCallbackFunction @ 0x14088A7A8 (MmVerifyCallbackFunction.c)
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
