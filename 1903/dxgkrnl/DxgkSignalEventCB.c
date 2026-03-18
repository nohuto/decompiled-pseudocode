/*
 * XREFs of DxgkSignalEventCB @ 0x1C022AA60
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02385E8 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003D3FC (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DxgkSignalEventCB(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // rbx
  struct _MDL *v9; // r9
  struct _KPROCESS *v10; // r8
  struct VMBCHANNEL__ *v11; // rcx
  struct _LIST_ENTRY *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  PVOID v22; // rbx
  __int64 v23; // rax
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-38h] BYREF

  LODWORD(v4) = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v6 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = 10778LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 299) & 8) != 0 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 432LL);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 96));
      if ( *(_BYTE *)(v8 + 136) )
      {
        v10 = *(struct _KPROCESS **)(v5 + 480);
        v11 = *(struct VMBCHANNEL__ **)(v8 + 88);
        v12 = *(struct _LIST_ENTRY **)(a1 + 8);
        *(_DWORD *)&ApcState.KernelApcPending = 0;
        *(_WORD *)(&ApcState.42 + 3) = 0;
        ApcState.ApcListHead[1].Flink = v10 != 0LL ? (struct _LIST_ENTRY *)3 : 0;
        *((_BYTE *)&ApcState.42 + 5) = 0;
        ApcState.ApcListHead[0].Flink = 0LL;
        ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)0x200000000LL;
        ApcState.ApcListHead[1].Blink = v12;
        ApcState.Process = v10;
        ApcState.InProgressFlags = 0;
        v13 = VmBusSendAsyncMessage(v11, (struct DXGKVMB_COMMAND_BASE *)&ApcState, (const GUID *)v10, v9);
        v4 = v13;
        if ( v13 < 0 )
        {
          v17 = WdLogNewEntry5_WdError(v15, v14, v16);
          *(_QWORD *)(v17 + 24) = v4;
          WdLogEvent5_WdError(v17);
        }
      }
      ExReleasePushLockSharedEx(v8 + 96, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*(PRKPROCESS *)(v5 + 56), &ApcState);
      v18 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 8), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v22 = Object;
      LODWORD(v4) = v18;
      if ( v18 < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v23 + 24) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(v23 + 32) = v5;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        KeSetEvent((PRKEVENT)Object, 0, 0);
        ObfDereferenceObject(v22);
      }
      KeUnstackDetachProcess(&ApcState);
    }
    return (unsigned int)v4;
  }
}
