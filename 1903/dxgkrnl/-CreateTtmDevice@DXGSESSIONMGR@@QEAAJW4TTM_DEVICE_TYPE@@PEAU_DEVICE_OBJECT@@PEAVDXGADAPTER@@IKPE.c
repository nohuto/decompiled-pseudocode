/*
 * XREFs of ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C015A9FC
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C015A8E0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z @ 0x1C015A9A4 (--0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C015AAEC (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C015B334 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateTtmDevice(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        struct DXGADAPTER *a4,
        unsigned int a5,
        unsigned int a6,
        CTTMDEVICE **a7)
{
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  CTTMDEVICE *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbp
  int v21; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax

  if ( a7 && (a3 || a4) && ((a5 + 3) & 0xFFFFFFFD) != 0 )
  {
    v10 = operator new[](0x390uLL, 0x4B677844u, PagedPool);
    if ( v10 )
      v15 = (CTTMDEVICE *)CTTMDEVICE::CTTMDEVICE((__int64)v10, 1299018836);
    else
      v15 = 0LL;
    if ( v15 )
    {
      v16 = CTTMDEVICE::Initialize(v15, a3, a4, a5, a6);
      v20 = v16;
      if ( v16 < 0
        || (v21 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
                    (CSERIALIZEDWORKQUEUE *)(a1 + 184),
                    (void (*)(void *))DXGSESSIONMGR::CreateTtmDeviceWorker,
                    v15),
            v20 = v21,
            v21 < 0) )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
        v25[3] = a5;
        v25[4] = a4;
        v25[5] = v20;
        WdLogEvent5_WdError(v25);
        return (unsigned int)v20;
      }
      else
      {
        *a7 = v15;
        return 0LL;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v24 + 24) = a5;
      *(_QWORD *)(v24 + 32) = a4;
      WdLogEvent5_WdLowResource(v24);
      return 3221225495LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
}
