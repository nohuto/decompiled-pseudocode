/*
 * XREFs of ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x180211EF4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x18002A77C (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18021275C (-RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1802129E0 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::ProcessUpdate(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEARGRADIENTLEGACYMILBRUSH *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 Resource; // rax
  unsigned int v12; // edi
  unsigned int v13; // edx
  __int64 v14; // rax
  struct CResourceTable *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-18h]

  CLinearGradientLegacyMilBrush::UnRegisterNotifiers((CLinearGradientLegacyMilBrush *)this);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a3 + 3);
  if ( v10 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v10, 0x39u);
    this[10] = (void *)Resource;
    if ( !Resource )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x3C2u, 0LL);
LABEL_21:
      CLinearGradientLegacyMilBrush::UnRegisterNotifiers((CLinearGradientLegacyMilBrush *)this);
      goto LABEL_22;
    }
  }
  else
  {
    this[10] = 0LL;
  }
  v13 = *((_DWORD *)a3 + 4);
  if ( v13 )
  {
    v14 = CResourceTable::GetResource((__int64)a2, v13, 0xB3u);
    this[11] = (void *)v14;
    if ( !v14 )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x3D5u, 0LL);
      goto LABEL_21;
    }
  }
  else
  {
    this[11] = 0LL;
  }
  v15 = (struct CResourceTable *)*((unsigned int *)a3 + 5);
  if ( (_DWORD)v15 )
  {
    v16 = CResourceTable::GetResource((__int64)a2, (unsigned int)v15, 0xB3u);
    this[12] = (void *)v16;
    if ( !v16 )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x3E7u, 0LL);
      goto LABEL_21;
    }
  }
  else
  {
    this[12] = 0LL;
  }
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 8);
  *((_OWORD *)this + 8) = *(_OWORD *)((char *)a3 + 40);
  *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 56);
  v17 = *((_DWORD *)a3 + 9);
  if ( v17 )
  {
    if ( v17 > a5 || (v9 = v17, v17 != 24 * (v17 / 0x18uLL)) )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x3FEu, 0LL);
      goto LABEL_21;
    }
    v18 = HrAlloc(v17, this + 15);
    v12 = v18;
    if ( v18 < 0 )
    {
      v21 = 1027;
      goto LABEL_20;
    }
    memcpy_0(this[15], a4, *((unsigned int *)a3 + 9));
    *((_DWORD *)this + 29) = *((_DWORD *)a3 + 9);
  }
  v18 = CLinearGradientLegacyMilBrush::RegisterNotifiers((CLinearGradientLegacyMilBrush *)this, v15);
  v12 = v18;
  if ( v18 < 0 )
  {
    v21 = 1039;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, v21, 0LL);
    goto LABEL_21;
  }
LABEL_22:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v12;
}
