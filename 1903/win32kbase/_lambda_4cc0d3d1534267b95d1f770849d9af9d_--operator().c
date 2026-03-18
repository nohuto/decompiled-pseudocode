/*
 * XREFs of _lambda_4cc0d3d1534267b95d1f770849d9af9d_::operator() @ 0x1C00094B0
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9d___ @ 0x1C0009434 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4cc0d3d1534267b95d1f770849d9af9.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4cc0d3d1534267b95d1f770849d9af9d_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  a2[2] = *(_DWORD *)(*a1 + 96);
  a2[3] = *(_DWORD *)(*a1 + 100);
  v2 = 0LL;
  if ( !*(_BYTE *)(*a1 + 129) )
  {
    a2[4] = *(_DWORD *)(*a1 + 104);
    a2[5] = *(_DWORD *)(*a1 + 108);
    a2[6] = *(_DWORD *)(*a1 + 112);
    a2[7] = *(_DWORD *)(*a1 + 116);
    a2[8] = *(_DWORD *)(*a1 + 120);
    a2[9] = *(_DWORD *)(*a1 + 124);
  }
  do
  {
    result = *a1;
    *((_BYTE *)a2 + v2 + 40) = *(_BYTE *)(*a1 + v2 + 128);
    ++v2;
  }
  while ( v2 < 2 );
  return result;
}
