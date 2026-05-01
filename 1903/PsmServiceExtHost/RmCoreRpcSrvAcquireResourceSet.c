/*
 * XREFs of RmCoreRpcSrvAcquireResourceSet @ 0x180010690
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180010800 (-RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@P.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001096C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     CempUtilValidateSid @ 0x180011044 (CempUtilValidateSid.c)
 *     RmpResourceLimitsAreLegal @ 0x18001A520 (RmpResourceLimitsAreLegal.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001CC90 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180048EB0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmCoreRpcSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS **a1,
        ExecutionModel *this,
        __int64 a3,
        const unsigned __int16 *a4,
        PSID Sid,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int64 *a10)
{
  __int64 v13; // rdx
  int v14; // ebx
  struct ExecutionModel::_ResourceSetInfo *v15; // r8
  struct ExecutionModel::IResourceSetCallback *v16; // rdi
  unsigned __int64 v17; // rsi
  int v18; // ebx
  bool v19; // cf
  unsigned int v20; // ebx
  bool v22; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v23[384]; // [rsp+70h] [rbp-1C8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v23);
  if ( (unsigned int)RmpResourceLimitsAreLegal(v13 + 40, 0LL) )
  {
    v14 = CempUtilValidateSid(Sid);
    if ( v14 < 0 )
    {
      return (unsigned int)(v14 + 4);
    }
    else
    {
      ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(this, (struct _RM_RESOURCE_SET_PROPERTIES *)v23, v15);
      v16 = (struct ExecutionModel::IResourceSetCallback *)operator new(
                                                             0x10uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
      if ( v16 )
      {
        *(_QWORD *)v16 = &ResourceSetCallbackThunk::`vftable';
        *((_DWORD *)v16 + 2) = 1;
      }
      else
      {
        v16 = 0LL;
      }
      if ( v16 )
      {
        v17 = HamObjectIdGenerate(1LL);
        v18 = RmSrvAcquireResourceSet(
                *a1,
                (struct ExecutionModel::_ResourceSetInfo *)v23,
                v16,
                0LL,
                a4,
                Sid,
                a7,
                a8,
                a9,
                v17,
                (struct _RM_ACTIVATOR *)a1,
                &v22);
        if ( v18 < 0 )
        {
          v20 = v18 & 0xEFFFFFFF;
        }
        else
        {
          v19 = v22;
          *a10 = v17;
          v20 = v19 ? 0x103 : 0;
        }
        (*(void (__fastcall **)(struct ExecutionModel::IResourceSetCallback *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v20;
}
