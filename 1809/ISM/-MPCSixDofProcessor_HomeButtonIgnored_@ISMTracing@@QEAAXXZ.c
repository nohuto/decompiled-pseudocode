/*
 * XREFs of ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1800F52DC
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(ISMTracing *this)
{
  const struct _TlgProvider_t *v1; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = (const struct _TlgProvider_t *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v1 > 4u
    && (*((_QWORD *)v1 + 2) & 0x400000000001LL) != 0
    && (*((_QWORD *)v1 + 3) & 0x400000000001LL) == *((_QWORD *)v1 + 3) )
  {
    TlgWrite(v1, &unk_18016B3E9, 0LL, 0LL, 2u, &pData);
  }
}
