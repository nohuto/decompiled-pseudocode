/*
 * XREFs of ACPIPepGetNextPlatformNotification @ 0x1C00B07E4
 * Callers:
 *     ACPIPepWorker @ 0x1C00B0D70 (ACPIPepWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIPepGetNextPlatformNotification(_BYTE *a1, int *a2, _BYTE *a3)
{
  char v3; // r9
  char v4; // r11
  char v7; // al
  char v8; // r8
  char v9; // dl
  int v10; // eax

  *a2 = -1;
  v3 = 0;
  v4 = a1[242];
  if ( !v4 || (v7 = 1, a1[243] == a1[244]) )
    v7 = 0;
  v8 = a1[241];
  if ( !v8 || (v9 = a1[245], v9 == a1[246]) )
  {
    if ( !v7 )
      goto LABEL_20;
    if ( !a1[243] && a1[245] && v8 )
    {
      a1[245] = 0;
      *a2 = 0;
      goto LABEL_19;
    }
    goto LABEL_10;
  }
  if ( v9 && !a1[243] && v4 )
  {
    a1[243] = 1;
LABEL_10:
    v10 = 1;
    goto LABEL_11;
  }
  v10 = 0;
LABEL_11:
  *a2 = v10;
  if ( v10 != 1 )
  {
LABEL_19:
    v3 = a1[245];
    a1[246] = v3;
    goto LABEL_20;
  }
  v3 = a1[243];
  a1[244] = v3;
LABEL_20:
  *a3 = v3;
  return *a2 != -1;
}
