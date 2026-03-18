/*
 * XREFs of DxgkGetAdapter @ 0x1C0144330
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C001E2A4 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkGetAdapter(PDEVICE_OBJECT **a1, struct _LUID *a2, PDEVICE_OBJECT *a3, __int64 *a4, _BYTE *a5)
{
  __int64 v9; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  char v12; // al
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  PDEVICE_OBJECT *v22; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  volatile signed __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+28h] [rbp-41h] BYREF
  char v36; // [rsp+30h] [rbp-39h]
  struct DXGADAPTER *v37; // [rsp+38h] [rbp-31h] BYREF
  __int64 v38; // [rsp+40h] [rbp-29h]
  struct _LUID v39; // [rsp+48h] [rbp-21h]
  _BYTE v40[8]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v41[32]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v42[40]; // [rsp+80h] [rbp+17h] BYREF

  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
    v12 = *((_BYTE *)SessionDataForSpecifiedSession + 18492);
  else
    v12 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( v12 )
  {
    v39 = *a2;
    Global = DXGGLOBAL::GetGlobal(0LL);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindHWRenderAdapterByLuid,
      (__int64)&v37,
      2);
    if ( v37 )
      goto LABEL_8;
    v16 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v16 + 24) = a2->HighPart;
    *(_QWORD *)(v16 + 32) = a2->LowPart;
    WdLogEvent5_WdEvent(v16);
    v18 = DXGGLOBAL::GetGlobal(v17);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v18,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v37,
      2);
    if ( v37 )
      goto LABEL_8;
    v27 = WdLogNewEntry5_WdEvent(v20, v19);
    *(_QWORD *)(v27 + 24) = 3699LL;
    WdLogEvent5_WdEvent(v27);
  }
  if ( v37 )
  {
LABEL_8:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v37, 0LL);
    v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40);
    v22 = (PDEVICE_OBJECT *)v37;
    if ( v21 < 0 )
    {
      DXGADAPTER::ReleaseReference(v37);
      v32 = WdLogNewEntry5_WdError(v31);
      v25 = -1073741275;
      *(_QWORD *)(v32 + 24) = -1073741275LL;
      WdLogEvent5_WdError(v32);
    }
    else
    {
      *a2 = *(struct _LUID *)((char *)v37 + 276);
      if ( a1 )
      {
        if ( !a3 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v33 + 24) = 3743LL;
          WdLogEvent5_WdAssertion(v33);
          v22 = (PDEVICE_OBJECT *)v37;
        }
        *a1 = v22;
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v22[24]);
        *a3 = DeviceAttachmentBaseRef;
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( SessionDataForSpecifiedSession )
          DXGSESSIONDATA::SetAdapterLuidInRemoteSession((struct _LUID *)SessionDataForSpecifiedSession, a2);
        if ( a5 )
        {
          LOBYTE(v24) = *((_BYTE *)v37 + 185);
          *a5 = v24;
        }
        if ( !a4 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v34 + 24) = 3760LL;
          WdLogEvent5_WdAssertion(v34);
        }
        *a4 = v38;
      }
      else
      {
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v22);
      }
      v25 = 0;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    return v25;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v35);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  v29 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v28) + 78);
  v37 = (struct DXGADAPTER *)v29;
  if ( v29 )
  {
    _InterlockedIncrement64(v29 + 3);
    v38 = -1LL;
    if ( v36 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
    goto LABEL_8;
  }
  v30 = WdLogNewEntry5_WdError(0LL);
  v25 = -1073741275;
  *(_QWORD *)(v30 + 24) = -1073741275LL;
  WdLogEvent5_WdError(v30);
  if ( v36 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
  return v25;
}
