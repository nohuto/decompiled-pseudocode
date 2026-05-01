/*
 * XREFs of ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002F614
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18002E36C (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x18002F82C (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampAppSaveTerminateReason(__int64 a1, unsigned int a2)
{
  const WCHAR *v3; // rdi
  __int16 v4; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v5[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+90h] [rbp+27h] BYREF

  if ( (*(_DWORD *)(a1 + 608) & 0x80000) == 0 )
  {
    v3 = (const WCHAR *)(a1 + 96);
    v5[0] = HampUtilSaveRegistryTerminateReason(a1 + 96, *(_QWORD *)(a1 + 88) + 228LL, a2);
    if ( v5[0] < 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
      {
        v8 = 4LL;
        v7 = v5;
        TlgCreateWsz(&v9, v3);
        TlgCreateSid(&pDesc, (const SID *)(*(_QWORD *)(a1 + 88) + 228LL));
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B9D1, 0LL, 0LL, 5u, &pData);
      }
    }
    else if ( hProvider > 5u )
    {
      v8 = 4LL;
      v7 = v5;
      v4 = *(_DWORD *)(a1 + 608) >> 3;
      v9.Ptr = (ULONGLONG)&v4;
      *(_QWORD *)&v9.Size = 2LL;
      TlgCreateWsz(&pDesc, v3);
      TlgCreateSid(&v11, (const SID *)(*(_QWORD *)(a1 + 88) + 228LL));
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B97C, 0LL, 0LL, 6u, &pData);
    }
  }
}
