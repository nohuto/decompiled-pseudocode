/*
 * XREFs of RaspDestroySegmentList @ 0x14017AB94
 * Callers:
 *     RaspScanConvert @ 0x14017AD50 (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x14017BD7C (RaspCreateSegmentList.c)
 * Callees:
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 */

__int64 __fastcall RaspDestroySegmentList(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // ebp
  char *i; // rbx
  char *v8; // rsi
  char v9; // al
  __int64 v11; // rcx
  __int64 v12; // rcx

  v3 = 0;
  if ( a2 )
  {
    for ( i = (char *)(a1 + 24); ; i += 25 )
    {
      v8 = i - 24;
      if ( i == (char *)24 )
        return RaspFreeMemory(a1, a3);
      v9 = *i;
      if ( *i == 3 )
      {
        v9 = 3;
        if ( *(_QWORD *)v8 )
        {
          RaspFreeMemory(*(_QWORD *)v8, a3);
          v9 = *i;
        }
      }
      if ( v9 != 4 )
        goto LABEL_6;
      v12 = *((_QWORD *)i - 1);
      if ( v12 )
        break;
LABEL_7:
      if ( ++v3 >= a2 )
        return RaspFreeMemory(a1, a3);
    }
    RaspFreeMemory(v12, a3);
    v9 = *i;
LABEL_6:
    if ( v9 == 5 )
    {
      if ( *(_QWORD *)v8 )
        RaspFreeMemory(*(_QWORD *)v8, a3);
      v11 = *((_QWORD *)i - 1);
      if ( v11 )
        RaspFreeMemory(v11, a3);
    }
    goto LABEL_7;
  }
  return RaspFreeMemory(a1, a3);
}
