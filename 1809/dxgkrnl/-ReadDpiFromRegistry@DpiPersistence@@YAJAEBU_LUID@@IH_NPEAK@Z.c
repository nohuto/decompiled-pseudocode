/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z @ 0x1C00AE7D4
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00B9710 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C013B910 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z @ 0x1C00AE154 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00DDAF8 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0135900 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1C0135A48 (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0135A68 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        char a4,
        _DWORD *KeyHandle)
{
  _DWORD *v5; // r14
  struct DXGSESSIONDATA *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  void *v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  void *v32; // rbx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  const struct _UNICODE_STRING *v36; // r9
  unsigned int *v38; // [rsp+20h] [rbp-91h]
  unsigned int v39; // [rsp+28h] [rbp-89h]
  void *v40; // [rsp+30h] [rbp-81h] BYREF
  void *v41; // [rsp+38h] [rbp-79h] BYREF
  struct _UNICODE_STRING v42; // [rsp+40h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-61h] BYREF
  struct _UNICODE_STRING v44; // [rsp+60h] [rbp-51h] BYREF
  __int64 v45; // [rsp+70h] [rbp-41h] BYREF
  int v46; // [rsp+78h] [rbp-39h]
  const WCHAR *v47; // [rsp+80h] [rbp-31h]
  _DWORD *v48; // [rsp+88h] [rbp-29h]
  int v49; // [rsp+90h] [rbp-21h]
  int *v50; // [rsp+98h] [rbp-19h]
  int v51; // [rsp+A0h] [rbp-11h]
  __int64 v52; // [rsp+A8h] [rbp-9h]
  int v53; // [rsp+B0h] [rbp-1h]
  _BYTE v54[40]; // [rsp+B8h] [rbp+7h] BYREF
  int v55; // [rsp+120h] [rbp+6Fh] BYREF

  v5 = KeyHandle;
  v55 = 0;
  KeyHandle = 0LL;
  v40 = 0LL;
  *v5 = 0;
  v41 = 0LL;
  v7 = 0LL;
  LODWORD(v9) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, a4, &v44);
  if ( (int)v9 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    v7 = SessionData;
    if ( !SessionData )
    {
      v16 = WdLogNewEntry5_WdError(v13);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v16 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17);
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
      goto LABEL_23;
    }
    if ( *((_QWORD *)SessionData + 2338) )
    {
      v20 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v19 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v20 + 24) = 877LL;
      DestinationString = *(struct _UNICODE_STRING *)((char *)v7 + 18696);
    }
    else
    {
      if ( *((_WORD *)SessionData + 9348) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v18 + 24) = 868LL;
        WdLogEvent5_WdAssertion(v18);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = 869LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
      v19 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&v42, v19);
    v21 = OpenRegistrySubkey((PHANDLE)&KeyHandle, 0xF003Fu, 0LL, &DestinationString, 0LL);
    v9 = v21;
    if ( v21 >= 0 )
    {
      v23 = KeyHandle;
      if ( !KeyHandle )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v24 + 24) = 897LL;
        WdLogEvent5_WdAssertion(v24);
        v23 = KeyHandle;
      }
      v25 = OpenRegistrySubkey(&v40, 0xF003Fu, v23, &v42, 0LL);
      v9 = v25;
      if ( v25 < 0 )
        goto LABEL_13;
      v28 = v40;
      if ( !v40 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v29 + 24) = 913LL;
        WdLogEvent5_WdAssertion(v29);
        v28 = v40;
      }
      v30 = OpenRegistrySubkey(&v41, 0xF003Fu, v28, &v44, 0LL);
      v9 = v30;
      if ( v30 < 0 )
      {
LABEL_13:
        v27 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v27 + 24) = v9;
        WdLogEvent5_WdEvent(v27);
        goto LABEL_21;
      }
      v32 = v41;
      if ( !v41 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31);
        *(_QWORD *)(v33 + 24) = 929LL;
        WdLogEvent5_WdAssertion(v33);
        v32 = v41;
      }
      v45 = 0LL;
      v46 = 288;
      v47 = L"DpiValue";
      v48 = v5;
      v49 = 67108868;
      v50 = &v55;
      v51 = 4;
      v52 = 0LL;
      v53 = 0;
      memset(v54, 0, sizeof(v54));
      v34 = RtlQueryRegistryValuesEx(0x40000000LL, v32, &v45, 0LL, 0LL);
      v9 = v34;
      if ( v34 >= 0 )
        goto LABEL_21;
    }
    v35 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v35 + 24) = v9;
    WdLogEvent5_WdError(v35);
  }
LABEL_21:
  if ( (_DWORD)v9 == -1073741772 )
  {
    LODWORD(v9) = 0;
    *v5 = v55;
  }
LABEL_23:
  if ( a3 && (int)v9 >= 0 && v7 && *((_QWORD *)v7 + 2338) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v42, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v38) = *v5;
    DpiPersistence::WriteDwordToParticularRegValue(
      &DestinationString,
      &v42,
      &v44,
      v36,
      (const unsigned __int16 *const)v38,
      v39);
  }
  operator delete[](v44.Buffer);
  CloseRegistrySubkey(KeyHandle);
  CloseRegistrySubkey(v40);
  CloseRegistrySubkey(v41);
  return (unsigned int)v9;
}
