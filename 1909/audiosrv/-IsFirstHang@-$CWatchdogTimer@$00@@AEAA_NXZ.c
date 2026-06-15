/*
 * XREFs of ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C285C
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800C2A70 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

bool __fastcall CWatchdogTimer<1>::IsFirstHang(__int64 a1)
{
  signed __int32 v1; // r9d
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r9
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v1 = _InterlockedExchangeAdd(&`CWatchdogTimer<1>::IsFirstHang'::`2'::hangsCaught, 1u);
  v2 = *(const struct _TlgProvider_t **)(a1 + 8);
  LODWORD(v3) = v1 + 1;
  v7 = (int)v3;
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 1uLL) )
  {
    v11 = 0;
    v9 = &v7;
    v10 = 4;
    TlgWrite(v4, &unk_18017688E, v5, v3, 3u, &pData);
    LODWORD(v3) = v7;
  }
  return (_DWORD)v3 == 1;
}
