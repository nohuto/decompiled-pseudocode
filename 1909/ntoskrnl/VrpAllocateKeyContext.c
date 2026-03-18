/*
 * XREFs of VrpAllocateKeyContext @ 0x140841288
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x140843E6C (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall VrpAllocateKeyContext(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x67655256u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    v3[5] = Object;
  }
  return v3;
}
