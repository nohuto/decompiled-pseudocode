/*
 * XREFs of ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x1800A06F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CEffectGroup::ProcessUpdate(
        CEffectGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTGROUP *a3)
{
  unsigned int v3; // ebx
  struct CResource *v5; // rdx
  unsigned int v8; // esi
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  struct CResource *Resource; // rax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx

  v3 = 0;
  *((_QWORD *)this + 9) = *((_QWORD *)a3 + 1);
  v5 = (struct CResource *)*((_QWORD *)this + 11);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 4);
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    CResource::UnRegisterNotifierInternal(this, v5);
    *((_QWORD *)this + 11) = 0LL;
    v9 = 1;
  }
  v10 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v10 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v10, 149LL);
    *((_QWORD *)this + 11) = Resource;
    if ( Resource )
    {
      v15 = CResource::RegisterNotifier(this, Resource);
      v8 = v15;
      if ( v15 >= 0 )
        goto LABEL_12;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2Fu);
    }
    else
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0x2Bu);
    }
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
  }
  if ( v9 )
  {
LABEL_12:
    v11 = *((_QWORD *)this + 11);
    v3 = 2;
    goto LABEL_7;
  }
  v11 = 0LL;
LABEL_7:
  CResource::NotifyOnChanged(this, v3, v11);
  return v8;
}
