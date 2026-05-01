/*
 * XREFs of ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800634F8
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180063C40 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800390E4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18006365C (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckAndUpdateGpuInterference(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v2; // r9d
  __int64 v4; // rax
  int IsGpuInterfering; // edi
  __int64 v6; // rax
  unsigned __int8 v8[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v2 = *((_DWORD *)a1 + 296);
  if ( (v2 & 1) != 0 )
  {
    if ( !a2 )
    {
      if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v4 = *((_QWORD *)a1 + 4);
        v13 = 0;
        v9 = v4;
        v11 = &v9;
        v12 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087D60, 0LL, 0LL, 3u, &pData);
        v2 = *((_DWORD *)a1 + 296);
      }
      *((_DWORD *)a1 + 296) = v2 & 0xFFFFFFFE;
    }
LABEL_13:
    IsGpuInterfering = 0;
    goto LABEL_14;
  }
  IsGpuInterfering = RmpActivityHostIsGpuInterfering(a1, v8);
  if ( IsGpuInterfering >= 0 )
  {
    if ( v8[0] )
    {
      if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v6 = *((_QWORD *)a1 + 4);
        v13 = 0;
        v9 = v6;
        v11 = &v9;
        v12 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087D33, 0LL, 0LL, 3u, &pData);
      }
      *((_DWORD *)a1 + 296) |= 1u;
    }
    goto LABEL_13;
  }
LABEL_14:
  RmpActivityHostCheckQueueWork(a1);
  return (unsigned int)IsGpuInterfering;
}
