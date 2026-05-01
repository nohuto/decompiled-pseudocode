/*
 * XREFs of RmCoreRpcSrvAcquireResourceSet @ 0x180009870
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x1800099C4 (-RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@P.c)
 *     RmpResourceLimitsAreLegal @ 0x180009C90 (RmpResourceLimitsAreLegal.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001A340 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001BA50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180038D4C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049094 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmCoreRpcSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS **a1,
        ExecutionModel *this,
        __int64 a3,
        const unsigned __int16 *a4,
        void *a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 *a10)
{
  __int64 v13; // rdx
  struct ExecutionModel::_ResourceSetInfo *v14; // r8
  struct ExecutionModel::IResourceSetCallback *v15; // rdi
  unsigned __int64 v16; // rsi
  int v17; // ebx
  bool v18; // cf
  unsigned int v19; // ebx
  bool v21; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v22[384]; // [rsp+70h] [rbp-1C8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v22);
  if ( (unsigned int)RmpResourceLimitsAreLegal(v13 + 40, 0LL) )
  {
    ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(this, (struct _RM_RESOURCE_SET_PROPERTIES *)v22, v14);
    v15 = (struct ExecutionModel::IResourceSetCallback *)operator new(
                                                           0x10uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
    if ( v15 )
    {
      *(_QWORD *)v15 = &ResourceSetCallbackThunk::`vftable';
      *((_DWORD *)v15 + 2) = 1;
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15 )
    {
      v16 = HamObjectIdGenerate(1LL);
      v17 = RmSrvAcquireResourceSet(
              *a1,
              (struct ExecutionModel::_ResourceSetInfo *)v22,
              v15,
              0LL,
              a4,
              a5,
              a7,
              a8,
              a9,
              v16,
              (struct _RM_ACTIVATOR *)a1,
              &v21);
      if ( v17 < 0 )
      {
        v19 = v17 & 0xEFFFFFFF;
      }
      else
      {
        v18 = v21;
        *a10 = v16;
        v19 = v18 ? 0x103 : 0;
      }
      (*(void (__fastcall **)(struct ExecutionModel::IResourceSetCallback *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v19;
}
