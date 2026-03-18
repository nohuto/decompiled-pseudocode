/*
 * XREFs of ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x1800ACD20
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800AA8E0 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800ACEA8 (-RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::ProcessUpdate(
        CImageLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_IMAGELEGACYMILBRUSH *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  struct CResourceTable *v11; // rdx
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 Resource; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx

  CImageLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x39u);
    *((_QWORD *)this + 16) = Resource;
    if ( !Resource )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, 0x88980403, 0x30Eu, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 )
  {
    v23 = CResourceTable::GetResource((__int64)a2, v7, 0xB3u);
    *((_QWORD *)this + 17) = v23;
    if ( !v23 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, 0x88980403, 0x321u, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 17) = 0LL;
  }
  v8 = *((_DWORD *)a3 + 5);
  if ( v8 )
  {
    v25 = CResourceTable::GetResource((__int64)a2, v8, 0xB3u);
    *((_QWORD *)this + 18) = v25;
    if ( !v25 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, 0x88980403, 0x333u, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 7);
  *((_OWORD *)this + 10) = *((_OWORD *)a3 + 2);
  v9 = *((_DWORD *)a3 + 12);
  if ( v9 )
  {
    v19 = CResourceTable::GetResource((__int64)a2, v9, 0x8Au);
    *((_QWORD *)this + 22) = v19;
    if ( !v19 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, 0x88980403, 0x349u, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 22) = 0LL;
  }
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)a3 + 52);
  v10 = *((_DWORD *)a3 + 17);
  if ( v10 )
  {
    v27 = CResourceTable::GetResource((__int64)a2, v10, 0x8Au);
    *((_QWORD *)this + 25) = v27;
    if ( !v27 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, 0x88980403, 0x35Eu, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 25) = 0LL;
  }
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 18);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 19);
  *((_DWORD *)this + 54) = *((_DWORD *)a3 + 20);
  *((_DWORD *)this + 55) = *((_DWORD *)a3 + 21);
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 22);
  *((_DWORD *)this + 57) = *((_DWORD *)a3 + 23);
  *((_DWORD *)this + 58) = *((_DWORD *)a3 + 24);
  v11 = (struct CResourceTable *)*((unsigned int *)a3 + 25);
  if ( !(_DWORD)v11 )
  {
    *((_QWORD *)this + 30) = 0LL;
    goto LABEL_13;
  }
  v16 = CResourceTable::GetResource((__int64)a2, (unsigned int)v11, 0x52u);
  if ( v16 )
    v18 = v16 - 16;
  else
    v18 = 0LL;
  *((_QWORD *)this + 30) = v18;
  if ( !v18 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x88980403, 0x379u, 0LL);
LABEL_31:
    CImageLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
    goto LABEL_14;
  }
LABEL_13:
  v12 = CImageLegacyMilBrush::RegisterNotifiers(this, v11);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x382u, 0LL);
    goto LABEL_31;
  }
LABEL_14:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v14;
}
