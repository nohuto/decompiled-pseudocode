/*
 * XREFs of ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044990
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044904 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180044AF0 (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180044B68 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180044BD0 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048ABC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall RmpCpuSetManagerApplyWorkloadAllowedMasks(
        struct _RM_CPU_SET_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // r15d
  struct _RM_OBJECT_HEADER *Next; // rax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // r11
  _QWORD *v12; // r9
  __int16 v13; // dx
  int v14; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-45h] BYREF
  __int16 v16; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  int *v18; // [rsp+68h] [rbp-19h]
  __int64 v19; // [rsp+70h] [rbp-11h]
  unsigned int *v20; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  __int16 *v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  char *v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+1Fh]

  if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(a1, a2, a3, a4) )
  {
    memset_0((char *)a1 + 408, 0, 0x140uLL);
    v5 = 0;
    RmpObjectTableEnumerationBegin(
      (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
      if ( !Next )
        break;
      v9 = *((_DWORD *)Next + 67);
      if ( v9 )
      {
        v5 |= v9;
        do
        {
          _BitScanForward((unsigned int *)&v10, v9);
          v11 = 20LL;
          v12 = (_QWORD *)((char *)a1 + 160 * v10 + 408);
          do
          {
            *v12 |= *(_QWORD *)((char *)v12 + (struct _RM_OBJECT_HEADER *)((char *)Next - 160 * v10) - a1 - 304);
            ++v12;
            --v11;
          }
          while ( v11 );
          v9 &= ~(1 << v10);
        }
        while ( v9 );
      }
      RmpObjectRelease((char *)Next);
    }
    RtlReleaseSRWLockShared(pData.Ptr + 16);
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v8 )
      {
        if ( _bittest(&v5, v8) )
        {
          v14 = RmpSystemSetWorkloadAllowedCpuSets((char *)a1 + 160 * v8 + 408, v7);
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v19 = 4LL;
            v18 = &v14;
            v20 = &v15;
            v16 = v13 + 19;
            v22 = &v16;
            v15 = v7;
            v21 = 4LL;
            v23 = 2LL;
            v24 = (char *)a1 + 160 * v8 + 408;
            v25 = 160LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094600, 0LL, 0LL, 6u, &pData);
          }
        }
        else
        {
          v14 = RmpSystemSetWorkloadAllowedCpuSets(0LL, v7);
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v19 = 4LL;
            v18 = &v14;
            v20 = &v15;
            v15 = v7;
            v21 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800944B1, 0LL, 0LL, 4u, &pData);
          }
        }
        if ( v14 < 0 && hProvider > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v19 = 4LL;
            v18 = &v14;
            v20 = &v15;
            v15 = v7;
            v21 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800943B2, 0LL, 0LL, 4u, &pData);
          }
        }
      }
      v7 = v8 + 1;
      v8 = v7;
    }
    while ( v7 < 2 );
  }
}
