/*
 * XREFs of ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1801F4BB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180080284 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProxyGeometry::ProcessSetViewBox(
        CProxyGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROXYGEOMETRY_SETVIEWBOX *a3)
{
  unsigned int v4; // edi
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r8

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         187LL) )
  {
    *((_DWORD *)this + 8) |= 1u;
    *((_QWORD *)this + 18) = v6;
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v8 = *((_QWORD *)this + 3);
    if ( (v8 & 2) != 0 )
      v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v9 = *((_QWORD *)this + 3) & 1LL;
    CPtrArrayBase::InsertAt((CProxyGeometry *)((char *)this + 24), *((_QWORD *)this + 18), v9);
    *((_BYTE *)this + 128) = *((_QWORD *)this + 18) != 0LL;
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x88980403, 0x58u, 0LL);
  }
  return v4;
}
