/*
 * XREFs of sub_18002EBF0 @ 0x18002EBF0
 * Callers:
 *     sub_18002EB80 @ 0x18002EB80 (sub_18002EB80.c)
 * Callees:
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009D890 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCreateTimer2 @ 0x18009DEB0 (ZwCreateTimer2.c)
 *     ZwCreateWaitCompletionPacket @ 0x18009DF70 (ZwCreateWaitCompletionPacket.c)
 */

NTSTATUS __fastcall sub_18002EBF0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  HANDLE *v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS WaitCompletionPacket; // ebp
  BOOLEAN AlreadySignaled; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = (HANDLE *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  result = ZwCreateTimer2((PHANDLE)(a1 + 24), 0LL, 0LL, 8u, 0x100002u);
  if ( result >= 0 )
  {
    WaitCompletionPacket = ZwCreateWaitCompletionPacket((PHANDLE)(a1 + 32), 1u, 0LL);
    if ( WaitCompletionPacket < 0 )
    {
      ZwClose(*v3);
    }
    else
    {
      ZwAssociateWaitCompletionPacket(
        *(HANDLE *)(a1 + 32),
        *(HANDLE *)(a2 + 64),
        *v3,
        (PVOID)(a1 + 40),
        (PVOID)(a2 + 112),
        0,
        a3,
        &AlreadySignaled);
      *(_QWORD *)(a1 + 96) = &sub_180035FA0;
      sub_180031620(a2, a1 + 104, a1 + 108);
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 88) = a1 + 80;
      *(_QWORD *)(a1 + 80) = a1 + 80;
      *(_QWORD *)(a1 + 40) = off_180118320;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 52) = *(_BYTE *)(a1 + 108);
    }
    return WaitCompletionPacket;
  }
  return result;
}
