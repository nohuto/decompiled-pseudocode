/*
 * XREFs of Broadcast @ 0x1C0053ABC
 * Callers:
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0053754 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x1C0131BA0 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00558DC (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0056A38 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void Broadcast()
{
  InputExtensibilityCallout *v0; // rdi
  char *v1; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // r14
  __int64 v3; // rdx
  struct _SINGLE_LIST_ENTRY *v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned int v6; // esi
  char *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  int v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  _QWORD v22[12]; // [rsp+40h] [rbp-68h] BYREF

  v0 = gpInputExtensibilityCallout;
  v1 = (char *)gpInputExtensibilityCallout + 24;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v0, 7LL);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v0 )
  {
    Next = gpInputConfig->Next;
    CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
      (CInpLockSharedIfNeeded *)&v18,
      (struct CInpPushLock *)&CInputConfig::slock);
    while ( 1 )
    {
      v4 = Next + 1;
      if ( ((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL)) == 0 )
        break;
      v5 = 72LL * (unsigned int)(*(_DWORD *)(((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL)) + 0xC) - 1);
      if ( v5 > 0xFFFFFFFF || (unsigned int)(v5 + 92) < 0x5C )
        v6 = 0;
      else
        v6 = v5 + 92;
      if ( v6 < 0x5C )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3);
      v7 = (char *)Win32AllocPoolZInit(v6, 0x6F436E49u);
      v8 = (__int64)v7;
      if ( !v7 )
        break;
      *(_DWORD *)v7 = 0;
      v9 = 0LL;
      v10 = *(unsigned int *)(((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL)) + 8);
      *(_QWORD *)(v7 + 4) = *(_QWORD *)((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL));
      *((_DWORD *)v7 + 3) = v10;
      *((_DWORD *)v7 + 4) = *(_DWORD *)(((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL)) + 0xC);
      if ( *(_DWORD *)(((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL)) + 0xC) )
      {
        do
        {
          v11 = *(_QWORD *)(((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL)) + 0x10);
          v10 = 10 * v9;
          v12 = *(_OWORD *)(v11 + 80 * v9);
          v13 = *(_OWORD *)(v11 + 80 * v9 + 16);
          v14 = *(_OWORD *)(v11 + 80 * v9 + 32);
          v15 = *(_OWORD *)(v11 + 80 * v9 + 48);
          v16 = *(_QWORD *)(v11 + 80 * v9 + 64);
          v17 = 9 * v9;
          *(_OWORD *)(v8 + 8 * v17 + 20) = v12;
          v9 = (unsigned int)(v9 + 1);
          *(_OWORD *)(v8 + 8 * v17 + 36) = v13;
          *(_OWORD *)(v8 + 8 * v17 + 52) = v14;
          *(_OWORD *)(v8 + 8 * v17 + 68) = v15;
          *(_QWORD *)(v8 + 8 * v17 + 84) = v16;
        }
        while ( (_DWORD)v9 != *(_DWORD *)(((unsigned __int64)&Next[1] & -(__int64)(Next != 0LL)) + 0xC) );
      }
      InputExtensibilityCallout::CoreMsgSendMessage(v10, 7LL, v8, v6, v18, v19, v20, v21, v22[0]);
      Win32FreePool(v8);
      Next = Next->Next;
    }
    if ( !(_BYTE)v19 )
    {
      ExReleasePushLockSharedEx(v18, 0LL);
      KeLeaveCriticalRegion();
    }
    LODWORD(v22[0]) = 1;
    ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64, _QWORD *, __int64, _DWORD, int, __int64, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
      v4,
      7LL,
      v22,
      92LL,
      v18,
      v19,
      v20,
      v21);
  }
}
