/*
 * XREFs of sub_18003D724 @ 0x18003D724
 * Callers:
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 * Callees:
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 */

__int64 __fastcall sub_18003D724(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        D3D_FEATURE_LEVEL a5,
        D3D_FEATURE_LEVEL a6,
        char a7)
{
  return sub_18003C958(
           (ID3D11DeviceContext *)a1,
           (IDXGIAdapter **)a1,
           (__int64 *)(a1 + 320),
           (ID3D11Device **)(a1 + 328),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
