/*
 * XREFs of ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C0256650
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02574F0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00423C8 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z @ 0x1C0256160 (--0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z.c)
 *     ?IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ @ 0x1C0256BB8 (-IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ.c)
 *     ?SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1C0256F58 (-SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@.c)
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
  __int64 v11; // rcx
  unsigned int v12; // edi
  DXGDISPLAYMANAGERSOURCEOBJECT *v13; // rsi
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rax
  NTSTATUS inserted; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  DXGDISPLAYMANAGERSOURCEOBJECT *v24; // [rsp+58h] [rbp-10h] BYREF

  v10 = (DXGDISPLAYMANAGERSOURCEOBJECT *)operator new(0x48uLL, 0x4B677844u, PagedPool);
  v12 = 0;
  if ( v10 )
    v13 = DXGDISPLAYMANAGERSOURCEOBJECT::DXGDISPLAYMANAGERSOURCEOBJECT(v10, this, a2, a3);
  else
    v13 = 0LL;
  v24 = v13;
  if ( !v13 || !DXGDISPLAYMANAGERSOURCEOBJECT::IsValid(v13) )
  {
    v21 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v21 + 24) = 331LL;
    WdLogEvent5_WdLowResource(v21);
    LODWORD(v17) = -1073741801;
    goto LABEL_10;
  }
  LOBYTE(v14) = 1;
  LOBYTE(v11) = 1;
  Object = 0LL;
  v15 = ObCreateObject(v11, g_pDxgkDisplayManagerObjectType, a4, v14, 0LL, 16, 88, 0, &Object);
  v17 = v15;
  if ( v15 < 0 )
    goto LABEL_8;
  v18 = Object;
  *(_QWORD *)Object = 0LL;
  v18[1] = 0LL;
  DXGDISPLAYMANAGERSOURCEOBJECT::SetNtObjectPointer(v13, (struct DXGDISPLAYMANAGEROBJECT_CONTAINER *)Object);
  v24 = 0LL;
  *((_QWORD *)Object + 1) = v13;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, Handle);
  v17 = inserted;
  if ( inserted < 0 )
  {
LABEL_8:
    v20 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v20 + 24) = v17;
    WdLogEvent5_WdError(v20);
LABEL_10:
    v12 = v17;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v24);
  return v12;
}
