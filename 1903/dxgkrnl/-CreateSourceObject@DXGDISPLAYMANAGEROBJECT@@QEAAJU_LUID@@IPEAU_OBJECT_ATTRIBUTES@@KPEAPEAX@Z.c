/*
 * XREFs of ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C028C8D8
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C028D7B0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00493B4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z @ 0x1C028C3DC (--0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z.c)
 *     ?IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ @ 0x1C028CE68 (-IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ.c)
 *     ?SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1C028D208 (-SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        int a3,
        struct _OBJECT_ATTRIBUTES *a4,
        ACCESS_MASK DesiredAccess,
        void **Handle)
{
  DXGDISPLAYMANAGERSOURCEOBJECT *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  DXGDISPLAYMANAGERSOURCEOBJECT *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  NTSTATUS inserted; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  DXGDISPLAYMANAGERSOURCEOBJECT *v28; // [rsp+58h] [rbp-10h] BYREF

  v10 = (DXGDISPLAYMANAGERSOURCEOBJECT *)operator new[](0x48uLL, 0x4B677844u, PagedPool);
  v15 = 0;
  if ( v10 )
    v16 = DXGDISPLAYMANAGERSOURCEOBJECT::DXGDISPLAYMANAGERSOURCEOBJECT(v10, this, a2, a3);
  else
    v16 = 0LL;
  v28 = v16;
  if ( !v16 || !DXGDISPLAYMANAGERSOURCEOBJECT::IsValid(v16) )
  {
    v25 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v25 + 24) = 331LL;
    WdLogEvent5_WdLowResource(v25);
    LODWORD(v21) = -1073741801;
    goto LABEL_10;
  }
  LOBYTE(v14) = 1;
  LOBYTE(v12) = 1;
  Object = 0LL;
  v17 = ObCreateObject(v12, g_pDxgkDisplayManagerObjectType, a4, v14, 0LL, 16, 88, 0, &Object);
  v21 = v17;
  if ( v17 < 0 )
    goto LABEL_8;
  v22 = Object;
  *(_QWORD *)Object = 0LL;
  v22[1] = 0LL;
  DXGDISPLAYMANAGERSOURCEOBJECT::SetNtObjectPointer(v16, (struct DXGDISPLAYMANAGEROBJECT_CONTAINER *)Object);
  v28 = 0LL;
  *((_QWORD *)Object + 1) = v16;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, Handle);
  v21 = inserted;
  if ( inserted < 0 )
  {
LABEL_8:
    v24 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v24 + 24) = v21;
    WdLogEvent5_WdError(v24);
LABEL_10:
    v15 = v21;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v28);
  return v15;
}
