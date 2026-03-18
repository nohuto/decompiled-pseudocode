/*
 * XREFs of _lambda_6c4d9031ee459ab96e0a644511042a19_::operator() @ 0x1C017D7B8
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6c4d9031ee459ab96e0a644511042a19___ @ 0x1C017D594 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6c4d9031ee459ab96e0a644511042a1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_6c4d9031ee459ab96e0a644511042a19_::operator()(__int64 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int64 v3; // r8
  int v4; // eax
  __int64 result; // rax

  *(_OWORD *)(a2 + 8) = *(_OWORD *)(*a1 + 48);
  v2 = *(_OWORD *)(*a1 + 64);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 24) = v2;
  v3 = *(_QWORD *)(*a1 + 40);
  v4 = 0;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(a2 + 48) = v4;
  *(_DWORD *)(a2 + 60) = 1;
  *(_DWORD *)(a2 + 64) = 1;
  *(_DWORD *)(a2 + 52) = 0;
  *(_DWORD *)(a2 + 56) = 28;
  result = *a1;
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(*a1 + 84);
  return result;
}
