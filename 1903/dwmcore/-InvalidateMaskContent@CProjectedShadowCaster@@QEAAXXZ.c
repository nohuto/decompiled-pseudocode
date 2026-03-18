/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1800040F4
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180003F80 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021ED0 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18007DB20 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007FEEC (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x1801F270C (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x1801F28E0 (-ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCA.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x1800063A4 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowCaster::InvalidateMaskContent(CProjectedShadowCaster *this)
{
  __int64 *j; // rbx
  __int64 **v3; // rax
  __int64 *i; // rax
  __int64 *v5; // rcx

  j = (__int64 *)**((_QWORD **)this + 9);
  while ( j != *((__int64 **)this + 9) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(j + 10);
    v3 = (__int64 **)j[2];
    if ( *((_BYTE *)v3 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v5 = *v3;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v5 + 25); v5 = (__int64 *)*v5 )
        j = v5;
    }
  }
  if ( !CCommonRegistryData::m_fDisableProjectedShadows )
  {
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, CProjectedShadowCaster *))(*(_QWORD *)this + 64LL))(
      this,
      0LL,
      this);
    CProjectedShadowCaster::RequestRedraw(this);
  }
}
