/*
 * XREFs of ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0036C70
 * Callers:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0036AEC (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0036B4C (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0036CE0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionInputObject::LockForRead(char *Object, const struct CInputSink **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockShared((CPushLock *)(Object + 32));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (const struct CInputSink *)(Object + 24);
  }
  return (unsigned int)v4;
}
