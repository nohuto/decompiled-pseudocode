/*
 * XREFs of ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEB7C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00B9710 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z @ 0x1C00AE154 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0135900 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToHKLMRegistry(struct _LUID *this, const struct _LUID *a2, int a3)
{
  __int64 v4; // rbx
  const struct _UNICODE_STRING *v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 *v10; // [rsp+20h] [rbp-48h]
  unsigned int v11; // [rsp+28h] [rbp-40h]
  struct _UNICODE_STRING v12; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v4) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, 1, &v12);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v13, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v10) = a3;
    v6 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v13, &v12, v5, v10, v11);
    v4 = v6;
    if ( v6 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = v4;
      WdLogEvent5_WdError(v8);
    }
  }
  operator delete[](v12.Buffer);
  return (unsigned int)v4;
}
