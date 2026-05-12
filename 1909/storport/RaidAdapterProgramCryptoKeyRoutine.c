/*
 * XREFs of RaidAdapterProgramCryptoKeyRoutine @ 0x1C0035680
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003484 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034E0 (RaidAdapterExecuteXrb.c)
 *     RaidAdapterRequestComplete @ 0x1C00057F0 (RaidAdapterRequestComplete.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C0036950 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     WPP_SF_qD @ 0x1C0038D8C (WPP_SF_qD.c)
 *     WPP_SF_qDD @ 0x1C0038DE0 (WPP_SF_qDD.c)
 */

void __fastcall RaidAdapterProgramCryptoKeyRoutine(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // ebp
  PSLIST_ENTRY EntrySList; // r14
  int v5; // r15d
  unsigned __int64 v8; // rbx
  int v9; // eax
  KIRQL v10; // al
  KIRQL v11; // di
  _SLIST_ENTRY *v12; // rbx
  struct _SLIST_ENTRY *Next; // rax
  _SLIST_ENTRY *v14; // rbp
  __int64 v15; // rdi
  _SLIST_ENTRY *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax

  v3 = 0;
  EntrySList = 0LL;
  v5 = 0;
  if ( Context )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qD(
        WPP_GLOBAL_Control->AttachedDevice,
        70LL,
        &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
        *Context,
        *((_DWORD *)Context + 2));
    }
    v8 = *(_QWORD *)(*Context + 5648LL) + ((unsigned __int64)*((unsigned int *)Context + 2) << 6);
    v9 = RaidAdapterSendCryptoOperationSynchronously(*Context, Context, Context + 2);
    v3 = v9;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, 71LL, IoWorkItem, *Context, *((_DWORD *)Context + 2), v9);
    }
    if ( v3 >= 0 )
    {
      v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5656LL));
      *(_DWORD *)(v8 + 44) = 2;
      v11 = v10;
      EntrySList = FirstEntrySList((PSLIST_HEADER)(v8 + 48));
      InitializeSListHead((PSLIST_HEADER)(v8 + 48));
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5656LL), v11);
    }
  }
  v12 = 0LL;
  if ( EntrySList )
  {
    do
    {
      Next = EntrySList->Next;
      EntrySList->Next = v12;
      v12 = EntrySList;
      EntrySList = Next;
    }
    while ( Next );
  }
  if ( v3 >= 0 && v12 )
  {
    do
    {
      v14 = v12->Next;
      v15 = (__int64)&v12[-2];
      v12->Next = 0LL;
      v16 = v12 - 2;
      v17 = *Context;
      v12 = v14;
      if ( *(_BYTE *)(*Context + 4450LL) )
        v18 = RaidAdapterRaiseIrqlAndExecuteXrb(v17, (__int64)v16);
      else
        v18 = RaidAdapterExecuteXrb(v17, v16, (__int64)IoWorkItem);
      if ( v18 < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(v15 + 168) + 3LL) = 4;
        RaidAdapterRequestComplete(*Context, v15, 1);
      }
      ++v5;
    }
    while ( v14 );
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, 72LL, IoWorkItem, *Context, *((_DWORD *)Context + 2), v5);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( Context )
    ExFreePoolWithTag(Context, 0x72436152u);
}
