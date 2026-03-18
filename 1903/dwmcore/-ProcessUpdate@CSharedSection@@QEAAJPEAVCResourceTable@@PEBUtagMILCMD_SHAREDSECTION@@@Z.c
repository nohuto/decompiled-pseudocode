/*
 * XREFs of ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTION@@@Z @ 0x180029A5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSharedSection::ProcessUpdate(
        CSharedSection *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTION *a3)
{
  *((_QWORD *)this + 7) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 16) = *((_DWORD *)a3 + 4);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
