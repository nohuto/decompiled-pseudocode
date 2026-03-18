/*
 * XREFs of RootHub_D0Exit @ 0x1C0021074
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_NotifyPortStateToPep @ 0x1C000F594 (Controller_NotifyPortStateToPep.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     RootHub_DumpPortData @ 0x1C00216E4 (RootHub_DumpPortData.c)
 *     RootHub_HandleResumedPorts @ 0x1C0022124 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0026E6C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

_UNKNOWN **__fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  __int64 v6; // r12
  int v7; // r15d
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 Ulong; // ax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned int *v19; // rdi
  __int16 v20; // ax
  __int64 v21; // rbx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  RootHub_HandleResumedPorts();
  v7 = 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v8 = 0;
    do
    {
      if ( a2 != 5 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 336) >> 26;
        LOBYTE(v10) = (*(_QWORD *)(v9 + 336) & 0x4000000LL) != 0;
        if ( (int)RootHub_WaitForPendingU3TransitionCompletion(a1, v8 + 1, v10) < 0 && a3 == 7 )
          ((void (__fastcall *)(__int64, _QWORD))qword_1C0057690)(UcxDriverGlobals, *(_QWORD *)a1);
        Ulong = XilRegister_ReadUlong(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                  (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8));
        if ( (Ulong & 0x201) == 0x201 )
        {
          v12 = Ulong & 0x1E0;
          if ( ((v12 - 128) & 0xFFFFFF3F) != 0 || v12 == 256 )
            v7 = 1;
        }
      }
      v13 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(v13 + 336) & 0x40000000LL) != 0 )
      {
        v14 = 88LL * v8;
        v15 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8);
        DynamicLock_Acquire(*(_QWORD *)(v14 + *(_QWORD *)(a1 + 48) + 24));
        v16 = XilRegister_ReadUlong(v6, v15);
        if ( a3 != 7 || (v16 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v15, v16 & 0xE00C200 | 0x20000);
        DynamicLock_Release(*(_QWORD *)(v14 + *(_QWORD *)(a1 + 48) + 24));
        v13 = *(_QWORD *)(a1 + 8);
      }
      v17 = v13;
      if ( a3 >= 3 && a3 <= 6 && (*(_QWORD *)(v13 + 336) & 0x20000000LL) != 0 )
      {
        v18 = 88LL * v8;
        v19 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8);
        DynamicLock_Acquire(*(_QWORD *)(v18 + *(_QWORD *)(a1 + 48) + 24));
        v20 = XilRegister_ReadUlong(v6, v19);
        XilRegister_WriteUlong(v6, v19, v20 & 0xC200);
        DynamicLock_Release(*(_QWORD *)(v18 + *(_QWORD *)(a1 + 48) + 24));
        v17 = *(_QWORD *)(a1 + 8);
      }
      v21 = v8;
      RootHub_DumpPortData(*(_QWORD *)(a1 + 40) + 16LL * v8++, v17);
      *(_BYTE *)(88 * v21 + *(_QWORD *)(a1 + 48) + 18) = 0;
    }
    while ( v8 + 1 <= *(_DWORD *)(a1 + 16) );
  }
  return Controller_NotifyPortStateToPep(*(_QWORD *)(a1 + 8), v7);
}
