/*
 * XREFs of PortpCompleteRequestIrp @ 0x1C0022034
 * Callers:
 *     PortpAsyncCompletion @ 0x1C0021FE0 (PortpAsyncCompletion.c)
 *     PortpCancelRoutine @ 0x1C0052DC0 (PortpCancelRoutine.c)
 * Callees:
 *     PortPassThroughFreeSrb @ 0x1C00220F0 (PortPassThroughFreeSrb.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0022178 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortPassThroughFreeIrpEx @ 0x1C002BE04 (PortPassThroughFreeIrpEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0052A14 (PortPassThroughExMarshalResultsFromSrbEx.c)
 */

void __fastcall PortpCompleteRequestIrp(__int64 a1, void *a2, __int64 a3)
{
  IRP *v4; // rdi
  __int64 v5; // rdx
  bool v6; // zf
  IRP *v7; // rcx
  int Status; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Information; // [rsp+28h] [rbp-10h]

  v4 = (IRP *)*((_QWORD *)a2 + 1);
  LOBYTE(a3) = *(_BYTE *)a2;
  v5 = *((_QWORD *)a2 + 3);
  v6 = ((*(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) - 315460) & 0xFFFFFFFB) == 0;
  Status = v4->IoStatus.Status;
  v7 = (IRP *)*((_QWORD *)a2 + 2);
  Information = v4->IoStatus.Information;
  if ( v6 )
    PortPassThroughExMarshalResultsFromSrbEx(v7);
  else
    PortPassThroughMarshalResultsFromSrb(v7, v5, a3, &Status);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = Status;
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  PortPassThroughFreeIrpEx(v4);
  PortPassThroughFreeSrb(*((PVOID *)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
