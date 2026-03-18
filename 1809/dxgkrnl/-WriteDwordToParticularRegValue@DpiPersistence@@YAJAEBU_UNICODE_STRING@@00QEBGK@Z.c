/*
 * XREFs of ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0135900
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z @ 0x1C00AE7D4 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEB7C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEC28 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 * Callees:
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0135A68 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDwordToParticularRegValue(
        struct _UNICODE_STRING *this,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct _UNICODE_STRING *a4,
        const unsigned __int16 *ValueData)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  HANDLE v10; // r8
  int v11; // eax
  WCHAR *v12; // rdx
  int v13; // eax
  NTSTATUS v14; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-18h] BYREF
  PCWSTR Path; // [rsp+40h] [rbp-10h] BYREF
  const struct _UNICODE_STRING *v23; // [rsp+88h] [rbp+38h] BYREF

  v23 = a4;
  Handle = 0LL;
  KeyHandle = 0LL;
  Path = 0LL;
  v7 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, this, 0LL);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = Handle;
    if ( !Handle )
    {
      v16 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v16 + 24) = 612LL;
      WdLogEvent5_WdAssertion(v16);
      v10 = Handle;
    }
    v11 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v10, a2, (unsigned int *)&v23);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v12 = (WCHAR *)KeyHandle;
      if ( !KeyHandle )
      {
        v17 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v17 + 24) = 627LL;
        WdLogEvent5_WdAssertion(v17);
        v12 = (WCHAR *)KeyHandle;
      }
      if ( !a3->Length )
      {
LABEL_11:
        v14 = RtlWriteRegistryValue(0x40000000u, v12, L"DpiValue", 4u, &ValueData, 4u);
        v9 = v14;
        if ( v14 >= 0 )
          goto LABEL_12;
        goto LABEL_19;
      }
      v13 = OpenRegistrySubkey((PHANDLE)&Path, 0xF003Fu, v12, a3, (unsigned int *)&v23);
      v9 = v13;
      if ( v13 >= 0 )
      {
        v12 = (WCHAR *)Path;
        if ( !Path )
        {
          v18 = WdLogNewEntry5_WdAssertion(v8);
          *(_QWORD *)(v18 + 24) = 644LL;
          WdLogEvent5_WdAssertion(v18);
          v12 = (WCHAR *)Path;
        }
        goto LABEL_11;
      }
    }
  }
LABEL_19:
  v19 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v19 + 24) = v9;
  WdLogEvent5_WdError(v19);
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v9;
}
