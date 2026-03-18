/*
 * XREFs of ExpLicensingDescriptorCompare @ 0x1406A30B0
 * Callers:
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicensingDescriptorCompare(_QWORD *a1, _QWORD *a2)
{
  char v2; // r9
  __int64 v3; // r8
  char *v4; // rax
  unsigned __int16 *v5; // rcx
  unsigned __int16 v6; // r9
  unsigned __int16 *v7; // rcx
  unsigned __int16 *v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rcx
  char *v12; // r9
  signed __int64 v13; // r8
  unsigned __int16 v14; // dx
  int v15; // r10d

  v2 = *(_BYTE *)a1;
  v3 = a1[1];
  if ( *(_BYTE *)a1 == 2 )
    v4 = (char *)(v3 + 16);
  else
    v4 = *(char **)(v3 + 8);
  v5 = (unsigned __int16 *)(v3 + 2);
  if ( v2 != 2 )
    v5 = (unsigned __int16 *)v3;
  v6 = *v5;
  v7 = (unsigned __int16 *)a2[1];
  if ( *(_BYTE *)a2 == 2 )
  {
    v8 = v7 + 8;
    ++v7;
  }
  else
  {
    v8 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
  }
  v9 = (unsigned __int64)*v7 >> 1;
  v10 = (unsigned __int64)v6 >> 1;
  v11 = v10;
  if ( v10 > v9 )
    v11 = v9;
  v12 = &v4[2 * v11];
  if ( v4 >= v12 )
  {
LABEL_13:
    v15 = v10 - v9;
  }
  else
  {
    v13 = (char *)v8 - v4;
    while ( 1 )
    {
      v14 = *(_WORD *)&v4[v13];
      if ( *(_WORD *)v4 != v14 )
        break;
      v4 += 2;
      if ( v4 >= v12 )
        goto LABEL_13;
    }
    v15 = *(unsigned __int16 *)v4 - v14;
  }
  if ( v15 > 0 )
    return 1LL;
  else
    return (unsigned int)(v15 >= 0) - 1;
}
