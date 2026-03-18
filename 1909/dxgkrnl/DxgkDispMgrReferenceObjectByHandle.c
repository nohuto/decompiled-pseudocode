/*
 * XREFs of DxgkDispMgrReferenceObjectByHandle @ 0x1C028D890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00CB2BC (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrReferenceObjectByHandle(void *a1, ACCESS_MASK a2, _QWORD *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v4 = ObReferenceObjectByHandleWithTag(a1, a2, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, (PVOID *)&v13, 0LL);
  v8 = v4;
  if ( v4 >= 0 )
  {
    v10 = v13;
    if ( *v13 )
    {
      v13 = 0LL;
      LODWORD(v8) = 0;
      *a3 = v10;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v11 + 24) = 1090LL;
      WdLogEvent5_WdError(v11);
      LODWORD(v8) = -1073741811;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>((void **)&v13);
  return (unsigned int)v8;
}
