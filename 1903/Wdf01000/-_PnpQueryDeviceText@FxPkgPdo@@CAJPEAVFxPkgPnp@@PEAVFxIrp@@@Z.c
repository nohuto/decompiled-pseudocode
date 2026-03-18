/*
 * XREFs of ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0018120 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ?FindObjectForGivenLocale@@YAPEAUFxDeviceText@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C007C104 (-FindObjectForGivenLocale@@YAPEAUFxDeviceText@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryDeviceText(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned int Status; // esi
  _SINGLE_LIST_ENTRY *v6; // rcx
  FxDeviceText *ObjectForGivenLocale; // r8
  __int64 v8; // r9
  int v9; // ecx
  wchar_t *m_LocationInformation; // rbx
  __int64 v11; // rax
  SIZE_T v12; // rbp
  PVOID PoolWithTag; // rax
  unsigned __int64 v14; // rsi
  FxDeviceBase *m_DeviceBase; // r10
  __int64 m_ObjectSize; // rax
  const void *_a1; // r10

  m_Globals = This->m_Globals;
  Status = Irp->m_Irp->IoStatus.Status;
  ObjectForGivenLocale = FindObjectForGivenLocale(
                           (_SINGLE_LIST_ENTRY *)&This[1],
                           Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options);
  if ( ObjectForGivenLocale || (ObjectForGivenLocale = FindObjectForGivenLocale(v6, *(_DWORD *)&This[1].m_Type)) != 0LL )
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 )
    {
      if ( v9 != 1 )
        return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
      m_LocationInformation = ObjectForGivenLocale->m_LocationInformation;
    }
    else
    {
      m_LocationInformation = ObjectForGivenLocale->m_Description;
    }
    if ( m_LocationInformation )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( m_LocationInformation[v11] );
      v12 = 2 * v11 + 2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, m_Globals->Tag);
      v14 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, m_LocationInformation, v12);
        Irp->m_Irp->IoStatus.Information = v14;
        Status = 0;
      }
      else
      {
        Status = -1073741670;
        m_DeviceBase = This->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          0xCu,
          0xCu,
          WPP_FxPkgPdo_cpp_Traceguids,
          _a1,
          Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          0xC000009A);
      }
    }
  }
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
