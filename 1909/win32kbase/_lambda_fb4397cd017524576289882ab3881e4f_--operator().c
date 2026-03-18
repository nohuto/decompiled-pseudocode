/*
 * XREFs of _lambda_fb4397cd017524576289882ab3881e4f_::operator() @ 0x1C01ADEDC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb4397cd017524576289882ab3881e4f___ @ 0x1C01ADE70 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fb4397cd017524576289882ab3881e4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_fb4397cd017524576289882ab3881e4f_::operator()(_DWORD **a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = **a1;
  v2 = *((_QWORD *)*a1 + 1);
  result = 0LL;
  if ( v2 )
    result = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
