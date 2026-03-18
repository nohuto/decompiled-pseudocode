/*
 * XREFs of ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800A0044
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x18009FF00 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x18009FF5C (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisualReferenceController::ProcessUpdate(
        CVisualReferenceController *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUALREFERENCECONTROLLER *a3)
{
  unsigned int v3; // edi
  struct CResourceTable *v6; // rdx
  __int64 Resource; // rax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi

  v3 = *((_DWORD *)a3 + 2);
  CVisualReferenceController::UnRegisterNotifiers(this);
  if ( v3 )
  {
    Resource = CResourceTable::GetResource(a2, v3, 157LL);
    *((_QWORD *)this + 7) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xD08u);
LABEL_8:
      CVisualReferenceController::UnRegisterNotifiers(this);
      goto LABEL_4;
    }
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = CVisualReferenceController::RegisterNotifiers(this, v6);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD11u);
    goto LABEL_8;
  }
LABEL_4:
  CResource::NotifyOnChanged(this, 0LL, this);
  return v11;
}
