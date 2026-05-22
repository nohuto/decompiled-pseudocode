/*
 * XREFs of ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x180044540
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180043F00 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(ISMTracing *this, const bool *a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const bool *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v3 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 )
    {
      v4 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        v8 = 0;
        v6 = a2;
        v7 = 1;
        TlgWrite((TraceLoggingHProvider)v4, &unk_18016706C, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
