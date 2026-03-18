/*
 * XREFs of sub_1406D044C @ 0x1406D044C
 * Callers:
 *     sub_140625200 @ 0x140625200 (sub_140625200.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     sub_140624870 @ 0x140624870 (sub_140624870.c)
 */

__int64 __fastcall sub_1406D044C(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_140624870(a1, (__int64)a2, -1);
    if ( v3 >= 0 )
    {
      v4 = (void *)a2[3];
      if ( v4 )
        ExFreePoolWithTag(v4, 0x42524157u);
      ExFreePoolWithTag(a2, 0x42524157u);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
