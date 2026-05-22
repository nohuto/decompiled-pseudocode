/*
 * XREFs of ?LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z @ 0x180059F00
 * Callers:
 *     _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x18005A1C0 (_lambda_aa0eaa0d8a3377c6799a200e781869ec_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::LogMPCLastHeadYawMovement(int a1)
{
  const struct _TlgProvider_t *v1; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  int v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1;
  v1 = (const struct _TlgProvider_t *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v1 > 4u
    && (*((_QWORD *)v1 + 2) & 0x400000000001LL) != 0
    && (*((_QWORD *)v1 + 3) & 0x400000000001LL) == *((_QWORD *)v1 + 3) )
  {
    v5 = 0;
    v3 = &v6;
    v4 = 4;
    TlgWrite(v1, &unk_180167AEE, 0LL, 0LL, 3u, &pData);
  }
}
