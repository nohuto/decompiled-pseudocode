/*
 * XREFs of DxgkSignalEventCB @ 0x1C01FA8F0
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0206C1C (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003702C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DxgkSignalEventCB(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rbx
  struct _KPROCESS *v7; // r8
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  PVOID v15; // rbx
  __int64 v16; // rax
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-38h] BYREF

  LODWORD(v1) = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 10754LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 323) & 8) != 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 456) + 456LL);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 96));
      if ( *(_BYTE *)(v6 + 136) )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        v7 = *(struct _KPROCESS **)(v3 + 504);
        ApcState.ApcListHead[0].Flink = 0LL;
        ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)0x200000000LL;
        v8 = *(struct VMBCHANNEL__ **)(v6 + 88);
        ApcState.ApcListHead[1].Blink = *(struct _LIST_ENTRY **)(a1 + 8);
        LODWORD(ApcState.ApcListHead[1].Flink) = v7 != 0LL ? 3 : 0;
        ApcState.Process = v7;
        ApcState.InProgressFlags = 0;
        v10 = VmBusSendAsyncMessage(v8, (struct DXGKVMB_COMMAND_BASE *)&ApcState, (const GUID *)v7, v9);
        v1 = v10;
        if ( v10 < 0 )
        {
          v12 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v12 + 24) = v1;
          WdLogEvent5_WdError(v12);
        }
      }
      ExReleasePushLockSharedEx(v6 + 96, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
      v13 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 8), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v15 = Object;
      LODWORD(v1) = v13;
      if ( v13 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v16 + 24) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(v16 + 32) = v3;
        WdLogEvent5_WdError(v16);
      }
      else
      {
        KeSetEvent((PRKEVENT)Object, 0, 0);
        ObfDereferenceObject(v15);
      }
      KeUnstackDetachProcess(&ApcState);
    }
    return (unsigned int)v1;
  }
}
