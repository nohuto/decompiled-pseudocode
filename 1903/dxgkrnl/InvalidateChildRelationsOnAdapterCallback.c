/*
 * XREFs of InvalidateChildRelationsOnAdapterCallback @ 0x1C026F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateChildRelationsOnAdapterCallback(struct _DEVICE_OBJECT **a1)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v13[72]; // [rsp+68h] [rbp-60h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)a1, 0LL);
  v3 = COREADAPTERACCESS::AcquireShared((__int64)v11, 0xFFFFFFFFLL, v2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = a1[24];
    if ( v5 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v5);
      if ( !DeviceAttachmentBaseRef )
      {
        v9 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v9 + 24) = 2484LL;
        WdLogEvent5_WdAssertion(v9);
      }
      IoInvalidateDeviceRelations(DeviceAttachmentBaseRef, BusRelations);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
    }
    v4 = 0;
  }
  else if ( v3 == -1073741130 )
  {
    v4 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return v4;
}
