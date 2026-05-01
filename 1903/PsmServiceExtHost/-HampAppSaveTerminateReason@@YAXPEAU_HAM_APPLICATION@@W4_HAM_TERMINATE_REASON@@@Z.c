/*
 * XREFs of ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18000A9EC
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000E2C0 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x180007E50 (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampAppSaveTerminateReason(__int64 a1, int a2)
{
  const WCHAR *v3; // rdi
  __int16 v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+90h] [rbp+27h] BYREF

  if ( (*(_DWORD *)(a1 + 608) & 0x10000) == 0 )
  {
    v3 = (const WCHAR *)(a1 + 96);
    v5 = HampUtilSaveRegistryTerminateReason(
           (const unsigned __int16 *)(a1 + 96),
           (void *)(*(_QWORD *)(a1 + 88) + 228LL),
           a2);
    if ( v5 < 0 )
    {
      if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
      {
        v9 = 4LL;
        v8 = &v5;
        TlgCreateWsz(&v10, v3);
        TlgCreateSid(&pDesc, (const SID *)(*(_QWORD *)(a1 + 88) + 228LL));
        v6 = 0x1000000LL;
        v12.Ptr = (ULONGLONG)&v6;
        *(_QWORD *)&v12.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099651, 0LL, 0LL, 6u, &pData);
      }
    }
    else if ( dword_1800AB2C0 > 5u )
    {
      v9 = 4LL;
      v8 = &v5;
      v4 = *(_WORD *)(a1 + 608);
      v10.Ptr = (ULONGLONG)&v4;
      *(_QWORD *)&v10.Size = 2LL;
      TlgCreateWsz(&pDesc, v3);
      TlgCreateSid(&v12, (const SID *)(*(_QWORD *)(a1 + 88) + 228LL));
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009959B, 0LL, 0LL, 6u, &pData);
    }
  }
}
