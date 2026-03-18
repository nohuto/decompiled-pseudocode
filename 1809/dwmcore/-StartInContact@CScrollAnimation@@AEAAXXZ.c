/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x1801D64C8
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D5D00 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  void (*v4)(void); // rax
  const struct _TlgProvider_t *v5; // rcx
  CScrollAnimation *v6; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-28h]
  CScrollAnimation **v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 480LL);
  pData.Ptr = 0LL;
  *(_QWORD *)&pData.Size = 0LL;
  v8 = 0LL;
  v3 = *(_QWORD *)this;
  *((_OWORD *)this + 24) = 0u;
  *((_QWORD *)this + 39) = v2;
  v4 = *(void (**)(void))(v3 + 288);
  *((_QWORD *)this + 50) = 0LL;
  v4();
  *((_DWORD *)this + 72) = 1;
  if ( dword_180305E40 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v11 = 0;
      v9 = &v6;
      v6 = this;
      v10 = 8;
      TlgWrite(v5, &unk_1802B5FFB, 0LL, 0LL, 3u, &pData);
    }
  }
}
