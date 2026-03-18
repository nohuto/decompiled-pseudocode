/*
 * XREFs of ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C028C380
 * Callers:
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C028C6A4 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 * Callees:
 *     ?IsValidAXESLISTW@@YA_NPEBXKJ@Z @ 0x1C028C280 (-IsValidAXESLISTW@@YA_NPEBXKJ@Z.c)
 *     ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x1C028C30C (-IsValidFONTSIM@@YA_NPEBXKJ@Z.c)
 *     ?IsValidString@@YA_NPEBXKJ@Z @ 0x1C028C520 (-IsValidString@@YA_NPEBXKJ@Z.c)
 */

char __fastcall IsValidIFIMETRICS(struct _IFIMETRICS *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  int *v4; // rcx
  int *v5; // rcx
  int *v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 dpCharSets; // rax
  unsigned __int64 v9; // r9
  _BYTE *v10; // rdx
  int v11; // ecx
  unsigned __int64 cjIfiExtra; // rdx
  ULONG v13; // eax
  __int64 dpwszStyleName; // rax
  __int64 v15; // rdi
  char *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx

  v2 = a2;
  if ( a2 >= 0xC0
    && a1->cjThis == a2
    && IsValidString(a1, a2, a1->dpwszFamilyName)
    && IsValidString(v4, v2, v4[3])
    && IsValidString(v5, v2, v5[4])
    && IsValidString(v6, v2, v6[5])
    && IsValidFONTSIM((char *)v7, v2, *(_DWORD *)(v7 + 24)) )
  {
    dpCharSets = a1->dpCharSets;
    v9 = (unsigned int)v2;
    if ( (_DWORD)dpCharSets )
    {
      if ( (dpCharSets & 0x80000000) == 0LL && dpCharSets < v2 )
      {
        v10 = (char *)a1 + dpCharSets;
        v11 = 0;
        while ( a1->dpCharSets + (__int64)v11 < (unsigned __int64)(unsigned int)v2 )
        {
          if ( *v10 != 1 )
          {
            ++v11;
            ++v10;
            if ( v11 < 16 )
              continue;
          }
          goto LABEL_15;
        }
      }
    }
    else
    {
LABEL_15:
      cjIfiExtra = a1->cjIfiExtra;
      if ( !(_DWORD)cjIfiExtra )
        return 1;
      if ( cjIfiExtra <= v2 - 192 )
      {
        v13 = 20;
        if ( (unsigned int)cjIfiExtra < 0x14 )
          v13 = a1->cjIfiExtra;
        if ( v13 == 4 )
          return 1;
        if ( v13 == 8
          || v13 == 12
          || (v13 == 16 || v13 == 20 && IsValidAXESLISTW((char *)a1, v2, a1[1].dpwszFaceName))
          && ((dpwszStyleName = a1[1].dpwszStyleName, !(_DWORD)dpwszStyleName)
           || (int)dpwszStyleName > 0
           && (unsigned int)dpwszStyleName < (unsigned int)v2
           && (v15 = (unsigned int)(v2 - dpwszStyleName),
               v16 = (char *)a1 + dpwszStyleName,
               (((_BYTE)a1 + (_BYTE)dpwszStyleName) & 3) == 0)
           && v16 + 8 <= &v16[v15]
           && (v17 = *((unsigned int *)v16 + 1), (unsigned int)v17 <= 0x10)
           && 4 * v17 + 8 < (unsigned __int64)(unsigned int)v15) )
        {
          v18 = a1[1].cjIfiExtra;
          if ( !(_DWORD)v18
            || (int)v18 > 0 && v18 < v9 && v9 > 0x18 && v18 < v9 - 24 && (((_BYTE)a1 + (_BYTE)v18) & 3) == 0 )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
