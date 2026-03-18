/*
 * XREFs of VrpAllocateKeyContext @ 0x140841C28
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1408447F8 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
