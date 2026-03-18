/*
 * XREFs of PiDqGetPnpObjectType @ 0x1405BB258
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x1405B6828 (PiDqQueryValidateQueryData.c)
 *     PiDqActionDataCreate @ 0x1405B7104 (PiDqActionDataCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405B76A4 (PiDqQueryAppendActionEntry.c)
 *     PiDqPropertyCallback @ 0x1405BB290 (PiDqPropertyCallback.c)
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqGetPnpObjectType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 3;
          if ( v7 )
          {
            if ( v7 == 4 )
              return 6;
          }
          else
          {
            return 2;
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 5;
    }
  }
  else
  {
    return 3;
  }
  return v1;
}
