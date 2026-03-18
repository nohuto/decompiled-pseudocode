/*
 * XREFs of ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0082FC8
 * Callers:
 *     ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x1C0052F70 (-AllocateEnumInfo@FxDevice@@UEAAJXZ.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0090100 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C0064AC8 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

__int64 __fastcall FxPkgPnp::AllocateEnumInfo(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  FxWaitLockInternal *v6; // rax
  FxWaitLockInternal *v7; // rbx
  unsigned int v8; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v11; // rcx
  void *Caller; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_EnumInfo )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_EnumInfo )
  {
    v6 = (FxWaitLockInternal *)FxPoolAllocator(
                                 this->m_Globals,
                                 &this->m_Globals->FxPoolFrameworks,
                                 ExDefaultNonPagedPoolType,
                                 0x88uLL,
                                 this->m_Globals->Tag,
                                 Caller);
    v7 = v6;
    if ( v6 )
    {
      FxWaitLockInternal::FxWaitLockInternal(v6);
      LODWORD(v7[2].m_Event.m_Event.Header.WaitListHead.Flink) = 0;
      WORD2(v7[2].m_Event.m_Event.Header.WaitListHead.Flink) = 0;
      BYTE6(v7[2].m_Event.m_Event.Header.WaitListHead.Flink) = 0;
      *(_QWORD *)&v7[2].m_Event.m_Event.Header.Lock = 0LL;
      v7[1].m_Event.m_Event.Header.WaitListHead.Blink = &v7[1].m_Event.m_Event.Header.WaitListHead;
      v7[1].m_Event.m_Event.Header.WaitListHead.Flink = &v7[1].m_Event.m_Event.Header.WaitListHead;
      v7[1].m_OwningThread = (struct _KTHREAD *)&v7[1].m_Event.m_DbgFlagIsInitialized;
      *(_QWORD *)&v7[1].m_Event.m_DbgFlagIsInitialized = (char *)v7 + 64;
      *(_QWORD *)&v7[1].m_Event.m_Event.Header.Lock = FxWaitLockTransactionedList::`vftable';
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)((char *)v7 + 96));
    }
    else
    {
      v7 = 0LL;
    }
    this->m_EnumInfo = (FxEnumerationInfo *)v7;
    if ( !v7 )
    {
      v8 = -1073741670;
      m_DeviceBase = this->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      v11 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v11 = 0LL;
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x4Cu, WPP_FxPkgPnp_cpp_Traceguids, v11, 0xC000009A);
      goto LABEL_10;
    }
    KeInitializeEvent(&v7->m_Event.m_Event, SynchronizationEvent, 1u);
    v7->m_Event.m_DbgFlagIsInitialized = 1;
    KeInitializeEvent((PRKEVENT)&v7[2].m_Event.m_Event.Header.WaitListHead.Blink, SynchronizationEvent, 1u);
    v7[3].m_Event.m_Event.Header.Type = 1;
  }
  v8 = 0;
LABEL_10:
  FxNonPagedObject::Unlock(this, irql, v5);
  return v8;
}
