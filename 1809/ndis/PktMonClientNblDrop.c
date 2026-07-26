/*
 * XREFs of PktMonClientNblDrop @ 0x1C0083E9C
 * Callers:
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientNblDrop(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  __int64 v11; // rdx
  __int16 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int16 v18[2]; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+60h] [rbp-10h]

  if ( byte_1C009FE30 && (*(_DWORD *)(a1 + 52) & 2) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
  {
    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    {
      v17 = 0LL;
      v11 = *(_QWORD *)(a1 + 40);
      v12 = 40;
      v16 = a6;
      v18[0] = 12;
      v19 = a7;
      v20 = a8;
      v13 = a2;
      v14 = 1;
      v15 = a3;
      (*(void (__fastcall **)(_QWORD, __int64, __int16 *, __int16 *, _QWORD))(*((_QWORD *)&xmmword_1C009FE48 + 1) + 48LL))(
        xmmword_1C009FE48,
        v11,
        &v12,
        v18,
        0LL);
      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
    }
  }
}
