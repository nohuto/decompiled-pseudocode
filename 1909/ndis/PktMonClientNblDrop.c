/*
 * XREFs of PktMonClientNblDrop @ 0x1C00C97A4
 * Callers:
 *     PktMonClientNblDropNdis @ 0x1C00C98AC (PktMonClientNblDropNdis.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientNblDrop(__int64 *a1, __int64 a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  __int64 v11; // rdx
  __int16 v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+32h] [rbp-3Eh]
  __int16 v14; // [rsp+36h] [rbp-3Ah]
  __int64 v15; // [rsp+38h] [rbp-38h]
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  int v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+4Ch] [rbp-24h]
  __int64 v20; // [rsp+50h] [rbp-20h]
  _WORD v21[2]; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+5Ch] [rbp-14h]
  int v23; // [rsp+60h] [rbp-10h]

  v13 = 0;
  v14 = 0;
  v19 = 0;
  v21[1] = 0;
  if ( byte_1C00E5E20 && (*((_DWORD *)a1 + 3) & 2) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
  {
    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    {
      v11 = *a1;
      v12 = 40;
      v18 = a6;
      v21[0] = 12;
      v22 = a7;
      v23 = a8;
      v15 = a2;
      v16 = 1;
      v17 = a3;
      v20 = 0LL;
      (*((void (__fastcall **)(PVOID, __int64, __int16 *, _WORD *, _QWORD))*(&ProviderBindingContext + 1) + 6))(
        ProviderBindingContext,
        v11,
        &v12,
        v21,
        0LL);
      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
    }
  }
}
