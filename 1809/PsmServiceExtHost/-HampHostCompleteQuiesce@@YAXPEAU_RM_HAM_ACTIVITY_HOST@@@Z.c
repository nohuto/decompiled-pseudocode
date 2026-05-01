/*
 * XREFs of ?HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C05C
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800102E0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampHostCompleteQuiesce(const WCHAR *a1)
{
  __int64 v2; // r9
  int v3; // r10d
  __int64 v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    TlgCreateWsz(&pDesc, a1 + 12);
    v2 = *((_QWORD *)a1 - 4);
    v9 = 0;
    v7 = &v4;
    v4 = v2;
    v8 = v3;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B4FF, 0LL, 0LL, 4u, &pData);
  }
  *((_QWORD *)a1 + 79) |= 0x400000000000uLL;
  RtlWakeAllConditionVariable(a1 + 328);
}
