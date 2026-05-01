/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180062480
 * Callers:
 *     <none>
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x180009C90 (RmpResourceLimitsAreLegal.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180017F54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180017FCC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FLAGS@@@Z @ 0x180055BB4 (-RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FL.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSet *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  int v6; // ebx
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r10d
  int v14; // r9d
  int v15; // r11d
  __int64 v16; // rax
  unsigned int v17; // edx
  int v19; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20; // [rsp+38h] [rbp-51h] BYREF
  __int64 v21; // [rsp+40h] [rbp-49h] BYREF
  __int64 v22; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+7Ch] [rbp-Dh]
  __int64 *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]
  __int64 *v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+9Ch] [rbp+13h]
  __int64 *v33; // [rsp+A0h] [rbp+17h]
  int v34; // [rsp+A8h] [rbp+1Fh]
  int v35; // [rsp+ACh] [rbp+23h]

  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 152LL) + 508LL);
  if ( !a3 || (v20 = 96LL, RmpResourceLimitsAreLegal((__int64)a3, &v20)) )
  {
    RmpAcquireGlobalLock();
    if ( *((_DWORD *)this + 350) )
    {
      if ( !a2 || RmpImportanceIsValidForConfiguration(*(_DWORD *)a2, v6) )
      {
        if ( a3 )
        {
          v8 = *((_DWORD *)this + 375);
          v9 = *((_DWORD *)a3 + 12);
          if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
          {
            v10 = *((_QWORD *)this + 234);
            v26 = 0;
            v29 = 0;
            v32 = 0;
            v35 = 0;
            v22 = v10;
            v24 = &v22;
            v27 = (__int64 *)&v19;
            v30 = &v20;
            v21 = *(_QWORD *)a3;
            v33 = &v21;
            v25 = 8;
            v19 = v8;
            v28 = 4;
            LODWORD(v20) = v9;
            v31 = 4;
            v34 = 8;
            TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800877B1, 0LL, 0LL, 6u, &pData);
          }
          v11 = *(_QWORD *)a3;
          if ( (*(_QWORD *)a3 & 0x20) != 0 )
          {
            v12 = v9 & 3;
            if ( (v8 & 3) != v12 )
            {
              *((_DWORD *)this + 375) &= 0xFFFFFFFC;
              *((_DWORD *)this + 375) |= v12;
              v11 = *(_QWORD *)a3;
            }
          }
          if ( (v11 & 0x40) != 0 && (((unsigned __int8)v8 ^ (unsigned __int8)v9) & 8) != 0 )
          {
            *((_DWORD *)this + 375) &= ~8u;
            *((_DWORD *)this + 375) |= v9 & 8;
          }
        }
        if ( a2 && *(_DWORD *)a2 != *((_DWORD *)this + 368) )
        {
          v13 = *(_DWORD *)a2;
          if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
          {
            v16 = *((_QWORD *)this + 234);
            v26 = 0;
            v29 = 0;
            v32 = 0;
            v21 = v16;
            v24 = &v21;
            v27 = &v20;
            v30 = (__int64 *)&v19;
            v25 = 8;
            LODWORD(v20) = v15;
            v28 = 4;
            v19 = v14;
            v31 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087758, 0LL, 0LL, 5u, &pData);
            v13 = *(_DWORD *)a2;
          }
          *((_DWORD *)this + 368) = v13;
          if ( (*(_WORD *)a2 & 0x100) != 0 )
            *((_DWORD *)this + 363) &= ~8u;
          ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*((ExecutionModel::ResourceManager **)this
                                                                                     + 3));
          v17 = 2;
          if ( !*((_BYTE *)this + 12) )
            v17 = 1;
          RmpActivityHostResourceSetsChanged(*((struct _RM_ACTIVITY_HOST **)this + 180), v17);
        }
        if ( *((_BYTE *)this + 12) )
          RmpActivityHostComputeAndApplyEnforcementSettings(*((struct _RM_ACTIVITY_HOST **)this + 180));
        v7 = 0x10000000;
      }
      else
      {
        v7 = -805306129;
      }
    }
    else
    {
      v7 = -805305819;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    return (unsigned int)-805306128;
  }
  return v7;
}
