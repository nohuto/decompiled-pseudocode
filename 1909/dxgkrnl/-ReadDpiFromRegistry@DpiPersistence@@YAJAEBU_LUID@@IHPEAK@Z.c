/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C012D610
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C012DAC0 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C014F7C0 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C012D348 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C012D4B0 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C012D944 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  __int64 v13; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // rax
  const WCHAR *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  HANDLE v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  const struct _UNICODE_STRING *v26; // r9
  HANDLE v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  HANDLE v31; // rbx
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int *v41; // [rsp+20h] [rbp-89h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v43; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v45; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v46; // [rsp+60h] [rbp-49h] BYREF
  __int64 v47; // [rsp+70h] [rbp-39h] BYREF
  int v48; // [rsp+78h] [rbp-31h]
  const WCHAR *v49; // [rsp+80h] [rbp-29h]
  struct _UNICODE_STRING *v50; // [rsp+88h] [rbp-21h]
  int v51; // [rsp+90h] [rbp-19h]
  int *v52; // [rsp+98h] [rbp-11h]
  int v53; // [rsp+A0h] [rbp-9h]
  __int64 v54; // [rsp+A8h] [rbp-1h]
  int v55; // [rsp+B0h] [rbp+7h]
  _BYTE v56[40]; // [rsp+B8h] [rbp+Fh] BYREF
  int v57; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v57 = 0;
  *(_DWORD *)&a4->Length = 0;
  *(_QWORD *)&v46.Length = 0LL;
  SessionDataForSpecifiedSession = 0LL;
  v46.Buffer = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v43 = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  LODWORD(v9) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v46, a4);
  if ( (int)v9 >= 0 )
  {
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 74);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v33 = WdLogNewEntry5_WdError(v11, v10, v13);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v33 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v35, v34);
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v33);
      goto LABEL_14;
    }
    if ( *((_QWORD *)SessionDataForSpecifiedSession + 2338) )
    {
      v15 = WdLogNewEntry5_WdTrace(v11, v10);
      v16 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v15 + 24) = 861LL;
      v45 = *(struct _UNICODE_STRING *)((char *)SessionDataForSpecifiedSession + 18696);
    }
    else
    {
      if ( *((_WORD *)SessionDataForSpecifiedSession + 9348) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v11, v10);
        *(_QWORD *)(v36 + 24) = 852LL;
        WdLogEvent5_WdAssertion(v36);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = 853LL;
      RtlInitUnicodeString(&v45, L"\\Registry\\Machine\\System");
      v16 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v16);
    v17 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v45, 0LL);
    v9 = v17;
    if ( v17 >= 0 )
    {
      v21 = Handle;
      if ( !Handle )
      {
        v37 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v37 + 24) = 881LL;
        WdLogEvent5_WdAssertion(v37);
        v21 = Handle;
      }
      v22 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v21, &DestinationString, 0LL);
      v9 = v22;
      if ( v22 < 0 )
        goto LABEL_11;
      v28 = KeyHandle;
      if ( !KeyHandle )
      {
        v38 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v38 + 24) = 897LL;
        WdLogEvent5_WdAssertion(v38);
        v28 = KeyHandle;
      }
      v29 = OpenRegistrySubkey(&v43, 0xF003Fu, v28, &v46, 0LL);
      v9 = v29;
      if ( v29 < 0 )
      {
LABEL_11:
        v25 = WdLogNewEntry5_WdEvent(v24);
        *(_QWORD *)(v25 + 24) = v9;
        WdLogEvent5_WdEvent(v25);
        goto LABEL_12;
      }
      v31 = v43;
      if ( !v43 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v24, v30);
        *(_QWORD *)(v39 + 24) = 913LL;
        WdLogEvent5_WdAssertion(v39);
        v31 = v43;
      }
      v47 = 0LL;
      v48 = 288;
      v49 = L"DpiValue";
      v50 = a4;
      v51 = 67108868;
      v52 = &v57;
      v53 = 4;
      v54 = 0LL;
      v55 = 0;
      memset(v56, 0, sizeof(v56));
      v32 = RtlQueryRegistryValuesEx(0x40000000LL, v31, &v47, 0LL, 0LL);
      v9 = v32;
      if ( v32 >= 0 )
        goto LABEL_12;
    }
    v40 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v40 + 24) = v9;
    WdLogEvent5_WdError(v40);
  }
LABEL_12:
  if ( (_DWORD)v9 == -1073741772 )
  {
    LODWORD(v9) = 0;
    *(_DWORD *)&a4->Length = v57;
  }
LABEL_14:
  if ( a3 && (int)v9 >= 0 && SessionDataForSpecifiedSession && *((_QWORD *)SessionDataForSpecifiedSession + 2338) )
  {
    RtlInitUnicodeString(&v45, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v41) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(&v45, &DestinationString, &v46, v26, (const unsigned __int16 *)v41);
  }
  operator delete[](v46.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v43 )
    ZwClose(v43);
  return (unsigned int)v9;
}
