/*
 * XREFs of ?Push@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C0068468
 * Callers:
 *     ndisSynchronousOidRequestInternal @ 0x1C0070208 (ndisSynchronousOidRequestInternal.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Push(__int64 a1)
{
  unsigned __int64 v1; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 >= 7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4253444Eu);
    v1 = 0LL;
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 1, 0, 0x70uLL);
      *v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
      return 0LL;
    *v4 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 120) = v4;
  }
  *(_QWORD *)(a1 + 128) = v1 + 1;
  return 16 * v1 + *(_QWORD *)(a1 + 120) + 8LL;
}
