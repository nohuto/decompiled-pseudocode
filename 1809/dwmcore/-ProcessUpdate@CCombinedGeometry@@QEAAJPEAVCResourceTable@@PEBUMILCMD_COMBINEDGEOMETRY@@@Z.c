/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1801BACF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1801BC160 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(struct CResource **this, struct CResourceTable *a2, __m128i *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // edx
  struct CResource *Resource; // rax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __m128i v17; // [rsp+30h] [rbp-18h]

  v3 = a3[1].m128i_u32[0];
  v17 = *a3;
  CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 12));
  *((_DWORD *)this + 40) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  if ( v6 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v6, 0x3Bu);
    this[21] = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x1DBu);
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
  if ( v3 )
  {
    v10 = CResourceTable::GetResource((__int64)a2, v3, 0x3Bu);
    this[22] = (struct CResource *)v10;
    if ( !v10 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x1EDu);
      goto LABEL_16;
    }
    Resource = this[21];
  }
  else
  {
    this[22] = 0LL;
  }
  v12 = CResource::RegisterNotifier((CResource *)this, Resource);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x209u);
  }
  else
  {
    v14 = CResource::RegisterNotifier((CResource *)this, this[22]);
    v9 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x20Au);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v9, 0x1F6u);
    goto LABEL_16;
  }
LABEL_17:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v9;
}
