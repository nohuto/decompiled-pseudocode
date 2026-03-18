/*
 * XREFs of RootHub_D0Exit @ 0x1C001D69C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     RootHub_DumpPortData @ 0x1C001DD08 (RootHub_DumpPortData.c)
 *     RootHub_HandleResumedPorts @ 0x1C001E648 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002299C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  int v4; // ebx
  __int64 v6; // r13
  __int64 result; // rax
  int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r8
  __int16 Ulong; // ax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int *v16; // rbx
  int v17; // eax
  unsigned int *v18; // rdi
  __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h]

  v25 = a2;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  result = RootHub_HandleResumedPorts();
  v8 = 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v9 = 0LL;
    do
    {
      if ( v4 != 5 )
      {
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(_QWORD *)(v10 + 272) >> 26;
        LOBYTE(v11) = (*(_QWORD *)(v10 + 272) & 0x4000000LL) != 0;
        if ( (int)RootHub_WaitForPendingU3TransitionCompletion(a1, (unsigned int)(v9 + 1), v11) < 0 && a3 == 7 )
          ((void (__fastcall *)(__int64, _QWORD))qword_1C0050650)(UcxDriverGlobals, *(_QWORD *)a1);
        Ulong = XilRegister_ReadUlong(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                  (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)v9));
        if ( (Ulong & 0x201) == 0x201 )
        {
          v13 = Ulong & 0x1E0;
          if ( ((v13 - 128) & 0xFFFFFF3F) != 0 || v13 == 256 )
            v8 = 1;
        }
      }
      v14 = *(_QWORD *)(a1 + 8);
      v15 = v14;
      if ( (*(_QWORD *)(v14 + 272) & 0x40000000LL) != 0 )
      {
        v16 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)v9);
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80 * v9 + 24));
        v17 = XilRegister_ReadUlong(v6, v16);
        if ( a3 != 7 || (v17 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v16, v17 & 0xE00C200 | 0x20000);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80 * v9 + 24));
        v14 = *(_QWORD *)(a1 + 8);
        v15 = v14;
      }
      if ( (unsigned int)(a3 - 3) <= 3 && (*(_QWORD *)(v14 + 272) & 0x20000000LL) != 0 )
      {
        v18 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)v9);
        DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80 * v9 + 24));
        v19 = XilRegister_ReadUlong(v6, v18);
        XilRegister_WriteUlong(v6, v18, v19 & 0xC200);
        DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80 * v9 + 24));
        v15 = *(_QWORD *)(a1 + 8);
      }
      RootHub_DumpPortData(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)v9, v15);
      v4 = v25;
      v20 = 10 * v9;
      v9 = (unsigned int)(v9 + 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 8 * v20 + 18) = 0;
      result = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)result <= *(_DWORD *)(a1 + 16) );
  }
  v21 = *(_QWORD *)(a1 + 8);
  v24 = v8;
  v22 = *(_QWORD *)(v21 + 456);
  if ( v22 )
  {
    result = PoFxPowerControl(v22, &GUID_HC_SUB_DX_STATE, &v24, 4LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 )
    {
      LODWORD(v23) = result;
      return WPP_RECORDER_SF_d(*(_QWORD *)(v21 + 72), 4u, 4u, 0x21u, (__int64)&Context.Logger + 4, v23);
    }
  }
  return result;
}
