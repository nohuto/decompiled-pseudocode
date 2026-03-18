/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C0015840
 * Callers:
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const struct _MCGEN_TRACE_CONTEXT *a6,
        char a7,
        const struct _MCGEN_TRACE_CONTEXT *a8)
{
  const struct _MCGEN_TRACE_CONTEXT *v8; // rdi
  __int64 v9; // rbx
  const struct _MCGEN_TRACE_CONTEXT *v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  const struct _MCGEN_TRACE_CONTEXT *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r8
  const struct _MCGEN_TRACE_CONTEXT *v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *((_BYTE *)&a8->RegistrationHandle + v12) );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = a8;
    if ( !a8 )
      v14 = &Context;
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *((_BYTE *)&a6->RegistrationHandle + v15) );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = &Context;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      (char *)&Context.MatchAllKeyword + 4,
      10LL,
      v17,
      v16,
      &a7,
      4LL,
      v14,
      v13,
      0LL);
  }
  if ( v8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *((_BYTE *)&v8->RegistrationHandle + v18) );
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( *((_BYTE *)&a6->RegistrationHandle + v9) );
  }
  if ( !a6 )
    v10 = &Context;
  LOWORD(v20) = 10;
  return WppAutoLogTrace(a1, 2LL, 2LL, (char *)&Context.MatchAllKeyword + 4, v20, v10);
}
