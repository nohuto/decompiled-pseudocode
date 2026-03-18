/*
 * XREFs of ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C0034D1C
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C00372B8 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C0037D64 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0034160 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0034D80 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::AssociateWithVisual(CompositionInputObject *this, void *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  void *v5; // rax
  CInputSink *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = CompositionInputObject::LockForWrite(this, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    v3 = 0;
    v5 = (void *)*((_QWORD *)v7 + 11);
    if ( a2 != v5 )
    {
      if ( a2 && v5 )
        v3 = -1073741823;
      else
        *((_QWORD *)v7 + 11) = a2;
    }
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
