/*
 * XREFs of ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x18004447C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x180043F90 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const bool *v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  const bool *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v10 = 0;
        v13 = 0;
        v8 = a2;
        v9 = 1;
        v11 = a3;
        v12 = 1;
        TlgWrite((TraceLoggingHProvider)v6, &unk_180166E87, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
