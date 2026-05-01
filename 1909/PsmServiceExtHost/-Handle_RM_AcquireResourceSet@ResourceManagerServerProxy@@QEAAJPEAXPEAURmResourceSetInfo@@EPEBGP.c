/*
 * XREFs of ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x18006199C
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet @ 0x180061760 (RmtSrv_RM_AcquireResourceSet.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001096C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001CC90 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180048E58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x1800739EC (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
        ResourceManagerServerProxy *this,
        struct _RM_ACTIVATOR *a2,
        struct RmResourceSetInfo *a3,
        char a4,
        unsigned __int16 *a5,
        unsigned __int8 *Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10,
        unsigned int a11,
        int *a12,
        unsigned __int64 a13,
        unsigned __int64 *a14)
{
  struct ExecutionModel::_ResourceSetInfo *v18; // r8
  int v19; // edi
  unsigned __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rax
  struct _RM_SERVICE_GLOBALS *v23; // rcx
  unsigned __int8 v25; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v26[384]; // [rsp+70h] [rbp-1C8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v26);
  if ( !Sid || a7 >= 0xC && a7 == RtlLengthSid(Sid) && RtlValidSid(Sid) )
  {
    ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a3, (const struct RmResourceSetInfo *)v26, v18);
    v20 = HamObjectIdGenerate(1);
    if ( a4 )
    {
      v21 = operator new(0x20uLL);
      if ( v21 )
      {
        v22 = *((_QWORD *)this + 2);
        v21[1] = -1LL;
        *v21 = &ResourceSetCallback::`vftable';
        v21[2] = v22;
        *((_DWORD *)v21 + 6) = 1;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v21 )
      {
        v21[1] = v20;
        v23 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)this + 2);
        v25 = 0;
        v19 = RmSrvAcquireResourceSet(
                v23,
                (struct ExecutionModel::_ResourceSetInfo *)v26,
                (struct ExecutionModel::IResourceSetCallback *)v21,
                0LL,
                a5,
                Sid,
                a8,
                a9,
                a10,
                v20,
                a2,
                (bool *)((unsigned __int64)&v25 & -(__int64)(a12 != 0LL)));
        if ( v19 >= 0 )
        {
          if ( a12 )
            *a12 = v25;
          *a14 = v20;
          v19 = 0;
        }
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-805306127;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v19;
}
