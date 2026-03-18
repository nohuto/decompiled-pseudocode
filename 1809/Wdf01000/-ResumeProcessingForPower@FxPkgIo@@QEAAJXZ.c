/*
 * XREFs of ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0077764
 * Callers:
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007FF60 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080F30 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C00103F0 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxPkgIo::ResumeProcessingForPower(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v11; // rsi
  bool v12; // zf
  _SINGLE_LIST_ENTRY *v13; // rdi
  unsigned __int8 v14; // r8
  unsigned __int16 v15; // r9
  FxIoQueue *v16; // rcx
  unsigned __int8 v17; // dl
  _SINGLE_LIST_ENTRY *v18; // rdi
  unsigned __int16 v19; // r9
  _SINGLE_LIST_ENTRY *v20; // rsi
  unsigned __int8 PreviousIrql; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int8 v24; // [rsp+70h] [rbp+40h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+78h] [rbp+48h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x1Fu, WPP_FxPkgIo_cpp_Traceguids, _a1);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v6);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  v7 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v7, v8);
  Next = queueList.Next;
  v11 = queueList.Next;
  v12 = queueList.Next == 0LL;
  if ( !queueList.Next )
    goto LABEL_16;
  do
  {
    v13 = v11 - 116;
    if ( BYTE2(v11[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v11[-116], &PreviousIrql, v9);
      v16 = (FxIoQueue *)&v11[-116];
      v17 = PreviousIrql;
      if ( LODWORD(v13[22].Next) == 1 )
      {
        FxNonPagedObject::Unlock(v16, PreviousIrql, v14);
      }
      else
      {
        LODWORD(v13[22].Next) = 10;
        FxIoQueue::DispatchEvents(v16, v17, 0LL, v15);
      }
    }
    v11 = v11->Next;
  }
  while ( v11 );
  while ( 1 )
  {
    v12 = Next == 0LL;
LABEL_16:
    v20 = Next;
    if ( !v12 )
    {
      Next = Next->Next;
      queueList.Next = Next;
    }
    if ( !v20 )
      break;
    v18 = v20 - 116;
    if ( BYTE2(v20[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v20[-116], &v24, v9);
      if ( SLODWORD(v18[28].Next) > 0 )
      {
        BYTE4(v18[46].Next) = 1;
        BYTE5(v18[46].Next) = 0;
      }
      FxIoQueue::DispatchEvents((FxIoQueue *)&v20[-116], v24, 0LL, v19);
      Next = queueList.Next;
    }
    v20->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v18->Next[2].Next)(
      &v20[-116].Next,
      1702326128LL,
      1327LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
