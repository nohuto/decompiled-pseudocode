/*
 * XREFs of MmAreMdlPagesCached @ 0x140140010
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014748C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmAreMdlPagesCached(_DWORD *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rdx

  v1 = (__int64 *)(a1 + 12);
  while ( 1 )
  {
    v2 = *v1;
    if ( (unsigned __int64)*v1 > 0xFFFFFFFFFLL
      || ((*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0
      || (*(_BYTE *)(48 * v2 - 0x57FFFFFFFDELL) & 0xC0) != 0x40 )
    {
      break;
    }
    if ( ++v1 >= (__int64 *)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                              + 12] )
      return 1LL;
  }
  return 0LL;
}
