/*
 * XREFs of ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C010F848
 * Callers:
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall IsTooltipHittest(struct tagWND *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  unsigned __int16 *result; // rax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  bool v11; // zf
  void *v12; // rcx
  __int64 v13; // rdx

  v2 = a2 - 2;
  if ( !v2 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 8) != 0 )
      return (unsigned __int16 *)&gszCAPTIONTOOLTIP;
    return 0LL;
  }
  v3 = v2 - 6;
  if ( !v3 )
  {
    v13 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v13 + 30) & 2) != 0 )
    {
      v11 = (*(_BYTE *)(v13 + 31) & 0x20) == 0;
      v12 = &gszMIN;
      result = (unsigned __int16 *)&gszRESUP;
LABEL_20:
      if ( v11 )
        return (unsigned __int16 *)v12;
      return result;
    }
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v10 + 30) & 1) != 0 )
    {
      v11 = (*(_BYTE *)(v10 + 31) & 1) == 0;
      v12 = &gszMAX;
      result = (unsigned __int16 *)&gszRESDOWN;
      goto LABEL_20;
    }
    return 0LL;
  }
  v5 = v4 - 11;
  if ( !v5 )
    return (unsigned __int16 *)&gszSCLOSE;
  v7 = v5 - 1;
  if ( !v7 )
    return (unsigned __int16 *)&gszHELP;
  v8 = v7 - 45;
  if ( !v8 )
    return (unsigned __int16 *)&gszRESDOWN;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      return (unsigned __int16 *)&gszSCLOSE;
    return 0LL;
  }
  return (unsigned __int16 *)&gszMIN;
}
