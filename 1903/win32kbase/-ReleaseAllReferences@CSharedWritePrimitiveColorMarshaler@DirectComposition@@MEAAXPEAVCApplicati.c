/*
 * XREFs of ?ReleaseAllReferences@CSharedWritePrimitiveColorMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01C5EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedWritePrimitiveColorMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWritePrimitiveColorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 7) = 0LL;
  }
}
