/*
 * XREFs of ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C012D4B0
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C012D610 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02851F0 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02852BC (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C012D944 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDwordToParticularRegValue(
        struct _UNICODE_STRING *this,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct _UNICODE_STRING *a4,
        const unsigned __int16 *ValueData)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  HANDLE v12; // r8
  int v13; // eax
  WCHAR *v14; // rdx
  int v15; // eax
  NTSTATUS v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-18h] BYREF
  PCWSTR Path; // [rsp+40h] [rbp-10h] BYREF
  const struct _UNICODE_STRING *v25; // [rsp+88h] [rbp+38h] BYREF

  v25 = a4;
  Handle = 0LL;
  KeyHandle = 0LL;
  Path = 0LL;
  v7 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, this, 0LL);
  v11 = v7;
  if ( v7 >= 0 )
  {
    v12 = Handle;
    if ( !Handle )
    {
      v18 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v18 + 24) = 599LL;
      WdLogEvent5_WdAssertion(v18);
      v12 = Handle;
    }
    v13 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v12, a2, (unsigned int *)&v25);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v14 = (WCHAR *)KeyHandle;
      if ( !KeyHandle )
      {
        v19 = WdLogNewEntry5_WdAssertion(v9, 0LL);
        *(_QWORD *)(v19 + 24) = 614LL;
        WdLogEvent5_WdAssertion(v19);
        v14 = (WCHAR *)KeyHandle;
      }
      if ( !a3->Length )
      {
LABEL_11:
        v16 = RtlWriteRegistryValue(0x40000000u, v14, L"DpiValue", 4u, &ValueData, 4u);
        v11 = v16;
        if ( v16 >= 0 )
          goto LABEL_12;
        goto LABEL_19;
      }
      v15 = OpenRegistrySubkey((PHANDLE)&Path, 0xF003Fu, v14, a3, (unsigned int *)&v25);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v14 = (WCHAR *)Path;
        if ( !Path )
        {
          v20 = WdLogNewEntry5_WdAssertion(v9, 0LL);
          *(_QWORD *)(v20 + 24) = 631LL;
          WdLogEvent5_WdAssertion(v20);
          v14 = (WCHAR *)Path;
        }
        goto LABEL_11;
      }
    }
  }
LABEL_19:
  v21 = WdLogNewEntry5_WdError(v9, v8, v10);
  *(_QWORD *)(v21 + 24) = v11;
  WdLogEvent5_WdError(v21);
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v11;
}
