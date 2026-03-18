/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z @ 0x1C00AE154
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z @ 0x1C00AE7D4 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEB7C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEC28 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C00AE24C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C013061C (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::AllocateMonitorSetIdFromAdapterSource(
        struct _LUID *this,
        const struct _LUID *a2,
        char a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // esi
  wchar_t *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rax
  int MonitorSetId; // eax
  struct _UNICODE_STRING *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  int appended; // eax
  __int64 v18; // rax
  bool *v19; // [rsp+28h] [rbp-20h]
  char v20; // [rsp+68h] [rbp+20h] BYREF

  v5 = (unsigned int)a2;
  a4->Length = 0;
  v8 = (wchar_t *)operator new(0x8002uLL, 0x63644356u, PagedPool);
  a4->Buffer = v8;
  if ( v8 )
  {
    a4->MaximumLength = -32766;
    LOBYTE(v10) = a3;
    v20 = 0;
    MonitorSetId = DpiPersistence::CreateMonitorSetId(
                     this,
                     (const struct _LUID *)v5,
                     v10,
                     (bool)a4,
                     (struct _UNICODE_STRING *)&v20,
                     v19);
    v16 = MonitorSetId;
    if ( v20 )
    {
      return 3221225659LL;
    }
    else
    {
      if ( MonitorSetId < 0
        || (appended = DpiPersistence::SortMonitorSetIdAndAppendHash(a4, v14), v16 = appended, appended < 0) )
      {
        v18 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v18 + 24) = v16;
        WdLogEvent5_WdError(v18);
      }
      return (unsigned int)v16;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v11 + 24) = 32770LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
}
