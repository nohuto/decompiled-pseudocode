/*
 * XREFs of MiCloneDiscardVadCommit @ 0x140859C34
 * Callers:
 *     MiCloneCaptureVadCommit @ 0x1402BA108 (MiCloneCaptureVadCommit.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiCloneDiscardVadCommit(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
