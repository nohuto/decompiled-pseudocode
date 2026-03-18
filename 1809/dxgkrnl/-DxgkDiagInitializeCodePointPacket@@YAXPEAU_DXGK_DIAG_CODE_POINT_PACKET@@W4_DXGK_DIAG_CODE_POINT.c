/*
 * XREFs of ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0005AA8
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDiagInitializeCodePointPacket(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)a1 = 6;
  *(_DWORD *)(a1 + 4) = 64;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a5;
  *(_DWORD *)(a1 + 60) = a5;
  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 56) = a4;
  return result;
}
