/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1802103EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180211200 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMBINEDGEOMETRY *a3)
{
  unsigned int v6; // edx
  struct CResource *Resource; // rax
  __int64 v8; // rcx
  signed int v9; // edi
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx

  CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  if ( v6 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v6, 0x3Eu);
    this[21] = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x138u, 0LL);
LABEL_16:
      CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
      goto LABEL_17;
    }
  }
  else
  {
    this[21] = 0LL;
    Resource = 0LL;
  }
  v10 = *((_DWORD *)a3 + 4);
  if ( v10 )
  {
    v11 = CResourceTable::GetResource((__int64)a2, v10, 0x3Eu);
    this[22] = (struct CResource *)v11;
    if ( !v11 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x88980403, 0x14Au, 0LL);
      goto LABEL_16;
    }
    Resource = this[21];
  }
  else
  {
    this[22] = 0LL;
  }
  v13 = CResource::RegisterNotifier((CResource *)this, Resource);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x166u, 0LL);
  }
  else
  {
    v15 = CResource::RegisterNotifier((CResource *)this, this[22]);
    v9 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x167u, 0LL);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v9, 0x153u, 0LL);
    goto LABEL_16;
  }
LABEL_17:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v9;
}
