/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18006806C
 * Callers:
 *     wil::details::lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___::_lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___ @ 0x180067AC4 (wil--details--lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___--_lambda_call__lambda_d52f.c)
 * Callees:
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 */

__int64 __fastcall AtmosCheck::EndAppSvcCall(AtmosCheck *this)
{
  _DWORD *v2; // rbx
  unsigned __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  _DWORD *v7; // rdx
  DWORD CurrentThreadId; // [rsp+40h] [rbp+8h]

  CurrentThreadId = GetCurrentThreadId();
  CoDisableCallCancellation(0LL);
  v2 = (_DWORD *)*((_QWORD *)this + 66);
  v3 = *((_QWORD *)this + 67);
  while ( v2 != (_DWORD *)v3 && CurrentThreadId != *v2 )
    ++v2;
  if ( v2 != (_DWORD *)v3 )
  {
    v4 = v2 + 1;
    v5 = 0LL;
    v6 = (v3 - (unsigned __int64)(v2 + 1) + 3) >> 2;
    if ( (unsigned __int64)(v2 + 1) > v3 )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( CurrentThreadId != *v4 )
          *v2++ = *v4;
        ++v4;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  v7 = (_DWORD *)*((_QWORD *)this + 67);
  if ( v2 != v7 )
  {
    memmove_0(v2, v7, 0LL);
    *((_QWORD *)this + 67) = v2;
  }
  return 0LL;
}
