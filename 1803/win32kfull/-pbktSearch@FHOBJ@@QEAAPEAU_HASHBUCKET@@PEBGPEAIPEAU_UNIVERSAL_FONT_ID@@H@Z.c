/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00CC784
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C003F740 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C0040950 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C00CBDC8 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C00CC000 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C00CC3AC (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0119AA8 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02774BC (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C00CB090 (-iHash@@YAIPEBGI@Z.c)
 */

struct _HASHBUCKET *__fastcall FHOBJ::pbktSearch(
        FHOBJ *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  struct _UNIVERSAL_FONT_ID *v5; // r11
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 *v13; // rcx
  int v14; // eax
  BOOL v15; // edx
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // rdx

  v5 = a4;
  v9 = 0LL;
  if ( a2 )
  {
    v11 = *((_QWORD *)this + 1);
    v12 = iHash(a2, *(_DWORD *)(v11 + 8));
    goto LABEL_6;
  }
  if ( a4 )
  {
    v10 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v10 = *((_DWORD *)a4 + 1);
    v11 = *((_QWORD *)this + 1);
    v12 = v10 % *(_DWORD *)(v11 + 8);
LABEL_6:
    if ( a3 )
    {
      *a3 = v12;
      v11 = *((_QWORD *)this + 1);
    }
    v13 = *(__int64 **)(v11 + 8LL * v12 + 40);
    if ( !v13 )
      return (struct _HASHBUCKET *)v9;
    while ( 1 )
    {
      if ( v5 )
      {
        v14 = *((_DWORD *)v13 + 15);
        if ( v14 == 1 && *(_DWORD *)v5 == 1 )
        {
          v15 = *((_DWORD *)v13 + 16) == *((_DWORD *)v5 + 1);
        }
        else
        {
          if ( v14 == *(_DWORD *)v5 )
            return (struct _HASHBUCKET *)v13;
          v15 = 0;
        }
        if ( v15 )
          return (struct _HASHBUCKET *)v13;
      }
      else if ( a2 && (!a5 || (v13[4] & 2) != 0) )
      {
        v17 = *a2;
        v18 = a2;
        if ( *a2 == *((_WORD *)v13 + 30) )
        {
          while ( v17 )
          {
            v17 = *++v18;
            if ( *v18 != *(unsigned __int16 *)((char *)v18 + (char *)v13 - (char *)a2 + 60) )
              goto LABEL_14;
          }
          if ( a5 || (v13[4] & 2) == 0 )
            return (struct _HASHBUCKET *)v13;
          v9 = v13;
        }
      }
LABEL_14:
      v13 = (__int64 *)*v13;
      if ( !v13 )
        return (struct _HASHBUCKET *)v9;
    }
  }
  return 0LL;
}
