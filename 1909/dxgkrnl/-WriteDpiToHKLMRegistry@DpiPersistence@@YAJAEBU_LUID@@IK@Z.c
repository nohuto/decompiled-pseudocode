/*
 * XREFs of ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02851F0
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C012DAC0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C012D348 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C012D4B0 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToHKLMRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rbx
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int16 *v13; // [rsp+20h] [rbp-40h]
  struct _UNICODE_STRING v14; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v14, a4);
  if ( (int)v5 >= 0 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    *(_QWORD *)&v15.Length = 0LL;
    v15.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v15, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v13) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v15, &v14, v6, v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v11 + 24) = v5;
      WdLogEvent5_WdError(v11);
    }
  }
  operator delete[](v14.Buffer);
  return (unsigned int)v5;
}
