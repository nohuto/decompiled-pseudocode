/*
 * XREFs of RtlFindNextClearRunUlong @ 0x140120C38
 * Callers:
 *     MiRescanPageFileBitmapPortion @ 0x1401209DC (MiRescanPageFileBitmapPortion.c)
 *     MiRescanPagefileBitmaps @ 0x1401881AC (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1402B7FCC (MiFindFreePageFileSpaceForward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned int *v9; // r10
  unsigned __int64 v10; // r14
  unsigned int v11; // r9d
  int v12; // r11d
  unsigned int v13; // r8d
  char v14; // dl
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // r8d
  int v19; // ecx
  char v20; // bp
  char v21; // dl
  __int64 v22; // rcx
  __int64 result; // rax
  unsigned int *v24; // rax

  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (unsigned __int64)(v6 - 1) >> 5;
  v9 = (unsigned int *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
  v10 = v7 + 4 * v8 - 4;
  if ( (v6 & 0x1F) == 0 )
    v10 = v7 + 4 * v8;
  v11 = *v9 | dword_140361C10[a2 & 0x1F];
  v12 = 0;
  do
  {
    while ( 1 )
    {
      if ( v11 == -1 )
        goto LABEL_8;
      v12 = 32 * (((__int64)v9 - v7) >> 2);
      if ( !v11 )
        break;
      v14 = -1;
      v15 = !_BitScanReverse64((unsigned __int64 *)&v16, v11);
      if ( !v15 )
        v14 = v16;
      if ( v14 != 31 )
      {
        v12 += v14 + 1;
        break;
      }
LABEL_8:
      v13 = 0;
      if ( (unsigned __int64)v9 >= v10 )
        goto LABEL_28;
      v11 = *++v9;
    }
    v17 = v12 & 0x1F;
    v18 = 0;
    v19 = v11 & ~dword_140361C10[v17];
    v11 = v19;
    if ( (unsigned __int64)v9 > v10 )
    {
LABEL_31:
      v20 = 1;
      if ( (v6 & 0x1F) == 0 )
        goto LABEL_24;
      v24 = v9 + 1;
      if ( v18 )
        v11 = *v24;
      else
        v24 = v9;
      v9 = v24;
      v20 = 1;
      v11 |= ~dword_140361C10[v6 & 0x1F];
LABEL_21:
      v21 = -1;
      v15 = !_BitScanForward64((unsigned __int64 *)&v22, v11);
      if ( !v15 )
        v21 = v22;
      v18 += v21;
      goto LABEL_24;
    }
    v20 = 0;
    if ( v19 )
      goto LABEL_21;
    while ( 1 )
    {
      v18 += 32;
      if ( v18 >= a4 && v18 - (unsigned int)v17 >= a4 )
        break;
      if ( v9 == (unsigned int *)v10 )
        goto LABEL_31;
      v11 = *++v9;
      if ( *v9 )
        goto LABEL_21;
    }
LABEL_24:
    v13 = v18 - v17;
    if ( v13 > a4 )
      v13 = a4;
    if ( v13 >= 0x20 )
      break;
    v13 = 0;
  }
  while ( !v20 );
LABEL_28:
  if ( v13 > a4 )
    v13 = a4;
  result = v13;
  *a5 = v12;
  return result;
}
