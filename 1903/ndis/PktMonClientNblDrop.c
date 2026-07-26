/*
 * XREFs of PktMonClientNblDrop @ 0x1C00C9664
 * Callers:
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientNblDrop(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  __int16 v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+32h] [rbp-3Eh]
  __int16 v12; // [rsp+36h] [rbp-3Ah]
  __int64 v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  _WORD v18[2]; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]

  v11 = 0;
  v12 = 0;
  v17 = 0;
  v18[1] = 0;
  if ( byte_1C00E5E20 && (*((_DWORD *)a1 + 3) & 2) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
  {
    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    {
      v9 = *a1;
      v10 = 32;
      v15 = *((_DWORD *)a1 + 2);
      v18[0] = 12;
      v19 = a5;
      v20 = a6;
      v13 = a2;
      v14 = 1;
      v16 = a4;
      (*((void (__fastcall **)(PVOID, __int64, __int16 *, _WORD *, _QWORD))*(&ProviderBindingContext + 1) + 6))(
        ProviderBindingContext,
        v9,
        &v10,
        v18,
        0LL);
      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
    }
  }
}
