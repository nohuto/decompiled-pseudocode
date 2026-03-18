/*
 * XREFs of ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180028FD8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x180029A90 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18002B3F0 (-RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::ProcessUpdate(
        CImageLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_IMAGELEGACYMILBRUSH *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct CResourceTable *v11; // rdx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 Resource; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // ecx

  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  v6 = *((unsigned int *)a3 + 3);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 57LL);
    *((_QWORD *)this + 16) = Resource;
    if ( !Resource )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2003303421, 0x30Eu, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  v7 = *((unsigned int *)a3 + 4);
  if ( (_DWORD)v7 )
  {
    v23 = CResourceTable::GetResource(a2, v7, 179LL);
    *((_QWORD *)this + 17) = v23;
    if ( !v23 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2003303421, 0x321u, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 17) = 0LL;
  }
  v8 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v8 )
  {
    v25 = CResourceTable::GetResource(a2, v8, 179LL);
    *((_QWORD *)this + 18) = v25;
    if ( !v25 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2003303421, 0x333u, 0LL);
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
  v9 = *((unsigned int *)a3 + 12);
  if ( (_DWORD)v9 )
  {
    v19 = CResourceTable::GetResource(a2, v9, 138LL);
    *((_QWORD *)this + 22) = v19;
    if ( !v19 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2003303421, 0x349u, 0LL);
      goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 22) = 0LL;
  }
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)a3 + 52);
  v10 = *((unsigned int *)a3 + 17);
  if ( (_DWORD)v10 )
  {
    v27 = CResourceTable::GetResource(a2, v10, 138LL);
    *((_QWORD *)this + 25) = v27;
    if ( !v27 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2003303421, 0x35Eu, 0LL);
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
  v16 = CResourceTable::GetResource(a2, v11, 82LL);
  if ( v16 )
    v18 = v16 - 16;
  else
    v18 = 0LL;
  *((_QWORD *)this + 30) = v18;
  if ( !v18 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2003303421, 0x379u, 0LL);
LABEL_31:
    CImageLegacyMilBrush::UnRegisterNotifiers(this);
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
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v14;
}
