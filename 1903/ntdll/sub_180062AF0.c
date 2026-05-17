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

__int64 __fastcall sub_180062AF0(__int64 a1, __int64 a2, struct _PEB_LDR_DATA *Ldr, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF

  v4 = (__int64)Ldr;
  if ( a1 && a2 && Ldr && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    v5 = *(_QWORD *)(v4 + 64);
    v7[1] = a2;
    v7[0] = v5;
    result = ZwSetInformationFile(a1, &v8, v7, 16LL, 30);
    if ( (int)result >= 0 )
    {
      sub_180031B40(v4, 1u);
      return 0LL;
    }
  }
  else
  {
    sub_18010EFC8(a1, a2, Ldr, a4);
    return 3221225485LL;
  }
  return result;
}
