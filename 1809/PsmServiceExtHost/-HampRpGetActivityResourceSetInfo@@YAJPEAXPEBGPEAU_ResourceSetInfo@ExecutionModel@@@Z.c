/*
 * XREFs of ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001A1D8
 * Callers:
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800037DC (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019E60 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18004206C (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x18006B53C (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180018100 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001A340 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampRpGetActivityResourceSetInfo(
        void *a1,
        const unsigned __int16 *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  _WORD *v5; // rdx
  unsigned int v6; // ebx
  _OWORD *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rcx
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v25[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v26[128]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[40]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v28; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+240h] [rbp+140h] BYREF
  int *v30; // [rsp+260h] [rbp+160h]
  __int64 v31; // [rsp+268h] [rbp+168h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v27);
  v6 = 0;
  if ( !*v5 )
    goto LABEL_5;
  v24 = (*(__int64 (__fastcall **)(void *, _WORD *, _QWORD, _DWORD *))(*(_QWORD *)a1 + 24LL))(a1, v5, 0LL, v25);
  if ( v24 < 0 )
  {
    if ( hProvider > 4u )
    {
      v31 = 4LL;
      v30 = &v24;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C20D, 0LL, 0LL, 3u, &pData);
    }
    return (unsigned int)-1073741823;
  }
  v24 = (*(__int64 (__fastcall **)(void *, _QWORD, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v25[0], v26);
  if ( v24 < 0 )
  {
    if ( hProvider > 4u )
    {
      v31 = 4LL;
      v30 = &v24;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C244, 0LL, 0LL, 3u, &pData);
    }
    return (unsigned int)-1073741823;
  }
  ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo();
LABEL_5:
  v28 |= 0x20u;
  v7 = v27;
  v8 = 2LL;
  do
  {
    v9 = v7[1];
    *(_OWORD *)a3 = *v7;
    v10 = v7[2];
    *((_OWORD *)a3 + 1) = v9;
    v11 = v7[3];
    *((_OWORD *)a3 + 2) = v10;
    v12 = v7[4];
    *((_OWORD *)a3 + 3) = v11;
    v13 = v7[5];
    *((_OWORD *)a3 + 4) = v12;
    v14 = v7[6];
    *((_OWORD *)a3 + 5) = v13;
    v15 = v7[7];
    v7 += 8;
    *((_OWORD *)a3 + 6) = v14;
    a3 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a3 + 128);
    *((_OWORD *)a3 - 1) = v15;
    --v8;
  }
  while ( v8 );
  v16 = v7[1];
  *(_OWORD *)a3 = *v7;
  v17 = v7[2];
  *((_OWORD *)a3 + 1) = v16;
  v18 = v7[3];
  *((_OWORD *)a3 + 2) = v17;
  v19 = v7[4];
  *((_OWORD *)a3 + 3) = v18;
  v20 = v7[5];
  *((_OWORD *)a3 + 4) = v19;
  v21 = v7[6];
  v22 = *((_QWORD *)v7 + 14);
  *((_OWORD *)a3 + 5) = v20;
  *((_OWORD *)a3 + 6) = v21;
  *((_QWORD *)a3 + 14) = v22;
  return v6;
}
