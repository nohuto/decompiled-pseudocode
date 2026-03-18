/*
 * XREFs of _lambda_93b6d172784ab005d03ec383313e6029_::operator() @ 0x1C007D674
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_93b6d172784ab005d03ec383313e6029___ @ 0x1C007D608 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_93b6d172784ab005d03ec383313e602.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_93b6d172784ab005d03ec383313e6029_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  result = 0LL;
  if ( v2 )
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v2 + 24);
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 64LL);
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
  }
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
