/*
 * XREFs of ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x1801BB1A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1801BBD10 (-RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1801BC230 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::ProcessUpdate(
        CLinearGradientLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEARGRADIENTLEGACYMILBRUSH *a3,
        const void *a4,
        unsigned int a5)
{
  __m128d v8; // xmm6
  __m128i v9; // xmm7
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 Resource; // rax
  int v13; // edi
  __int64 v14; // rax
  struct CResourceTable *v15; // rdx
  __int64 v16; // rax
  void **v17; // r15
  LPVOID v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  _BYTE dwBytes[44]; // [rsp+58h] [rbp-11h]

  v8 = *(__m128d *)a3;
  v9 = *((__m128i *)a3 + 1);
  *(_OWORD *)dwBytes = *((_OWORD *)a3 + 2);
  *(_QWORD *)&dwBytes[32] = *((_QWORD *)a3 + 8);
  *(_OWORD *)&dwBytes[16] = *((_OWORD *)a3 + 3);
  *(_DWORD *)&dwBytes[40] = *((_DWORD *)a3 + 18);
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
  v11 = _mm_cvtsi128_si32(v9);
  *((_QWORD *)this + 9) = *(_OWORD *)&_mm_unpackhi_pd(v8, v8);
  if ( v11 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v11, 0x2Eu);
    *((_QWORD *)this + 10) = Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x4D2u);
LABEL_24:
      CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
      goto LABEL_25;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v9.m128i_i32[1] )
  {
    v14 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[1], 0x94u);
    *((_QWORD *)this + 11) = v14;
    if ( !v14 )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x4E5u);
      goto LABEL_24;
    }
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
  }
  v15 = (struct CResourceTable *)v9.m128i_u32[2];
  if ( v9.m128i_i32[2] )
  {
    v16 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[2], 0x94u);
    *((_QWORD *)this + 12) = v16;
    if ( !v16 )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x4F7u);
      goto LABEL_24;
    }
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = v9.m128i_i32[3];
  *(_QWORD *)((char *)this + 108) = *(_QWORD *)dwBytes;
  *((_OWORD *)this + 8) = *(_OWORD *)&dwBytes[12];
  *((_OWORD *)this + 9) = *(_OWORD *)&dwBytes[28];
  if ( *(_DWORD *)&dwBytes[8] )
  {
    if ( *(_DWORD *)&dwBytes[8] > a5
      || (v10 = 24 * (*(unsigned int *)&dwBytes[8] / 0x18uLL), *(unsigned int *)&dwBytes[8] != v10) )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x50Eu);
      goto LABEL_24;
    }
    v17 = (void **)((char *)this + 120);
    v13 = 0;
    if ( this == (CLinearGradientLegacyMilBrush *)-120LL )
    {
      v13 = -2147024809;
    }
    else
    {
      v18 = HeapAlloc(WPF::g_processHeap, 0, *(unsigned int *)&dwBytes[8]);
      *v17 = v18;
      if ( !v18 )
        v13 = -2147024882;
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v13, 0x514u);
      goto LABEL_24;
    }
    memcpy_0(*v17, a4, *(unsigned int *)&dwBytes[8]);
    *((_DWORD *)this + 29) = *(_DWORD *)&dwBytes[8];
  }
  v19 = CLinearGradientLegacyMilBrush::RegisterNotifiers(this, v15);
  v13 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x520u);
    goto LABEL_24;
  }
LABEL_25:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v13;
}
