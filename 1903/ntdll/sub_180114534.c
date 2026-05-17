/*
 * XREFs of sub_180114534 @ 0x180114534
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 * Callees:
 *     sub_18008C038 @ 0x18008C038 (sub_18008C038.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     sub_18011459C @ 0x18011459C (sub_18011459C.c)
 */

__int64 __fastcall sub_180114534(unsigned __int16 *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = sub_18008C038(a1, &v5);
  if ( v3 >= 0 )
  {
    v3 = sub_18011459C(v5, a2);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( v5 )
    ZwClose();
  return (unsigned int)v3;
}
