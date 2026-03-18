/*
 * XREFs of ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800AA630
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800AA58C (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800ABDB0 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 */

__int64 __fastcall CVisualReferenceController::ProcessUpdate(
        CVisualReferenceController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALREFERENCECONTROLLER *a3)
{
  struct CResourceTable *v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  CVisualReferenceController::UnRegisterNotifiers(this);
  v6 = (struct CResourceTable *)*((unsigned int *)a3 + 2);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, (unsigned int)v6, 0xBDu);
    *((_QWORD *)this + 7) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x77Au, 0LL);
LABEL_8:
      CVisualReferenceController::UnRegisterNotifiers(this);
      goto LABEL_4;
    }
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = CVisualReferenceController::RegisterNotifiers((struct CResource **)this, v6);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x783u, 0LL);
    goto LABEL_8;
  }
LABEL_4:
  CResource::NotifyOnChanged(this, 0LL, this);
  return v11;
}
