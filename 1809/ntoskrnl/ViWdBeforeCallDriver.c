/*
 * XREFs of ViWdBeforeCallDriver @ 0x14093F7A0
 * Callers:
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     VfTargetDriversIsEnabled @ 0x140935AD4 (VfTargetDriversIsEnabled.c)
 */

void __fastcall ViWdBeforeCallDriver(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax

  if ( !*a3 && *(_BYTE *)(a1 + 64) == 1 && (unsigned int)VfTargetDriversIsEnabled(a2) && ViWdInitialized )
  {
    v5 = ExAllocateFromNPagedLookasideList(&ViWdIrpLookasideList);
    if ( v5 )
    {
      v5[2] = a1;
      *((_BYTE *)v5 + 29) = *(_BYTE *)(a1 + 67);
      *((_BYTE *)v5 + 28) = 0;
      *a3 = v5;
    }
  }
}
