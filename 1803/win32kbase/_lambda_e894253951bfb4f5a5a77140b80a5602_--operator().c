/*
 * XREFs of _lambda_e894253951bfb4f5a5a77140b80a5602_::operator() @ 0x1C014F9DC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a5602___ @ 0x1C014F940 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a560.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e894253951bfb4f5a5a77140b80a5602_::operator()(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 271;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(*a1 + 24);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(*a1 + 176);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(*a1 + 168);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(*a1 + 172);
  *(_QWORD *)(a2 + 20) = *(_QWORD *)(*a1 + 184);
  result = *a1;
  *(_DWORD *)(a2 + 28) = (*(_DWORD *)(*a1 + 16) & 0x40000) == 0;
  return result;
}
