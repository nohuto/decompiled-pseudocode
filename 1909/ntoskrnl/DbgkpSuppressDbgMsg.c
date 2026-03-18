/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x14084A774
 * Callers:
 *     DbgkMapViewOfSection @ 0x14067E638 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1406D9424 (DbgkUnMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int16 v3; // ax
  unsigned int v5; // [rsp+0h] [rbp-18h]

  v5 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6] )
    {
      v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
      if ( v2 )
      {
        v3 = *(_WORD *)(v2 + 8);
        if ( v3 == 332 || v3 == 452 )
          return *(char *)(a1 + 12234) < 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
