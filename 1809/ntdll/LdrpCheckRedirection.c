/*
 * XREFs of LdrpCheckRedirection @ 0x1800D75A4
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpCompareRedirectedFunction @ 0x1800D7668 (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800D7AC4 (LdrpHashAsciizString.c)
 */

__int64 __fastcall LdrpCheckRedirection(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // r9
  __int128 v5; // xmm0
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  int v8; // edi
  int v9; // eax
  unsigned __int64 v10; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int128 v14; // [rsp+30h] [rbp-18h]

  v2 = -4530927LL;
  v3 = LdrpHashAsciizString(a2, a2, a2);
  v5 = *(_OWORD *)(v4 + 88);
  v6 = LdrpRedirectionTree;
  v12[0] = v3;
  v12[1] = *(_DWORD *)(v4 + 264);
  v13 = v7;
  v14 = v5;
  if ( (qword_1801661A0 & 1) != 0 && LdrpRedirectionTree )
    v6 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
  v8 = qword_1801661A0 & 1;
  if ( v6 )
  {
    do
    {
      v9 = LdrpCompareRedirectedFunction(v12, v6);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v10 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v10 = *(_QWORD *)v6;
      }
      if ( v8 && v10 )
        v6 ^= v10;
      else
        v6 = v10;
    }
    while ( v6 );
    if ( v6 )
      return *(_QWORD *)(v6 + 56);
  }
  return v2;
}
