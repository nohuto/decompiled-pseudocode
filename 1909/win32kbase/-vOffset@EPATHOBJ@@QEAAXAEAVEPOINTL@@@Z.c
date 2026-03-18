/*
 * XREFs of ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C00AD880
 * Callers:
 *     <none>
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0049D80 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 */

void __fastcall EPATHOBJ::vOffset(EPATHOBJ *this, struct _POINTL *a2)
{
  _DWORD *v3; // rax
  int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  __int64 *i; // r8
  __int64 *j; // rdx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  int *v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 1);
  v5 = 16 * a2->y;
  v6 = 16 * a2->x;
  v3[12] += v6;
  v3[14] += v6;
  v3[13] += v5;
  v3[15] += v5;
  v7 = v5 >> 4;
  if ( (*(_DWORD *)this & 4) == 0 )
    v7 = v5;
  v8 = v6 >> 4;
  if ( (*(_DWORD *)this & 4) == 0 )
    v8 = v6;
  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
  {
    for ( j = i + 3; j < &i[*((unsigned int *)i + 5) + 3]; ++j )
    {
      *(_DWORD *)j += v8;
      *((_DWORD *)j + 1) += v7;
    }
  }
  if ( *((_DWORD *)this + 14) )
  {
    v12 = 0;
    do
    {
      v13 = v12++;
      v14 = (_DWORD *)(*((_QWORD *)this + 6) + 16 * v13);
      *v14 += a2->x;
      v14[2] += a2->x;
      v14[1] += a2->y;
      v14[3] += a2->y;
    }
    while ( v12 < *((_DWORD *)this + 14) );
  }
  if ( *((_DWORD *)this + 15) )
  {
    v15 = 0;
    do
    {
      v16 = v15++;
      v17 = (_DWORD *)(*((_QWORD *)this + 8) + 16 * v16);
      *v17 += a2->x;
      v17[2] += a2->x;
      v17[1] += a2->y;
      v17[3] += a2->y;
    }
    while ( v15 < *((_DWORD *)this + 15) );
  }
  v11 = *((_QWORD *)this + 2);
  if ( v11 || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) )
  {
    v18 = (int *)*((_QWORD *)this + 2);
    if ( v11 )
      RGNOBJ::bOffset(&v18, a2);
    v18 = (int *)*((_QWORD *)this + 3);
    if ( v18 )
      RGNOBJ::bOffset(&v18, a2);
    v18 = (int *)*((_QWORD *)this + 4);
    if ( v18 )
      RGNOBJ::bOffset(&v18, a2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v18 = (int *)*((_QWORD *)this + 5);
    RGNOBJ::bOffset(&v18, a2);
  }
}
