/*
 * XREFs of ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003113C
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800021F0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000331C (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18002FDD8 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180016480 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x1800312E8 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

__int64 __fastcall RmpActivityHostFindByPsmId(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v14; // [rsp+30h] [rbp-48h]

  v6 = 0LL;
  v14 = utl::hash<_RM_PSM_HOST_INFO>::operator()((__int64)a1, (unsigned __int64)a2);
  v7 = v14;
  v8 = -1073741275;
  RtlAcquireSRWLockShared((char *)a1 + 32);
  while ( 1 )
  {
    v9 = *((_DWORD *)a1 + 609);
    v10 = v9 & 0x1F;
    v11 = v7 & (-1LL << (*((_BYTE *)a1 + 2436) & 0x1F));
    if ( v6 )
      goto LABEL_5;
    if ( v9 < 0x20 )
      break;
    v10 = (HIBYTE(v11)
         + 37
         * (BYTE6(v11)
          + 37
          * (BYTE5(v11)
           + 37
           * (BYTE4(v11)
            + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))) & ((v9 >> 5) - 1);
    v6 = *((_QWORD *)a1 + 305) + 8 * v10;
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v11 == ((-1LL << (*((_BYTE *)a1 + 2436) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
        goto LABEL_7;
    }
    v6 = 0LL;
LABEL_7:
    if ( !v6 )
      break;
    v12 = v6 - 1336;
    v7 = v14;
    if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v10, a2, v6 - 1336 + 88) )
    {
      v8 = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_ACTIVITY_HOST *)v12;
      break;
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 32);
  return v8;
}
