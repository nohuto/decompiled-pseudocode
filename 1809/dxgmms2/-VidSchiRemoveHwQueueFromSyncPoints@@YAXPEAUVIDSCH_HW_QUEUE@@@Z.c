/*
 * XREFs of ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00352D0
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C0037BD0 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiRemoveHwQueueFromSyncPoints(struct VIDSCH_HW_QUEUE *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  _QWORD *v5; // rbx
  __int64 *v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r9
  _BYTE v10[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = *(_QWORD **)(*((_QWORD *)a1 + 5) + 8LL);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v10, (unsigned __int64 *)(v5[4] + 1648LL), a3, 0);
  v6 = (__int64 *)v5[163];
  if ( v6 != v5 + 163 )
  {
    do
    {
      v7 = *((_DWORD *)v6 + 32);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = v6[9];
        while ( *(struct VIDSCH_HW_QUEUE **)(v9 + 24 * v8) != a1 )
        {
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= v7 )
            goto LABEL_8;
        }
        *(_QWORD *)(v9 + 24 * v8) = 0LL;
        v4 = 1;
      }
LABEL_8:
      v6 = (__int64 *)*v6;
    }
    while ( v6 != v5 + 163 );
    if ( v4 )
      VidSchiCheckPendingDeviceCommand(v5);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
}
