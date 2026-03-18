/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180004130
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x18000406C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020300 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180077D38 (--1CVisual@@MEAA@XZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007B730 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800B9BD0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x1801F0F7C (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x1801F1150 (-ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCA.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180004BB0 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
