/*
 * XREFs of ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x18006C544
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800994F8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180099E64 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AddToResourceCount(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx

  if ( a2 > 0x55 )
  {
    v3 = a2 - 86;
    if ( !v3 )
    {
LABEL_8:
      a1[17] += a3;
      return;
    }
    v4 = v3 - 57;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 13;
        if ( v6 )
        {
          if ( v6 != 7 )
            goto LABEL_7;
        }
      }
      goto LABEL_8;
    }
    goto LABEL_16;
  }
  if ( a2 == 85 )
  {
    a1[18] += a3;
  }
  else
  {
    if ( a2 == 29 )
      goto LABEL_18;
    if ( a2 <= 0x1E )
      goto LABEL_7;
    if ( a2 == 36 || a2 <= 0x21 )
    {
LABEL_18:
      a1[19] += a3;
    }
    else
    {
      if ( a2 != 37 )
      {
        if ( a2 == 39 )
        {
LABEL_16:
          a1[15] += a3;
          return;
        }
LABEL_7:
        a1[16] += a3;
        return;
      }
      a1[20] += a3;
    }
  }
}
