/*
 * XREFs of DxgkGetAdapter @ 0x1C01560A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001DEE0 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z @ 0x1C0156288 (-DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z.c)
 */

__int64 __fastcall DxgkGetAdapter(
        struct DXGADAPTER **a1,
        struct _LUID *a2,
        PDEVICE_OBJECT *a3,
        struct DXGADAPTER **a4,
        _BYTE *a5)
{
  int SessionRenderAdapter; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  PDEVICE_OBJECT *v12; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID *SessionDataForSpecifiedSession; // rax
  struct DXGADAPTER *v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGADAPTER *v26[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v27[8]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGADAPTER *v28; // [rsp+38h] [rbp-18h]
  char v29; // [rsp+40h] [rbp-10h]

  v26[0] = 0LL;
  SessionRenderAdapter = DxgkpFindSessionRenderAdapter(a2, (struct DXGADAPTER_REFERENCE *)v26, 1u);
  if ( SessionRenderAdapter >= 0 )
  {
    v28 = v26[0];
    v29 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    v12 = (PDEVICE_OBJECT *)*((unsigned int *)v26[0] + 44);
    if ( (_DWORD)v12 != 1 || (v12 = (PDEVICE_OBJECT *)v26[0], *((_BYTE *)v26[0] + 2465)) )
    {
      v22 = WdLogNewEntry5_WdError(v12, v10, v11);
      SessionRenderAdapter = -1073741275;
      *(_QWORD *)(v22 + 24) = -1073741275LL;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      *a2 = *(struct _LUID *)((char *)v26[0] + 276);
      if ( a1 )
      {
        if ( !a4 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v12, v10);
          *(_QWORD *)(v24 + 24) = 4007LL;
          WdLogEvent5_WdAssertion(v24);
          v12 = (PDEVICE_OBJECT *)v26[0];
        }
        if ( !a3 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v12, v10);
          *(_QWORD *)(v25 + 24) = 4008LL;
          WdLogEvent5_WdAssertion(v25);
          v12 = (PDEVICE_OBJECT *)v26[0];
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v12[24]);
        *a3 = DeviceAttachmentBaseRef;
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15, v14) + 74);
        if ( v18 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16);
          SessionDataForSpecifiedSession = (struct _LUID *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                             v18,
                                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
          DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, v26[0]);
        v21 = v26[0];
        if ( a5 )
          *a5 = *((_BYTE *)v26[0] + 185);
        v26[0] = 0LL;
        *a4 = v26[1];
        *a1 = v21;
      }
      SessionRenderAdapter = 0;
    }
    if ( v29 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  }
  DXGADAPTER_REFERENCE::Assign(v26, 0LL);
  return (unsigned int)SessionRenderAdapter;
}
