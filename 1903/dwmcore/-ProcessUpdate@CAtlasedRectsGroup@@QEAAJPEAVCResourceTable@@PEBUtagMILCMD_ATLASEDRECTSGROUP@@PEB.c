/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180029E28
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x18002AE80 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007FD24 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800C8ED0 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 */

__int64 __fastcall CAtlasedRectsGroup::ProcessUpdate(
        struct CResource ***this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ATLASEDRECTSGROUP *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  __int64 Resource; // rax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  struct CResource **v19; // [rsp+70h] [rbp+18h] BYREF

  CAtlasedRectsGroup::UnRegisterNotifiers((CAtlasedRectsGroup *)this);
  v9 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v9 )
  {
    Resource = CResourceTable::GetResource(a2, v9, 82LL);
    if ( Resource )
      Resource -= 16LL;
    this[7] = (struct CResource **)Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x3Bu, 0LL);
LABEL_17:
      CAtlasedRectsGroup::UnRegisterNotifiers((CAtlasedRectsGroup *)this);
      goto LABEL_10;
    }
  }
  else
  {
    this[7] = 0LL;
  }
  v13 = CResource::UnmarshalResourceArray(a4, a5, *((unsigned int *)a3 + 3), 7LL, this + 8, &v19, a2, 1);
  this[9] = v19;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, 0x4Eu, 0LL);
    goto LABEL_17;
  }
  v14 = CResource::RegisterNotifier(
          (CResource *)this,
          (struct CResource *)((unsigned __int64)(this[7] + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)this[7] >> 64)));
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x64u, 0LL);
  }
  else
  {
    v16 = CResource::RegisterNNotifiersInternal((CResource *)this, this[9], *((unsigned int *)this + 16));
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x65u, 0LL);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v13, 0x51u, 0LL);
    goto LABEL_17;
  }
LABEL_10:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
