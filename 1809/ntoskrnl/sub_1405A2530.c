/*
 * XREFs of sub_1405A2530 @ 0x1405A2530
 * Callers:
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405A2530(_QWORD *a1, _QWORD *a2)
{
  char v2; // r9
  __int64 v3; // r8
  unsigned __int16 *v4; // rax
  char v5; // r10
  unsigned __int16 *v6; // rcx
  bool v7; // zf
  __int64 v8; // r9
  unsigned __int16 v9; // r11
  __int64 v10; // r8
  unsigned __int16 *v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int16 *v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  int v19; // edx
  int v20; // ecx

  v2 = *(_BYTE *)a1;
  v3 = a1[1];
  if ( *(_BYTE *)a1 == 2 )
    v4 = (unsigned __int16 *)(v3 + 16);
  else
    v4 = *(unsigned __int16 **)(v3 + 8);
  v5 = *(_BYTE *)a2;
  v6 = (unsigned __int16 *)(v3 + 2);
  v7 = v2 == 2;
  v8 = a2[1];
  if ( !v7 )
    v6 = (unsigned __int16 *)v3;
  v9 = *v6;
  if ( v5 == 2 )
    v10 = v8 + 16;
  else
    v10 = *(_QWORD *)(v8 + 8);
  v11 = (unsigned __int16 *)(v8 + 2);
  if ( v5 != 2 )
    v11 = (unsigned __int16 *)a2[1];
  v12 = (unsigned __int64)v9 >> 1;
  v13 = *v11;
  v14 = v12;
  v15 = v13 >> 1;
  if ( v12 > v15 )
    v14 = v15;
  v16 = &v4[v14];
  if ( v4 >= v16 )
  {
LABEL_15:
    v20 = v12 - v15;
  }
  else
  {
    v17 = v10 - (_QWORD)v4;
    while ( 1 )
    {
      v18 = *v4;
      v19 = *(unsigned __int16 *)((char *)v4 + v17);
      if ( v18 != v19 )
        break;
      if ( ++v4 >= v16 )
        goto LABEL_15;
    }
    v20 = v18 - v19;
  }
  if ( v20 > 0 )
    return 1LL;
  else
    return (unsigned int)(v20 >= 0) - 1;
}
