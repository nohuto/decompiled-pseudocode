/*
 * XREFs of ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180068F7C
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044904 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006A51C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180044DFC (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180069438 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerApplyProcessPolicy(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rdx
  _QWORD *v6; // rcx
  _BYTE *v7; // rdi
  struct _RM_CPU_SET_PROCESS *i; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rcx
  UINT32 v13; // r9d
  UINT32 cData; // r9d
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  NTSTATUS v17; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS *v19; // [rsp+60h] [rbp-A0h]
  UINT32 v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ch] [rbp-94h]
  int *v22; // [rsp+70h] [rbp-90h]
  UINT32 v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  __int16 *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  _BYTE *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  _BYTE v31[160]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (_QWORD *)((char *)a2 + 40);
  v4 = *((_QWORD *)a2 + 5);
  if ( *(_QWORD **)(v4 + 8) != v2 || (v6 = (_QWORD *)v2[1], (_QWORD *)*v6 != v2) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v2 = 0LL;
  v2[1] = 0LL;
  memset_0(v31, 0, sizeof(v31));
  v7 = 0LL;
  for ( i = (struct _RM_CPU_SET_PROCESS *)*((_QWORD *)a2 + 3);
        i != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24);
        i = *(struct _RM_CPU_SET_PROCESS **)i )
  {
    v9 = *((_QWORD *)i - 3);
    if ( *(_DWORD *)(v9 + 264) )
    {
      v10 = 20LL;
      v11 = v9 - (_QWORD)v31;
      v12 = v31;
      do
      {
        *v12 |= *(_QWORD *)((char *)v12 + v11 + 104);
        ++v12;
        --v10;
      }
      while ( v10 );
      v7 = v31;
    }
  }
  v17 = RmpSystemSetProcessAllowedCpuSets(*((HANDLE *)a2 + 2), v7);
  if ( v7 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v19 = &v17;
      v16 = *((_DWORD *)a2 + 14);
      v22 = &v16;
      v25 = &v15;
      v20 = v13;
      v23 = v13;
      v15 = 20;
      v26 = 2;
      v28 = v7;
      v29 = 160;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094402, 0LL, 0LL, 6u, &pData);
    }
  }
  else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v21 = 0;
    v24 = 0;
    v19 = &v17;
    v16 = *((_DWORD *)a2 + 14);
    v22 = &v16;
    v20 = cData;
    v23 = cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094375, 0LL, 0LL, cData, &pData);
  }
  if ( !*((_DWORD *)a2 + 15) )
    RmpCpuSetManagerDestroyProcess(a1, a2);
}
