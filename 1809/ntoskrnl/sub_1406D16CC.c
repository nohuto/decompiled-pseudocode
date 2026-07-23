/*
 * XREFs of sub_1406D16CC @ 0x1406D16CC
 * Callers:
 *     sub_140626220 @ 0x140626220 (sub_140626220.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     sub_140625890 @ 0x140625890 (sub_140625890.c)
 */

__int64 __fastcall sub_1406D16CC(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_140625890(a1, (__int64)a2, -1);
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
