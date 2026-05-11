/*
 * XREFs of GetMicArrayGeometryInfo @ 0x1C0025A00
 * Callers:
 *     PropertyGetMicArrayGeometryBasicSupport @ 0x1C0025A80 (PropertyGetMicArrayGeometryBasicSupport.c)
 *     PropertyGetMicArrayGeometry @ 0x1C0025B60 (PropertyGetMicArrayGeometry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMicArrayGeometryInfo(_QWORD *a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rcx

  if ( a2 >= *(_DWORD *)(*a1 + 32LL) )
    return 3221226021LL;
  v6 = *(_QWORD *)(a1[2] + 16LL);
  result = 0LL;
  v7 = *(_DWORD *)(v6 + 192);
  v8 = *(_QWORD *)(v6 + 200);
  v9 = 0;
  if ( !v7 )
    goto LABEL_7;
  do
  {
    if ( *(_DWORD *)(v8 + 84) == a2 )
      break;
    ++v9;
    v8 += 152LL;
  }
  while ( v9 < v7 );
  if ( v9 >= v7 )
LABEL_7:
    v8 = 0LL;
  if ( !v8 )
    return 3221225659LL;
  if ( *(_DWORD *)(v8 + 76) != 2 )
    return 3221225659LL;
  v10 = *(_QWORD *)(v8 + 128);
  if ( !v10 )
    return 3221225659LL;
  *a3 = v10;
  return result;
}
