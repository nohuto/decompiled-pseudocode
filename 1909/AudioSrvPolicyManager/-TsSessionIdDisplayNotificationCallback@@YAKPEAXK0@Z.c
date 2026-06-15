/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800265D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     WPP_SF_ @ 0x1800041BC (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x18001E7B4 (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     WPP_SF_ds @ 0x180022608 (WPP_SF_ds.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdDisplayNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  DWORD v4; // r15d
  signed int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // eax
  __int64 v8; // r8
  const char *v9; // rdx
  const char *v10; // rax
  struct TSSession *v11; // r13
  _DWORD *v12; // r14
  int v13; // r12d
  int v14; // ebp
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r9
  const char *v17; // rdx
  __int64 v18; // rax
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v20; // rax
  __int64 v21; // rcx
  struct _RTL_CRITICAL_SECTION *v22; // rbx
  struct TSSession *v24; // [rsp+30h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+38h] [rbp-A0h]
  __int64 v26; // [rsp+40h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-88h] BYREF
  const char *v28; // [rsp+70h] [rbp-68h]
  int v29; // [rsp+78h] [rbp-60h]
  int v30; // [rsp+7Ch] [rbp-5Ch]
  _DWORD *v31; // [rsp+80h] [rbp-58h]
  __int64 v32; // [rsp+88h] [rbp-50h]

  v26 = -2LL;
  v4 = (unsigned int)a1;
  v5 = 0;
  v24 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v25 = v6;
  if ( a3[4] != 4
    || *(_QWORD *)a3 != *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    || *((_QWORD *)a3 + 1) != *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
  {
    goto LABEL_43;
  }
  v7 = TsSessionFromSessionId(v4, 0, 0LL, &v24);
  v9 = (const char *)&WPP_GLOBAL_Control;
  if ( v7 )
  {
    v5 = (unsigned __int16)v7 | 0x80070000;
    if ( v7 <= 0 )
      v5 = v7;
LABEL_37:
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, v5);
      }
      AudPolicyLogError("TsSessionIdDisplayNotificationCallback", 2342, v5);
    }
    goto LABEL_43;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    if ( a3[5] == 2 )
    {
      v10 = "Dim";
    }
    else
    {
      v9 = "On";
      v10 = "Off";
      if ( a3[5] == 1 )
        v10 = "On";
    }
    WPP_SF_ds(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v9, v8, v4, v10);
  }
  v11 = v24;
  v12 = (_DWORD *)((char *)v24 + 228);
  v13 = *((_DWORD *)v24 + 57);
  v14 = a3[5] != 0;
  *((_DWORD *)v24 + 57) = v14;
  v15 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v15 > 4u )
  {
    v17 = "Display Setting Unchanged";
    if ( v13 != v14 )
      v17 = "Display Setting Changed";
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v28 = v17;
    v29 = v18 + 1;
    v30 = 0;
    v31 = v12;
    v32 = 4LL;
    TlgWrite(v15, &unk_180042E21, 0LL, v16, 4u, &pData);
  }
  if ( v13 != v14 && (*v12 || g_bLowPowerEpoch || !*((_DWORD *)v11 + 58) || g_bApmSuspended) )
  {
    ProcessHeap = GetProcessHeap();
    v20 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 4uLL);
    v22 = v20;
    v25 = v20;
    if ( v20 )
      LODWORD(v20->DebugInfo) = v4;
    else
      v22 = 0LL;
    if ( v22 && (int)QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v21, (__int64)v22) < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids);
      }
      operator delete(v22, (const struct std::nothrow_t *)4);
      goto LABEL_37;
    }
  }
LABEL_43:
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
