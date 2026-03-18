/*
 * XREFs of imp_WdfIoQueueCreate @ 0x1C0076A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C007679C (WPP_IFR_SF_DDDDd.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0077638 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C0077BA8 (-InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned int Size; // ecx
  unsigned __int8 DefaultQueue; // cl
  WDFQUEUE__ **v16; // r14
  unsigned int _a2; // ebx
  FxPkgIo *m_PkgIo; // r15
  unsigned int v19; // r8d
  unsigned __int16 v20; // r9
  FxIoQueue *v21; // rbx
  int v22; // esi
  const void *v23; // rax
  unsigned __int64 v24; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]
  FxDevice *pDevice; // [rsp+90h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+A0h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  pQueue = 0LL;
  m_Globals = pDevice->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, QueueAttributes, 6);
  if ( (int)result >= 0 )
  {
    Size = Config->Size;
    if ( ((Config->Size - 80) & 0xFFFFFFE7) != 0 || Size == 104 )
    {
      WPP_IFR_SF_DDDDd(m_Globals, v11, v12, v13, traceGuid, Size);
      return 3221225476LL;
    }
    else
    {
      DefaultQueue = Config->DefaultQueue;
      v16 = Queue;
      if ( !DefaultQueue && !Queue )
      {
        _a2 = -1073741582;
        WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueApi_cpp_Traceguids, -1073741582);
        return _a2;
      }
      m_PkgIo = pDevice->m_PkgIo;
      if ( DefaultQueue )
      {
        if ( pDevice->m_Legacy )
        {
          if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
          {
            v19 = 12;
            v20 = 12;
LABEL_14:
            _a2 = -1073741436;
LABEL_15:
            WPP_IFR_SF_qL(m_Globals, 2u, v19, v20, WPP_FxIoQueueApi_cpp_Traceguids, Device, _a2);
            return _a2;
          }
        }
        else if ( pDevice->m_CurrentPnpState != WdfDevStatePnpInit )
        {
          v20 = 13;
          v19 = 12;
          goto LABEL_14;
        }
      }
      _a2 = FxPkgIo::CreateQueue(
              m_PkgIo,
              Config,
              QueueAttributes,
              *(FxDriver **)&DriverGlobals[-7].DriverName[16],
              &pQueue);
      if ( (_a2 & 0x80000000) != 0 )
      {
        v20 = 14;
        v19 = 13;
        goto LABEL_15;
      }
      v21 = pQueue;
      if ( Config->DefaultQueue && (v22 = FxPkgIo::InitializeDefaultQueue(m_PkgIo, pDevice, pQueue), v22 < 0) )
      {
        WPP_IFR_SF_qq(m_Globals, 2u, 0xDu, 0xFu, WPP_FxIoQueueApi_cpp_Traceguids, m_PkgIo, Device);
        FxObject::ClearEvtCallbacks(v21);
        ((void (*)(void))v21->DeleteObject)();
        return (unsigned int)v22;
      }
      else
      {
        if ( m_Globals->FxVerboseOn )
        {
          if ( v21->m_ObjectSize )
            v23 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v23 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x10u, WPP_FxIoQueueApi_cpp_Traceguids, v23);
        }
        if ( v16 )
        {
          if ( v21->m_ObjectSize )
            v24 = (unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v24 = 0LL;
          *v16 = (WDFQUEUE__ *)v24;
        }
        return 0LL;
      }
    }
  }
  return result;
}
