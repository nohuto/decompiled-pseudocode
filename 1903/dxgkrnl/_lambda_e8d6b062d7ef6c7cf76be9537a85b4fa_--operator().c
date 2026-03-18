/*
 * XREFs of _lambda_e8d6b062d7ef6c7cf76be9537a85b4fa_::operator() @ 0x1C02341C8
 * Callers:
 *     _lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator() @ 0x1C0233DEC (_lambda_2792f1a5517d9286fa3e49da2fcc5db9_--operator().c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall lambda_e8d6b062d7ef6c7cf76be9537a85b4fa_::operator()(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  _DWORD *v6; // r10
  _DWORD *v7; // r11
  int v8; // edx
  __int64 result; // rax

  *(_QWORD *)(a3 + 8) = 133890LL;
  *(_QWORD *)a3 = 0x8004700000030B02uLL;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)a4;
  *(_DWORD *)(a3 + 24) = a2;
  *(_DWORD *)(a3 + 28) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a4 + 28);
  *(_DWORD *)(a3 + 52) = *(_DWORD *)(a4 + 32);
  *(_DWORD *)(a3 + 72) ^= (*(_DWORD *)(a3 + 72) ^ (*(_DWORD *)(a4 + 36) << 16)) & 0x3F0000;
  *(_DWORD *)(a3 + 88) = *(_DWORD *)(a4 + 20);
  *(_DWORD *)(a3 + 92) = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(a3 + 96) = 21;
  v5 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(a4 + 40));
  v6[28] = 1;
  v8 = 1;
  v6[27] = 1;
  if ( (unsigned int)(v5 - 1) <= 3 )
    v8 = v5;
  v6[26] = v8;
  v6[29] = v7[3];
  v6[30] = v7[4];
  v6[39] = a5;
  if ( ((v7[10] - 1) & 0xFFFFFFFD) != 0 )
  {
    v6[31] = v7[6];
    result = (unsigned int)v7[5];
  }
  else
  {
    v6[31] = v7[5];
    result = (unsigned int)v7[6];
  }
  v6[32] = result;
  return result;
}
