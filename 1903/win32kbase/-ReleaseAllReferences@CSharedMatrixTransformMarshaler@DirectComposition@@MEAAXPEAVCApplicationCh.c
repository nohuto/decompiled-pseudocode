/*
 * XREFs of ?ReleaseAllReferences@CSharedMatrixTransformMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01C5C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedMatrixTransformMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedMatrixTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 10) = 0LL;
  }
}
