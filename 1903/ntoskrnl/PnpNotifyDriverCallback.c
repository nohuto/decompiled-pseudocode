/*
 * XREFs of PnpNotifyDriverCallback @ 0x140735C38
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x14066C01C (PnpNotifyTargetDeviceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1407208B0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x140735878 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14086012C (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x140876298 (PipKsrNotifyDrivers.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     PsGetCurrentProcessSessionId @ 0x1400EC3B0 (PsGetCurrentProcessSessionId.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmQuitNextSession @ 0x1406EE950 (MmQuitNextSession.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v6)(__int64, _QWORD); // rdi
  int v7; // eax
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v9; // r15
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // edi
  ULONG_PTR SessionById; // rax
  void *v17; // rsi
  int v18; // eax
  ULONG_PTR v19; // r8
  _BYTE v21[48]; // [rsp+38h] [rbp-70h] BYREF

  memset(v21, 0, sizeof(v21));
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  LOBYTE(v7) = MmIsSessionAddress((unsigned __int64)v6);
  if ( !v7 || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v9 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    LOBYTE(v12) = MmIsSessionAddress((unsigned __int64)v6);
    if ( !v12
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v13 = v6(a2, *(_QWORD *)(a1 + 40));
      v9 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v13;
      v14 = 0;
    }
    else
    {
      SessionById = MmGetSessionById(*(_DWORD *)(a1 + 20));
      v17 = (void *)SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v14 = MmAttachSession(SessionById);
      if ( v14 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v9 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v18;
        v14 = MmDetachSession((__int64)v17, (__int64)v21);
      }
      MmQuitNextSession(v17);
    }
    if ( CurrentIrql != v9 || SpareLong != CombinedApcDisable )
    {
      v19 = *(_QWORD *)(a1 + 48);
      if ( v19 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 48), (PVOID)(unsigned int)*(__int16 *)(v19 + 2));
        v19 = *(_QWORD *)(a1 + 48);
        if ( *(_WORD *)(v19 + 56) )
        {
          IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
          v19 = *(_QWORD *)(a1 + 48);
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, v19, v9, CombinedApcDisable);
    }
    return (unsigned int)v14;
  }
  return 3221225485LL;
}
