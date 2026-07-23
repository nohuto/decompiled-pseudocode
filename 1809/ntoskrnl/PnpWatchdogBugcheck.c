/*
 * XREFs of PnpWatchdogBugcheck @ 0x140289F20
 * Callers:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289D7C (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __fastcall __noreturn PnpWatchdogBugcheck(__int64 a1)
{
  unsigned __int64 v1; // rdx
  ULONG_PTR v3; // rbx
  int v4; // ecx
  unsigned __int64 v5; // rdi
  int v6; // ecx
  int v7; // ecx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  ULONG_PTR *v12; // rdx
  unsigned __int16 v13; // ax
  ULONG_PTR v14; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  ULONG_PTR v19; // [rsp+50h] [rbp-30h]
  __int64 *v20; // [rsp+58h] [rbp-28h]
  ULONG_PTR v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+10h] BYREF

  BugCheckParameter1 = 0LL;
  v1 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1;
  BugCheckParameter2 = 0x1504E5057LL;
  v3 = 0LL;
  v16 = *(_DWORD *)(a1 + 200);
  v17 = PnpDeviceEventThread;
  v18 = PnpDeviceActionThread;
  v4 = *(_DWORD *)(a1 + 200);
  v19 = PnpDelayedRemoveWorkerThread;
  v5 = v1 / 0x2710;
  v20 = &PnpDeviceCompletionQueue;
  v21 = ExWorkerQueue;
  v6 = v4 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_16;
      v3 = PnpDelayedRemoveWorkerThread;
      v8 = *(__int64 **)(a1 + 208);
      v9 = *v8;
      v22 = *v8;
      v10 = v8[1];
    }
    else
    {
      v3 = PnpDeviceActionThread;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 16LL);
      v22 = v9;
      if ( !v9 )
        goto LABEL_16;
      v10 = *(_QWORD *)(v9 + 32);
    }
    v23 = v10;
  }
  else
  {
    v3 = PnpDeviceEventThread;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 152LL);
    v23 = v11;
    if ( !v11 )
      goto LABEL_16;
    v9 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
    v22 = v9;
  }
  if ( v9 )
  {
    v12 = *(ULONG_PTR **)(v9 + 64);
    if ( v12 )
    {
      v13 = *(_WORD *)(v9 + 58);
      if ( v13 )
      {
        if ( v13 >= 8u )
        {
          v14 = *v12;
          goto LABEL_17;
        }
        memmove(&BugCheckParameter1, v12, v13);
      }
    }
  }
LABEL_16:
  v14 = BugCheckParameter1;
LABEL_17:
  KeBugCheckEx(0x1D5u, v14, (ULONG_PTR)&BugCheckParameter2, v3, (unsigned int)v5);
}
