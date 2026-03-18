/*
 * XREFs of ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C00B7BC8
 * Callers:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00B7AAC (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z @ 0x1C00B7B70 (--0CTTMDEVICE@@AEAA@W4TTM_DEVICE_TYPE@@@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C00B7CB8 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00B7DA0 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
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
  __int64 v11; // rcx
  CTTMDEVICE *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbp
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax

  if ( a7 && (a3 || a4) && ((a5 + 3) & 0xFFFFFFFD) != 0 )
  {
    v10 = operator new(0x390uLL, 0x4B677844u, PagedPool);
    if ( v10 )
      v12 = (CTTMDEVICE *)CTTMDEVICE::CTTMDEVICE((__int64)v10, 1299018836);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = CTTMDEVICE::Initialize(v12, a3, a4, a5, a6);
      v15 = v13;
      if ( v13 < 0
        || (v16 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
                    (CSERIALIZEDWORKQUEUE *)(a1 + 184),
                    (void (*)(void *))DXGSESSIONMGR::CreateTtmDeviceWorker,
                    v12),
            v15 = v16,
            v16 < 0) )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v20[3] = a5;
        v20[4] = a4;
        v20[5] = v15;
        WdLogEvent5_WdError(v20);
        return (unsigned int)v15;
      }
      else
      {
        *a7 = v12;
        return 0LL;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v19 + 24) = a5;
      *(_QWORD *)(v19 + 32) = a4;
      WdLogEvent5_WdLowResource(v19);
      return 3221225495LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
}
