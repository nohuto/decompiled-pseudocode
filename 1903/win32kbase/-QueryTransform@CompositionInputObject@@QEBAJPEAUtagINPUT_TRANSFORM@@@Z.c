/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0037B5C
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00379D0 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011F0D0 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransformFromVisualIdentifier@@YAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011F130 (-GetTransformFromVisualIdentifier@@YAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C0182854 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0037C50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0037CE0 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = CompositionInputObject::LockForRead(this, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *(_OWORD *)a2 = *((_OWORD *)v6 + 6);
    *((_OWORD *)a2 + 1) = *((_OWORD *)v4 + 7);
    *((_OWORD *)a2 + 2) = *((_OWORD *)v4 + 8);
    *((_OWORD *)a2 + 3) = *((_OWORD *)v4 + 9);
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
