/*
 * XREFs of ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011CE30
 * Callers:
 *     <none>
 * Callees:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011CEC4 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D184 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140301D2C (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  switch ( a3 )
  {
    case 1u:
      SMKM_STORE<SM_TRAITS>::SmStCleanup(a2);
      ExFreePoolWithTag((PVOID)a2, 0);
      break;
    case 7u:
      *(_BYTE *)(a2 + 6021) |= 2u;
      break;
    case 2u:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
      break;
    case 4u:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeEmpty();
      break;
  }
  result = 0LL;
  if ( *(_QWORD *)(a1 + 1848) )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 1848))(a1, a2, a3);
  return result;
}
