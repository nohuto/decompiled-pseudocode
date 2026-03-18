/*
 * XREFs of ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180073674
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180073854 (-RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18009EBB0 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::ProcessUpdate(
        CImageLegacyMilBrush *this,
        struct CResourceTable *a2,
        __m128i *a3)
{
  unsigned __int32 v3; // esi
  __m128d v6; // xmm6
  __m128i v7; // xmm7
  __int64 v8; // rdx
  struct CResourceTable *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 Resource; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ecx
  _BYTE v26[48]; // [rsp+58h] [rbp-29h]
  __m128i v27; // [rsp+88h] [rbp+7h]
  __m128i v28; // [rsp+98h] [rbp+17h]

  v3 = a3[7].m128i_u32[0];
  *(__m128i *)v26 = a3[2];
  v6 = (__m128d)*a3;
  *(__m128i *)&v26[32] = a3[4];
  v7 = a3[1];
  *(__m128i *)&v26[16] = a3[3];
  v28 = a3[6];
  v27 = a3[5];
  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  v8 = (unsigned int)_mm_cvtsi128_si32(v7);
  *((_QWORD *)this + 15) = *(_OWORD *)&_mm_unpackhi_pd(v6, v6);
  if ( (_DWORD)v8 )
  {
    Resource = CResourceTable::GetResource(a2, v8, 46LL);
    *((_QWORD *)this + 16) = Resource;
    if ( !Resource )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2003303421, 0x41Bu);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( v7.m128i_i32[1] )
  {
    v20 = CResourceTable::GetResource(a2, v7.m128i_u32[1], 148LL);
    *((_QWORD *)this + 17) = v20;
    if ( !v20 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2003303421, 0x42Eu);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( v7.m128i_i32[2] )
  {
    v22 = CResourceTable::GetResource(a2, v7.m128i_u32[2], 148LL);
    *((_QWORD *)this + 18) = v22;
    if ( !v22 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2003303421, 0x440u);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_DWORD *)this + 38) = v7.m128i_i32[3];
  *((_DWORD *)this + 39) = *(_DWORD *)v26;
  *((_OWORD *)this + 10) = *(_OWORD *)&v26[4];
  if ( !*(_DWORD *)&v26[20] )
  {
    *((_QWORD *)this + 22) = 0LL;
    goto LABEL_9;
  }
  v16 = CResourceTable::GetResource(a2, *(unsigned int *)&v26[20], 121LL);
  *((_QWORD *)this + 22) = v16;
  if ( !v16 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2003303421, 0x456u);
LABEL_31:
    CImageLegacyMilBrush::UnRegisterNotifiers(this);
    goto LABEL_16;
  }
LABEL_9:
  v9 = (struct CResourceTable *)*(unsigned int *)&v26[40];
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)&v26[24];
  if ( !*(_DWORD *)&v26[40] )
  {
    *((_QWORD *)this + 25) = 0LL;
    goto LABEL_11;
  }
  v24 = CResourceTable::GetResource(a2, *(unsigned int *)&v26[40], 121LL);
  *((_QWORD *)this + 25) = v24;
  if ( !v24 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2003303421, 0x46Bu);
    goto LABEL_31;
  }
LABEL_11:
  *((_DWORD *)this + 52) = *(_DWORD *)&v26[44];
  *(__m128i *)((char *)this + 212) = v27;
  *(__m128i *)((char *)this + 232) = v28;
  if ( !v3 )
  {
    *((_QWORD *)this + 31) = 0LL;
    goto LABEL_15;
  }
  v10 = CResourceTable::GetResource(a2, v3, 78LL);
  if ( v10 )
    v10 -= 16LL;
  *((_QWORD *)this + 31) = v10;
  if ( !v10 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x485u);
    goto LABEL_31;
  }
LABEL_15:
  v12 = CImageLegacyMilBrush::RegisterNotifiers(this, v9);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x48Eu);
    goto LABEL_31;
  }
LABEL_16:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v14;
}
