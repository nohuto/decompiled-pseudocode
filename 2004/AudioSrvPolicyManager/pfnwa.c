/*
 * XREFs of pfnwa @ 0x180016560
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall pfnwa(
        PTP_CALLBACK_INSTANCE Instance,
        volatile signed __int32 *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rbx
  int v7; // edi

  _InterlockedIncrement(Context + 2);
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  if ( v6 )
  {
    v6[1] = Context;
    *v6 = off_18003F460;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    if ( v7 >= 0 )
      v6 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1LL);
  }
  else
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x19u, &stru_180045198, v7);
    }
    sub_180005724("CProcessTerminatedWorkItem::CreateInstance", 679, v7);
  }
  if ( v7 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x38u, &stru_180043390, v7);
    }
    sub_180005724("CProcess::ProcessTerminationWatcherCallback", 3944, v7);
  }
}
