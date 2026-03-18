/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x180028E28
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18002B4B0 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18002B850 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800D0EC8 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE *a3)
{
  CCachedVisualImage *v3; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 Resource; // rax
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // ecx

  v3 = (CCachedVisualImage *)((char *)this + 16);
  CCachedVisualImage::UnRegisterNotifiers((CCachedVisualImage *)((char *)this + 16));
  *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 8);
  v7 = *((unsigned int *)a3 + 10);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 138LL);
    *((_QWORD *)this + 20) = Resource;
    if ( !Resource )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2003303421, 0x6Fu, 0LL);
LABEL_26:
      CCachedVisualImage::UnRegisterNotifiers(v3);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 20) = 0LL;
  }
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 24);
  v8 = *((unsigned int *)a3 + 11);
  if ( !(_DWORD)v8 )
  {
    *((_QWORD *)this + 23) = 0LL;
    goto LABEL_5;
  }
  v22 = CResourceTable::GetResource(a2, v8, 169LL);
  *((_QWORD *)this + 23) = v22;
  if ( !v22 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2003303421, 0x83u, 0LL);
    goto LABEL_26;
  }
LABEL_5:
  v9 = *((unsigned int *)a3 + 12);
  if ( !(_DWORD)v9 )
  {
    *((_QWORD *)this + 24) = 0LL;
    goto LABEL_11;
  }
  v10 = CResourceTable::GetResource(a2, v9, 189LL);
  *((_QWORD *)this + 24) = v10;
  if ( !v10 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x96u, 0LL);
    goto LABEL_26;
  }
  if ( *((_BYTE *)this + 378) )
  {
    *((_BYTE *)this + 378) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
  if ( *((_BYTE *)this + 376) )
  {
    *((_BYTE *)this + 376) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
LABEL_11:
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 51) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 52) = *((unsigned __int8 *)a3 + 60);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 16);
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 17);
  CCachedVisualImage::ChoosePixelFormat(this);
  v12 = CResource::RegisterNotifier(v3, *((struct CResource **)this + 24));
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE7u, 0LL);
  }
  else
  {
    v15 = CResource::RegisterNotifier(v3, *((struct CResource **)this + 20));
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE8u, 0LL);
    }
    else
    {
      v17 = CResource::RegisterNotifier(v3, *((struct CResource **)this + 23));
      v14 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xE9u, 0LL);
    }
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v14, 0xB4u, 0LL);
    goto LABEL_26;
  }
LABEL_16:
  CResource::NotifyOnChanged(v3, 0LL, 0LL);
  return (unsigned int)v14;
}
