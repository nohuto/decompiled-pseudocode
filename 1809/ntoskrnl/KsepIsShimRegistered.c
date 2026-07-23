/*
 * XREFs of KsepIsShimRegistered @ 0x1407297BC
 * Callers:
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140849030 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408497C4 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KsepIsShimRegistered(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d
  _QWORD *v7; // r10
  _QWORD *v8; // rcx
  _QWORD *v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rdx

  v4 = 0;
  if ( !a2 || !a1 )
    return 0LL;
  v7 = (_QWORD *)(a1 + 16);
  v8 = *(_QWORD **)(a1 + 16);
  while ( v8 != v7 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( (*((_DWORD *)v9 + 7) & 4) == 0 )
    {
      v10 = *(_QWORD **)(v9[2] + 8LL);
      v11 = *v10 - *a2;
      if ( *v10 == *a2 )
        v11 = v10[1] - a2[1];
      if ( !v11 )
      {
        if ( a4 )
          *a4 = v9;
        return 1;
      }
    }
  }
  return v4;
}
