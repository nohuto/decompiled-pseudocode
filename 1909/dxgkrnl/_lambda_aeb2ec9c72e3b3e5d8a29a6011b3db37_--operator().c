/*
 * XREFs of _lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37_::operator() @ 0x1C02345C8
 * Callers:
 *     _DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C003FA58 (_DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002294 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 */

__int64 __fastcall lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37_::operator()(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // r9d

  v1 = **(_DWORD **)a1;
  result = v1 + 0x80000000;
  if ( (int)result >= 0 && v1 != -1073741772 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)v3 )
      v4 = *(_DWORD *)(*(_QWORD *)v3 + 40LL);
    else
      v4 = -1;
    return DxgkLogCodePointPacketForSession(0x69u, ***(unsigned int ***)(a1 + 8), v1, v4, 0, 0LL);
  }
  return result;
}
