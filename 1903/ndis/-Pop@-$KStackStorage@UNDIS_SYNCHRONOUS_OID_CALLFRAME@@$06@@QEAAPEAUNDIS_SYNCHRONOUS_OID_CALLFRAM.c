/*
 * XREFs of ?Pop@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C006821C
 * Callers:
 *     ndisSynchronousOidRequestInternal @ 0x1C0070038 (ndisSynchronousOidRequestInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Pop(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  if ( !v2 )
  {
    v3 = *(_QWORD **)(a1 + 120);
    if ( !*v3 )
      return 0LL;
    *(_QWORD *)(a1 + 120) = *v3;
    v2 = 7LL;
    *(_QWORD *)(a1 + 128) = 7LL;
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x4253444Eu);
      v2 = *(_QWORD *)(a1 + 128);
    }
  }
  v5 = *(_QWORD *)(a1 + 120);
  v6 = v2 - 1;
  *(_QWORD *)(a1 + 128) = v6;
  return 16 * v6 + v5 + 8;
}
