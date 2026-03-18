/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x180207680
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180206E78 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  void (*v4)(void); // rax
  const struct _TlgProvider_t *v5; // rcx
  CScrollAnimation *v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  CScrollAnimation **v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
  pData.Ptr = 0LL;
  *(_QWORD *)&pData.Size = 0LL;
  v8 = 0LL;
  v3 = *(_QWORD *)this;
  *(_OWORD *)((char *)this + 408) = 0u;
  *((_QWORD *)this + 42) = v2;
  v4 = *(void (**)(void))(v3 + 320);
  *((_QWORD *)this + 53) = 0LL;
  v4();
  *((_DWORD *)this + 78) = 1;
  if ( dword_18033A240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
    {
      v11 = 0;
      v9 = &v6;
      v6 = this;
      v10 = 8;
      TlgWrite(v5, &unk_1802DD4E3, 0LL, 0LL, 3u, &pData);
    }
  }
}
