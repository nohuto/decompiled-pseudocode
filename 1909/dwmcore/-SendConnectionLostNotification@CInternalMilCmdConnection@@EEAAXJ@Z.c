/*
 * XREFs of ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x180155AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180056CF8 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800AA7C4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

void __fastcall CInternalMilCmdConnection::SendConnectionLostNotification(CInternalMilCmdConnection *this)
{
  unsigned int i; // edi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v3; // rbx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v4; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  for ( i = 1; i < *((_DWORD *)this + 19); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CInternalMilCmdConnection *)((char *)this + 64), i)
      && (int)CChannelTable::GetMasterTableEntry((CInternalMilCmdConnection *)((char *)this + 64), i, &v4) >= 0 )
    {
      v3 = v4;
      SetEvent(*(HANDLE *)(*((_QWORD *)v4 + 1) + 80LL));
      SetEvent(*((HANDLE *)v3 + 2));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
