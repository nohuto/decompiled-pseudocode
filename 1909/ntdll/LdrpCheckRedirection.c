/*
 * XREFs of LdrpCheckRedirection @ 0x1800D5510
 * Callers:
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D55FC (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800D5A44 (LdrpHashAsciizString.c)
 */

__int64 __fastcall LdrpCheckRedirection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // r9
  __int128 v7; // xmm0
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  int v10; // edi
  int v11; // eax
  unsigned __int64 v12; // rax
  _DWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-18h]

  v4 = -4530927LL;
  v5 = LdrpHashAsciizString(a3, a2, a3);
  v7 = *(_OWORD *)(v6 + 88);
  v8 = LdrpRedirectionTree;
  v14[0] = v5;
  v14[1] = *(_DWORD *)(v6 + 264);
  v15 = v9;
  v16 = v7;
  if ( (qword_1801665D8 & 1) != 0 && LdrpRedirectionTree )
    v8 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
  v10 = qword_1801665D8 & 1;
  if ( v8 )
  {
    do
    {
      v11 = LdrpCompareRedirectedFunction(v14, v8);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(v8 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v8;
      }
      if ( v10 && v12 )
        v8 ^= v12;
      else
        v8 = v12;
    }
    while ( v8 );
    if ( v8
      && (!LdrpRedirectionByFunctionCalloutFunc
       || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(*(_QWORD *)(a1 + 80), *(unsigned int *)(v8 + 64))) )
    {
      return *(_QWORD *)(v8 + 56);
    }
  }
  return v4;
}
