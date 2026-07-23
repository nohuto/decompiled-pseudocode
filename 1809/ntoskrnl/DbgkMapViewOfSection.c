/*
 * XREFs of DbgkMapViewOfSection @ 0x14067863C
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     MiMapViewOfSectionExCommon @ 0x140677DD0 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x140678170 (NtMapViewOfSection.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1408127A8 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x14081284C (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(_KPROCESS *Object, __int64 a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rcx
  struct _KTHREAD *v8; // rbx
  void *Teb; // rbx
  HANDLE Handle; // [rsp+60h] [rbp-108h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v7 = KeGetCurrentThread();
    LODWORD(CurrentThread) = *((_DWORD *)&v7[1].SwapListEntry + 2);
    if ( ((unsigned __int8)CurrentThread & 4) == 0 )
    {
      if ( Object[1].ActiveProcessors.Bitmap[6] )
      {
        v8 = KeGetCurrentThread();
        if ( (v8->MiscFlags & 0x400) != 0 || v8->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = v8->Teb;
        if ( !Teb
          || Object != v7->Process
          || (LODWORD(CurrentThread) = DbgkpSuppressDbgMsg(Teb), !(_DWORD)CurrentThread) )
        {
          if ( a2 )
            Handle = (HANDLE)DbgkpSectionToFileHandle(a2);
          else
            Handle = 0LL;
          if ( a3 )
            RtlImageNtHeader(a3);
          LODWORD(CurrentThread) = DbgkpSendApiMessage(Object);
          if ( Handle )
            LODWORD(CurrentThread) = ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return (int)CurrentThread;
}
