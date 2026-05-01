/*
 * XREFs of ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800451BC
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180045130 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180037910 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800379A8 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180045318 (-RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048E40 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpCpuSetManagerApplyWorkloadAllowedMasks(
        struct _RM_CPU_SET_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // r14d
  struct _RM_OBJECT_HEADER *Next; // rax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int i; // ebx
  const struct _TlgProvider_t *v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rbx
  __int64 v13; // r11
  _QWORD *v14; // r9
  char *v15; // rdi
  __int16 v16; // dx
  const struct _TlgProvider_t *v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  int v19; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-45h] BYREF
  __int16 v21; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  int *v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  unsigned int *v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int16 *v27; // [rsp+88h] [rbp+7h]
  __int64 v28; // [rsp+90h] [rbp+Fh]
  char *v29; // [rsp+98h] [rbp+17h]
  __int64 v30; // [rsp+A0h] [rbp+1Fh]

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
      v11 = *((_DWORD *)Next + 67);
      if ( v11 )
      {
        v5 |= v11;
        do
        {
          _BitScanForward((unsigned int *)&v12, v11);
          v13 = 20LL;
          v14 = (_QWORD *)((char *)a1 + 160 * v12 + 408);
          do
          {
            *v14 |= *(_QWORD *)((char *)v14 + (struct _RM_OBJECT_HEADER *)((char *)Next - 160 * v12) - a1 - 304);
            ++v14;
            --v13;
          }
          while ( v13 );
          v11 &= ~(1 << v12);
        }
        while ( v11 );
      }
      RmpObjectRelease(Next);
    }
    RtlReleaseSRWLockShared(pData.Ptr + 16);
    v7 = 0;
    v8 = 0;
    for ( i = 0; i < 2; v8 = i )
    {
      if ( v7 )
      {
        if ( _bittest(&v5, v8) )
        {
          v15 = (char *)a1 + 160 * v8 + 408;
          v19 = RmpSystemSetWorkloadAllowedCpuSets(v15, i);
          if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
          {
            v24 = 4LL;
            v23 = &v19;
            v25 = &v20;
            v21 = v16 + 19;
            v27 = &v21;
            v20 = i;
            v26 = 4LL;
            v28 = 2LL;
            v29 = v15;
            v30 = 160LL;
            TlgWrite(v17, &unk_180086843, 0LL, 0LL, 6u, &pData);
          }
        }
        else
        {
          v19 = RmpSystemSetWorkloadAllowedCpuSets(0LL, i);
          if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
          {
            v24 = 4LL;
            v23 = &v19;
            v25 = &v20;
            v20 = i;
            v26 = 4LL;
            TlgWrite(v10, &unk_1800866F4, 0LL, 0LL, 4u, &pData);
          }
        }
        if ( v19 < 0 && dword_18009B0B0 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
          {
            v24 = 4LL;
            v23 = &v19;
            v25 = &v20;
            v20 = i;
            v26 = 4LL;
            TlgWrite(v18, &unk_1800865F5, 0LL, 0LL, 4u, &pData);
          }
        }
      }
      v7 = ++i;
    }
  }
}
