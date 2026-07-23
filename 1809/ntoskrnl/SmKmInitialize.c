/*
 * XREFs of SmKmInitialize @ 0x140757CE0
 * Callers:
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E328 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 (__fastcall *__fastcall SmKmInitialize(__int64 a1))(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, unsigned int); // rax

  memset((void *)a1, 0, 0x1B8uLL);
  *(_QWORD *)(a1 + 416) = 0LL;
  result = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  *(_DWORD *)(a1 + 432) = -1;
  *(_QWORD *)(a1 + 256) = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  return result;
}
