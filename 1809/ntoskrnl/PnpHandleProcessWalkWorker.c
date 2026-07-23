/*
 * XREFs of PnpHandleProcessWalkWorker @ 0x140828540
 * Callers:
 *     <none>
 * Callees:
 *     IoGetBaseFileSystemDeviceObject @ 0x14001CA40 (IoGetBaseFileSystemDeviceObject.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall PnpHandleProcessWalkWorker(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r11
  char v9; // bl
  struct _DEVICE_OBJECT *v10; // rbp
  unsigned __int64 v11; // rsi
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  v5 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)] == IoFileObjectType
    && (v10 = *(struct _DEVICE_OBJECT **)a4,
        v11 = v5 + 48,
        IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)(v5 + 48)) == v10) )
  {
    v9 = (*(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, unsigned __int64, __int64, _QWORD))(a4 + 16))(
           v10,
           *(_QWORD *)(a4 + 8),
           v11,
           a3,
           *(_QWORD *)(a4 + 24));
  }
  else
  {
    v9 = 0;
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v9;
}
