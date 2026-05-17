/*
 * XREFs of TpSetPoolMaxThreads @ 0x180062E20
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     sub_180062B70 @ 0x180062B70 (sub_180062B70.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010E940 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     sub_18010F490 @ 0x18010F490 (sub_18010F490.c)
 */

unsigned int *__fastcall TpSetPoolMaxThreads(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  unsigned int *result; // rax
  __int64 v6; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = (unsigned int)Ldr;
  if ( !a1 )
    return (unsigned int *)sub_18010EFC8(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return (unsigned int *)sub_18010EFC8(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return (unsigned int *)sub_18010EFC8(a1, Ldr, a3, a4);
  ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v7);
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v6 = *((_QWORD *)result + 18) + 556LL;
  }
  else
  {
    v6 = 2147353478LL;
  }
  if ( *(_BYTE *)v6 )
    return (unsigned int *)sub_18010F490(a1, v7);
  return result;
}
