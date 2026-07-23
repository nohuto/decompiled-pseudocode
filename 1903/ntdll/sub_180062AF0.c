/*
 * XREFs of sub_180062AF0 @ 0x180062AF0
 * Callers:
 *     TpAllocIoCompletion @ 0x180062780 (TpAllocIoCompletion.c)
 *     sub_180088EB0 @ 0x180088EB0 (sub_180088EB0.c)
 *     sub_180088FFC @ 0x180088FFC (sub_180088FFC.c)
 * Callees:
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     ZwSetInformationFile @ 0x18009CBC0 (ZwSetInformationFile.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

NTSTATUS __fastcall sub_180062AF0(void *a1, __int64 a2, PPEB_LDR_DATA Ldr)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  NTSTATUS result; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK v7; // [rsp+40h] [rbp-18h] BYREF

  v3 = (__int64)Ldr;
  if ( a1 && a2 && Ldr && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    v4 = *(_QWORD *)(v3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(a1, &v7, v6, 0x10u, FileCompletionInformation);
    if ( result >= 0 )
    {
      sub_180031B40(v3, 1u);
      return 0;
    }
  }
  else
  {
    sub_18010EFC8(a1, a2, Ldr);
    return -1073741811;
  }
  return result;
}
