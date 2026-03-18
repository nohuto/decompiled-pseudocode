/*
 * XREFs of PnpWatchdogBugcheck @ 0x14029FDB0
 * Callers:
 *     PnpCancelWatchdog @ 0x1400EFCD0 (PnpCancelWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FA78 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

void __fastcall __noreturn PnpWatchdogBugcheck(__int64 a1)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // kr00_8
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  ULONG_PTR *v11; // rdx
  unsigned __int16 v12; // ax
  ULONG_PTR v13; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+38h] [rbp-48h]
  int v16; // [rsp+3Ch] [rbp-44h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  ULONG_PTR v18; // [rsp+48h] [rbp-38h]
  ULONG_PTR v19; // [rsp+50h] [rbp-30h]
  __int64 *v20; // [rsp+58h] [rbp-28h]
  ULONG_PTR v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+10h] BYREF

  v16 = 0;
  v22 = 0LL;
  v2 = 0LL;
  v23 = 0LL;
  BugCheckParameter1 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1;
  v15 = *(_DWORD *)(a1 + 200);
  v17 = PnpDeviceEventThread;
  v18 = PnpDeviceActionThread;
  v4 = *(_DWORD *)(a1 + 200);
  v19 = PnpDelayedRemoveWorkerThread;
  v20 = &PnpDeviceCompletionQueue;
  v21 = ExWorkerQueue;
  BugCheckParameter2 = 0x1504E5057LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_16;
      v2 = PnpDelayedRemoveWorkerThread;
      v7 = *(__int64 **)(a1 + 264);
      v8 = *v7;
      v22 = *v7;
      v9 = v7[1];
    }
    else
    {
      v2 = PnpDeviceActionThread;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 16LL);
      v22 = v8;
      if ( !v8 )
        goto LABEL_16;
      v9 = *(_QWORD *)(v8 + 32);
    }
    *(_QWORD *)&v23 = v9;
  }
  else
  {
    v2 = PnpDeviceEventThread;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 152LL);
    *(_QWORD *)&v23 = v10;
    if ( !v10 )
      goto LABEL_16;
    v8 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
    v22 = v8;
  }
  if ( v8 )
  {
    v11 = *(ULONG_PTR **)(v8 + 64);
    if ( v11 )
    {
      v12 = *(_WORD *)(v8 + 58);
      if ( v12 )
      {
        if ( v12 >= 8u )
        {
          v13 = *v11;
          goto LABEL_17;
        }
        memmove(&BugCheckParameter1, v11, v12);
      }
    }
  }
LABEL_16:
  v13 = BugCheckParameter1;
LABEL_17:
  KeBugCheckEx(0x1D5u, v13, (ULONG_PTR)&BugCheckParameter2, v2, (unsigned int)(v3 / 0x2710));
}
