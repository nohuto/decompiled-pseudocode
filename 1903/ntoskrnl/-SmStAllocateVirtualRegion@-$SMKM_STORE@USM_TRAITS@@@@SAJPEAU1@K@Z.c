/*
 * XREFs of ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140147E38
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140147CB0 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401481BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 6216);
  v3 = a2;
  if ( *(_QWORD *)(v2 + 8LL * a2) )
    return 0LL;
  v6[0] = 0LL;
  v4 = *(unsigned int *)(a1 + 6208);
  v7 = 0LL;
  v8 = 0LL;
  v6[1] = v4;
  result = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 2LL, v6);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v8;
    if ( (int)v8 >= 0 )
    {
      *(_QWORD *)(v2 + 8 * v3) = *((_QWORD *)&v7 + 1);
      return 0LL;
    }
  }
  return result;
}
