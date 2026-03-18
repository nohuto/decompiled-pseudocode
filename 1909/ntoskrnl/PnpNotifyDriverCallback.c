/*
 * XREFs of PnpNotifyDriverCallback @ 0x140737E98
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x140698EEC (PnpNotifyTargetDeviceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140722750 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x140737AD8 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14085F82C (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x140875998 (PipKsrNotifyDrivers.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 *     PsGetCurrentProcessSessionId @ 0x1401052D0 (PsGetCurrentProcessSessionId.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmQuitNextSession @ 0x1406F04A0 (MmQuitNextSession.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v6)(__int64, _QWORD); // rdi
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v8; // r15
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  int v11; // eax
  int v12; // edi
  ULONG_PTR SessionById; // rax
  void *v15; // rsi
  int v16; // eax
  ULONG_PTR v17; // r8
  _BYTE v19[48]; // [rsp+38h] [rbp-70h] BYREF

  memset(v19, 0, sizeof(v19));
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  if ( !MmIsSessionAddress((unsigned __int64)v6) || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v8 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    if ( !MmIsSessionAddress((unsigned __int64)v6)
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v11 = v6(a2, *(_QWORD *)(a1 + 40));
      v8 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v11;
      v12 = 0;
    }
    else
    {
      SessionById = MmGetSessionById(*(_DWORD *)(a1 + 20));
      v15 = (void *)SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v12 = MmAttachSession(SessionById);
      if ( v12 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v8 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v16;
        v12 = MmDetachSession((__int64)v15, (__int64)v19);
      }
      MmQuitNextSession(v15);
    }
    if ( CurrentIrql != v8 || SpareLong != CombinedApcDisable )
    {
      v17 = *(_QWORD *)(a1 + 48);
      if ( v17 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 48), (PVOID)(unsigned int)*(__int16 *)(v17 + 2));
        v17 = *(_QWORD *)(a1 + 48);
        if ( *(_WORD *)(v17 + 56) )
        {
          IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
          v17 = *(_QWORD *)(a1 + 48);
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, v17, v8, CombinedApcDisable);
    }
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
