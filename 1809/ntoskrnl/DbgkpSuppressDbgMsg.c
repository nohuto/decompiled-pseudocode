/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x14081284C
 * Callers:
 *     DbgkMapViewOfSection @ 0x14067863C (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1406B861C (DbgkUnMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int16 v2; // ax
  unsigned int v4; // [rsp+0h] [rbp-18h]

  v4 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      v1 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v1 )
      {
        v2 = *(_WORD *)(v1 + 8);
        if ( v2 == 332 || v2 == 452 )
          return *(char *)(a1 + 12234) < 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v4;
}
