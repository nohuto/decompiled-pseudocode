/*
 * XREFs of ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x18009F768
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x18009F6C0 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18009F708 (-RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::ProcessUpdate(
        CSolidColorLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SOLIDCOLORLEGACYMILBRUSH *a3)
{
  __m128d v5; // xmm6
  __m128i v6; // xmm7
  __int64 v7; // rdx
  struct CResourceTable *v8; // rdx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __int64 Resource; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int128 v19; // [rsp+4Ch] [rbp-3Ch]

  v5 = *(__m128d *)a3;
  v6 = *((__m128i *)a3 + 1);
  *(_QWORD *)((char *)&v19 + 4) = *((_QWORD *)a3 + 4);
  LODWORD(v19) = v6.m128i_i32[3];
  HIDWORD(v19) = *((_DWORD *)a3 + 10);
  CSolidColorLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  v7 = (unsigned int)_mm_cvtsi128_si32(v6);
  *((_QWORD *)this + 7) = *(_OWORD *)&_mm_unpackhi_pd(v5, v5);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 46LL);
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0x9BCu);
LABEL_16:
      CSolidColorLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( !v6.m128i_i32[1] )
  {
    *((_QWORD *)this + 9) = 0LL;
    goto LABEL_5;
  }
  v15 = CResourceTable::GetResource(a2, v6.m128i_u32[1], 148LL);
  *((_QWORD *)this + 9) = v15;
  if ( !v15 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2003303421, 0x9CFu);
    goto LABEL_16;
  }
LABEL_5:
  v8 = (struct CResourceTable *)v6.m128i_u32[2];
  if ( !v6.m128i_i32[2] )
  {
    *((_QWORD *)this + 10) = 0LL;
    goto LABEL_7;
  }
  v17 = CResourceTable::GetResource(a2, v6.m128i_u32[2], 148LL);
  *((_QWORD *)this + 10) = v17;
  if ( !v17 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003303421, 0x9E1u);
    goto LABEL_16;
  }
LABEL_7:
  *(_OWORD *)((char *)this + 88) = v19;
  v9 = CSolidColorLegacyMilBrush::RegisterNotifiers((struct CResource **)this, v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x9ECu);
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v11;
}
