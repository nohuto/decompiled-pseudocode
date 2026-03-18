/*
 * XREFs of _lambda_85eb2fb27aae860c43849b4df2db6d53_::operator() @ 0x1C0011BEC
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d53___ @ 0x1C000D9E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_85eb2fb27aae860c43849b4df2db6d53_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  a2[2] = *(_DWORD *)(*a1 + 96);
  a2[3] = *(_DWORD *)(*a1 + 100);
  v2 = *a1;
  if ( !*(_BYTE *)(*a1 + 129) )
  {
    a2[4] = *(_DWORD *)(v2 + 104);
    a2[5] = *(_DWORD *)(*a1 + 108);
    a2[6] = *(_DWORD *)(*a1 + 112);
    a2[7] = *(_DWORD *)(*a1 + 116);
    a2[8] = *(_DWORD *)(*a1 + 120);
    a2[9] = *(_DWORD *)(*a1 + 124);
    v2 = *a1;
  }
  a2[10] = *(unsigned __int8 *)(v2 + 128);
  result = *a1;
  a2[11] = *(unsigned __int8 *)(*a1 + 129);
  return result;
}
