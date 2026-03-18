/*
 * XREFs of DxgkDispMgrSourceOperation @ 0x1C028D960
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00CB2BC (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrSourceOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  HANDLE v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rax
  struct _LUID *v9; // rdx
  __int64 v10; // rax
  __int64 LowPart; // rsi
  struct DXGADAPTER *v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  _OWORD *v16; // rdx
  PVOID Object; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-E0h]
  struct _LUID v19[2]; // [rsp+58h] [rbp-D0h] BYREF
  struct DXGADAPTER *v20[3]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v21[144]; // [rsp+80h] [rbp-A8h] BYREF

  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)&v19[0].LowPart = a1[1];
  Object = 0LL;
  v3 = Handle[1];
  v6 = ObReferenceObjectByHandleWithTag(
         Handle[1],
         0x20000u,
         g_pDxgkDisplayManagerObjectType,
         1,
         0x4B677844u,
         &Object,
         0LL);
  if ( v6 < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v7);
    *(_QWORD *)(v8 + 24) = v3;
    WdLogEvent5_WdWarning(v8);
    goto LABEL_9;
  }
  v9 = (struct _LUID *)*((_QWORD *)Object + 1);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdWarning(v5, 0LL, v7);
    *(_QWORD *)(v10 + 24) = 1030LL;
    WdLogEvent5_WdWarning(v10);
LABEL_8:
    v6 = -1073741811;
    goto LABEL_9;
  }
  if ( LODWORD(Handle[0]) != 1 )
    goto LABEL_8;
  v19[0] = v9[4];
  LowPart = v9[5].LowPart;
  v19[1].LowPart = v9[5].LowPart;
  v19[1].HighPart = -1;
  v20[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v20, v19);
  v13 = v20[0];
  if ( v20[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v20[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v21, 0xFFFFFFFFLL, v14) >= 0 )
    {
      v15 = *((_QWORD *)v13 + 319);
      if ( v15 )
      {
        if ( (unsigned int)LowPart < *(_DWORD *)(v15 + 80) )
          v19[1].HighPart = *(_DWORD *)(3968 * LowPart + *(_QWORD *)(v15 + 112) + 1068);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  }
  v16 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  *v16 = *(_OWORD *)&v19[0].LowPart;
  DXGADAPTER_REFERENCE::Assign(v20, 0LL);
LABEL_9:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v6;
}
