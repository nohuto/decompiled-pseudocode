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
  unsigned __int64 Root; // rbx
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
  Root = (unsigned __int64)LdrpRedirectionTree.Root;
  v14[0] = v5;
  v14[1] = *(_DWORD *)(v6 + 264);
  v15 = v9;
  v16 = v7;
  if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 && LdrpRedirectionTree.Root )
    Root = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
  v10 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
  if ( Root )
  {
    do
    {
      v11 = LdrpCompareRedirectedFunction(v14, Root);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v12 = *(_QWORD *)Root;
      }
      if ( v10 && v12 )
        Root ^= v12;
      else
        Root = v12;
    }
    while ( Root );
    if ( Root
      && (!LdrpRedirectionByFunctionCalloutFunc
       || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(*(_QWORD *)(a1 + 80), *(unsigned int *)(Root + 64))) )
    {
      return *(_QWORD *)(Root + 56);
    }
  }
  return v4;
}
