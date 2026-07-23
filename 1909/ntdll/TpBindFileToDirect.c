/*
 * XREFs of TpBindFileToDirect @ 0x180062B90
 * Callers:
 *     TpAllocIoCompletion @ 0x180062820 (TpAllocIoCompletion.c)
 *     RtlpTpIoLookup @ 0x180089550 (RtlpTpIoLookup.c)
 *     RtlpTpIoAlloc @ 0x18008969C (RtlpTpIoAlloc.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x180031B40 (TpAdjustBindingCount.c)
 *     ZwSetInformationFile @ 0x18009D370 (ZwSetInformationFile.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpBindFileToDirect(void *a1, __int64 a2, _PEB_LDR_DATA *Ldr)
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
      TpAdjustBindingCount(v3, 1u);
      return 0;
    }
  }
  else
  {
    TppRaiseInvalidParameter(a1, a2, Ldr);
    return -1073741811;
  }
  return result;
}
