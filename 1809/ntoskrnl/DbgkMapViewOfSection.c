/*
 * XREFs of DbgkMapViewOfSection @ 0x14067747C
 * Callers:
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     MiMapViewOfSectionExCommon @ 0x140676C10 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x140676FB0 (NtMapViewOfSection.c)
 *     NtLoadEnclaveData @ 0x14085AFB0 (NtLoadEnclaveData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DAE0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x140810BB4 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1408115A8 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x14081164C (DbgkpSuppressDbgMsg.c)
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
