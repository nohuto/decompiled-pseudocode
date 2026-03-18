/*
 * XREFs of DxgkDispMgrSourceOperation @ 0x1C02572A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C0004F34 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C011F64C (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrSourceOperation(_OWORD *a1)
{
  DXGADAPTER *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rsi
  struct DXGADAPTER *v12; // rax
  struct DXGADAPTER *v13; // r14
  __int64 v14; // rdx
  _OWORD *v15; // rdx
  DXGADAPTER *v16[6]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v17[80]; // [rsp+70h] [rbp-58h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+10h] BYREF

  memset(&v16[2], 0, 0x20uLL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)&v16[2] = *a1;
  *(_OWORD *)&v16[4] = a1[1];
  Object = 0LL;
  v2 = v16[3];
  v5 = ObReferenceObjectByHandleWithTag(v16[3], 0x20000u, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, &Object, 0LL);
  if ( v5 < 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(_QWORD *)(v7 + 24) = v2;
    WdLogEvent5_WdWarning(v7);
    goto LABEL_9;
  }
  v8 = *((_QWORD *)Object + 1);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdWarning(v4, v3, 0LL);
    *(_QWORD *)(v9 + 24) = 959LL;
    WdLogEvent5_WdWarning(v9);
LABEL_8:
    v5 = -1073741811;
    goto LABEL_9;
  }
  if ( LODWORD(v16[2]) != 1 )
    goto LABEL_8;
  v16[4] = *(DXGADAPTER **)(v8 + 32);
  v11 = *(unsigned int *)(v8 + 40);
  LODWORD(v16[5]) = *(_DWORD *)(v8 + 40);
  HIDWORD(v16[5]) = -1;
  v16[0] = 0LL;
  v12 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)v16, (struct _LUID)v16[4]);
  v13 = v12;
  if ( v12 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v12, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17) >= 0 )
    {
      v14 = *((_QWORD *)v13 + 315);
      if ( v14 )
      {
        if ( (unsigned int)v11 < *(_DWORD *)(v14 + 80) )
          HIDWORD(v16[5]) = *(_DWORD *)(3760 * v11 + *(_QWORD *)(v14 + 112) + 1068);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  }
  v15 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *v15 = *(_OWORD *)&v16[4];
  if ( v16[0] )
    DXGADAPTER::ReleaseReference(v16[0]);
LABEL_9:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v5;
}
