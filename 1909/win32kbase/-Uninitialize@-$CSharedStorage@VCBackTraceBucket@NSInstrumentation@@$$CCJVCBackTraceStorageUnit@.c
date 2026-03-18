/*
 * XREFs of ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C0131758
 * Callers:
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C0130B90 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(
        __int64 a1)
{
  unsigned int v1; // eax
  _QWORD ***v3; // r14
  _QWORD ***v4; // rsi
  __int64 v5; // rbp
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  void *v8; // rcx

  v1 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD ****)(a1 + 48);
  if ( v1 )
  {
    v4 = v3 + 1;
    v5 = v1;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        while ( *v6 )
        {
          v7 = *v6;
          *v6 = (_QWORD *)**v6;
          ExFreePoolWithTag(v7, 0);
        }
        ExFreePoolWithTag(v6, 0);
      }
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  ExFreePoolWithTag(v3, 0);
  v8 = *(void **)(a1 + 40);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
}
