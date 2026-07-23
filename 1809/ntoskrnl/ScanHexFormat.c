/*
 * XREFs of ScanHexFormat @ 0x14059B680
 * Callers:
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 * Callees:
 *     <none>
 */

__int64 ScanHexFormat(unsigned __int16 *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned int v3; // esi
  _QWORD *v4; // rbx
  unsigned __int16 v6; // ax
  int v7; // edi
  int v8; // eax
  unsigned __int16 v9; // r9
  unsigned __int16 *v10; // r11
  int v11; // r8d
  unsigned __int16 v12; // r9
  int v13; // r8d
  int v14; // r8d
  int *v15; // rax
  __int64 v17; // [rsp+0h] [rbp-20h] BYREF

  v3 = 0;
  v4 = &v17 + 7;
  while ( 1 )
  {
LABEL_2:
    v6 = *a3;
    if ( !*a3 )
    {
      if ( a2 && *a1 )
        return (unsigned int)-1;
      return v3;
    }
    if ( v6 == 37 )
    {
      v6 = *++a3;
      if ( *a3 != 37 )
        break;
    }
    if ( !a2 || *a1 != v6 )
      return 0xFFFFFFFFLL;
    ++a1;
    --a2;
    ++a3;
  }
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *a3;
      v10 = a3;
      if ( (unsigned __int16)(*a3 - 48) <= 9u )
      {
        v8 = v9 + 10 * v8 - 48;
        goto LABEL_8;
      }
      if ( v9 != 108 )
        break;
      ++a3;
      ++v7;
    }
    if ( ((v9 - 88) & 0xFFDF) == 0 )
      break;
LABEL_8:
    ++a3;
  }
  v11 = 0;
  if ( !v8 )
  {
LABEL_16:
    v15 = (int *)v4[1];
    ++v4;
    if ( v7 )
      *v15 = v11;
    else
      *(_WORD *)v15 = v11;
    ++v3;
    a3 = v10 + 1;
    goto LABEL_2;
  }
  while ( 1 )
  {
    --v8;
    if ( !a2 )
      return 0xFFFFFFFFLL;
    v12 = *a1;
    v13 = 16 * v11;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
    {
      if ( (unsigned __int16)(v12 - 97) > 5u )
      {
        if ( (unsigned __int16)(v12 - 65) > 5u )
          return 0xFFFFFFFFLL;
        v14 = v13 - 55;
      }
      else
      {
        v14 = v13 - 87;
      }
    }
    else
    {
      v14 = v13 - 48;
    }
    ++a1;
    v11 = v12 + v14;
    --a2;
    if ( !v8 )
      goto LABEL_16;
  }
}
