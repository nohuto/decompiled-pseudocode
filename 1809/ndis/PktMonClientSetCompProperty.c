/*
 * XREFs of PktMonClientSetCompProperty @ 0x1C0026C04
 * Callers:
 *     ndisPktMonMiniportRegister @ 0x1C00BDA64 (ndisPktMonMiniportRegister.c)
 *     ndisPktMonFilterRegister @ 0x1C00C36AC (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C00C37D0 (ndisPktMonOpenRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonClientSetCompProperty(__int64 a1, int a2, __int64 a3, unsigned __int16 a4)
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
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _WORD *))(*((_QWORD *)&xmmword_1C009FE48 + 1) + 24LL))(
           xmmword_1C009FE48,
           *(_QWORD *)(a1 + 40),
           v7);
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v5;
}
