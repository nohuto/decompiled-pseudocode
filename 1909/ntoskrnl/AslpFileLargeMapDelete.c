/*
 * XREFs of AslpFileLargeMapDelete @ 0x14092BC60
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x14092B4D8 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x14092B9E8 (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslpFilePartialViewFree @ 0x14092BCBC (AslpFilePartialViewFree.c)
 */

void __fastcall AslpFileLargeMapDelete(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 6);
      AslpFilePartialViewFree(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      ExFreePoolWithTag(v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
