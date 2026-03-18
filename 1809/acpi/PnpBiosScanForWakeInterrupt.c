/*
 * XREFs of PnpBiosScanForWakeInterrupt @ 0x1C002A438
 * Callers:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C002A3A0 (PnpBiosSetFlagsForNotableInterrupts.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpBiosScanForWakeInterrupt(char *a1, unsigned int a2)
{
  char v4; // dl
  char v5; // r9
  char *v6; // r8
  char v7; // r11
  char v8; // cl
  char v9; // bl
  __int64 v10; // r14
  unsigned __int16 v11; // r10
  char *v12; // r10
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  char v18; // al

  if ( a2 < 5 )
    return 0;
  v4 = 1;
  v5 = 0;
  v6 = a1;
  v7 = 1;
  v8 = *a1;
  v9 = 0;
  v10 = a2;
  while ( 1 )
  {
    if ( v8 < 0 )
    {
      v11 = *(_WORD *)(v6 + 1) + 3;
    }
    else
    {
      v11 = (v8 & 7) + 1;
      v8 &= 0x78u;
    }
    if ( v8 == 120 )
      break;
    v12 = &v6[v11];
    if ( v12 >= &a1[v10] )
      goto LABEL_16;
    v13 = (unsigned __int8)v8 - 32;
    if ( v13 )
    {
      v14 = v13 - 16;
      if ( !v14 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v15 = v14 - 8;
      if ( !v15 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v16 = v15 - 81;
      if ( v16 )
      {
        if ( v16 != 3 || v6[4] )
          goto LABEL_12;
        v18 = v6[7];
      }
      else
      {
        v18 = v6[3];
      }
      if ( (v18 & 0x10) != 0 )
        v5 = 1;
    }
    else if ( (*v6 & 7) == 3 && (v6[3] & 0x20) != 0 )
    {
      v5 = 1;
    }
LABEL_12:
    v6 = v12;
    if ( v12 >= &a1[v10] )
      goto LABEL_16;
    v8 = *v12;
  }
  v9 = 1;
  v7 &= -(v5 != 0);
LABEL_16:
  if ( !v7 || !v9 )
    return 0;
  return v4;
}
