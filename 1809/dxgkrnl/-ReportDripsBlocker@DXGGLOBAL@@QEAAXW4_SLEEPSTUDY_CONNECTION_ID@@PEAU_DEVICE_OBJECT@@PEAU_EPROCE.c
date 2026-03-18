/*
 * XREFs of ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_KI@Z @ 0x1C0211828
 * Callers:
 *     ?DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z @ 0x1C012AF90 (-DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z.c)
 *     DxgkReportCoreWakeupsDripsBlocker @ 0x1C0212B68 (DxgkReportCoreWakeupsDripsBlocker.c)
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0228700 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2K@Z @ 0x1C020DE8C (-AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2K@Z.c)
 *     ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEEPSTUDY_CONNECTION_ID@@PEADIPEA_KH@Z @ 0x1C0210EC4 (-PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEE.c)
 */

void __fastcall DXGGLOBAL::ReportDripsBlocker(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // r13d
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v12; // esi
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rcx
  const char *v19; // rdx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // [rsp+28h] [rbp-71h]
  _BYTE v27[16]; // [rsp+40h] [rbp-59h] BYREF
  struct _STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  STRING v29; // [rsp+60h] [rbp-39h] BYREF
  char v30[40]; // [rsp+70h] [rbp-29h] BYREF

  v7 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v9 + 24) = 4826LL;
    WdLogEvent5_WdEvent(v9);
    return;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(a1 + 1736), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  if ( !a4 )
  {
    v19 = "External Activation";
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = -1;
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
  {
    v17 = 0LL;
LABEL_13:
    if ( v17 )
      v12 = *(_DWORD *)(v17 + 144);
    goto LABEL_15;
  }
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v16 = *ThreadWin32Thread;
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 80);
        goto LABEL_13;
      }
    }
  }
LABEL_15:
  memset(v30, 0, 0x21uLL);
  DXGGLOBAL::PrepareDripsBlockerProcessName(v18, a4, v12, v7, v30, v26, 0LL, 1);
  v19 = v30;
LABEL_17:
  RtlInitAnsiString(&DestinationString, v19);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
  v29 = DestinationString;
  v21 = (int)DripsBlockerInfoList::AddDripsBlocker(
               (unsigned int *)(a1 + 1784),
               v7,
               &v29,
               (__int64)DeviceAttachmentBaseRef,
               a5,
               1);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v21 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v21;
    WdLogEvent5_WdWarning(v25);
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
}
