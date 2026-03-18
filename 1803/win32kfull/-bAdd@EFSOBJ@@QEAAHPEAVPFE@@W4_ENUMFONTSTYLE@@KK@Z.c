/*
 * XREFs of ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C00CBC28
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C00CBDC8 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C00CBEF8 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C00CBA48 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 */

__int64 __fastcall EFSOBJ::bAdd(EFSOBJ *a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // r14d
  __int64 v10; // rdx
  char *v12; // rsi
  int v13; // r12d
  unsigned __int8 v14; // al
  _BYTE *v15; // rdi
  unsigned __int8 v16; // cl
  unsigned __int64 v17; // rsi
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+28h] [rbp-8h]
  int v22; // [rsp+68h] [rbp+38h] BYREF
  char v23; // [rsp+6Ch] [rbp+3Ch]
  unsigned __int8 v24; // [rsp+6Dh] [rbp+3Dh]
  __int16 v25; // [rsp+6Eh] [rbp+3Eh]

  v5 = *(_QWORD *)(a2 + 32);
  v6 = 0LL;
  v7 = a5;
  v20 = a2;
  v22 = a3;
  v10 = *(int *)(v5 + 40);
  v23 = 0;
  v24 = a5;
  v12 = (char *)(v5 + v10);
  v21 = v5 + v10 + 16;
  v13 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    v23 = 2;
    if ( a5 == 1 )
    {
      if ( (_DWORD)v10 )
        v14 = *v12;
      else
        v14 = *(_BYTE *)(v5 + 44);
      v24 = v14;
    }
  }
  EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v22, (struct PFEOBJ *)&v20);
  if ( v13 )
  {
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) )
      {
        v15 = v12 + 1;
        v16 = v12[1];
        if ( v16 != 1 )
        {
          v17 = v21;
          do
          {
            if ( v16 > 0xFDu )
              break;
            if ( (unsigned __int64)v15 >= v17 )
              break;
            v24 = v16;
            v22 = a3;
            v23 = 2;
            v25 = 0;
            EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v22, (struct PFEOBJ *)&v20);
            v16 = *++v15;
          }
          while ( *v15 != 1 );
        }
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 132) )
  {
    do
    {
      v19 = *(unsigned __int8 *)(v6 + a2 + 140);
      v25 = *(unsigned __int8 *)(v6 + a2 + 140);
      v22 = a3;
      v23 = 3;
      v24 = *((_BYTE *)gpfsTable + 196 * v19 + 128);
      EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v22, (struct PFEOBJ *)&v20);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a2 + 132) );
  }
  return 1LL;
}
