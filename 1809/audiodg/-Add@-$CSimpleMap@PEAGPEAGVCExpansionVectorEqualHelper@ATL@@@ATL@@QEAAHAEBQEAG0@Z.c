/*
 * XREFs of ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x14005043C
 * Callers:
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x1400504E4 (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // r8
  _QWORD *v12; // rdx

  v6 = _o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = _o__recalloc(v7, *(_DWORD *)(a1 + 16) + 1, 8LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
  {
    *v11 = *a2;
    v9 = *(_QWORD *)(a1 + 8);
  }
  v12 = (_QWORD *)(v9 + 8 * v10);
  if ( v12 )
    *v12 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
