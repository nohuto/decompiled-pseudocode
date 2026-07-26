/*
 * XREFs of PktMonClientSetCompProperty @ 0x1C00C9934
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonClientSetCompProperty(_QWORD *a1, int a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v5; // ebx
  _WORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+24h] [rbp-24h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v7[1] = 0;
  v7[0] = 24;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
  {
    v5 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _WORD *))*(&ProviderBindingContext + 1) + 3))(
           ProviderBindingContext,
           *a1,
           v7);
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v5;
}
