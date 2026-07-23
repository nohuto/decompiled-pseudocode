/*
 * XREFs of RtlInitializeHistoryTable @ 0x180078164
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlpFunctionAddressTableEntry @ 0x18007823C (RtlpFunctionAddressTableEntry.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  char v2; // dl
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 EndAddress; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  LdrProtectMrdata(0);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    v2 = byte_18017A415;
    if ( v1 == RtlRaiseException )
      v2 = i;
    byte_18017A415 = v2;
    v3 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v4 = ImageBase;
    v5 = 2LL * i;
    EndAddress = v3->EndAddress;
    v7 = ImageBase + v3->BeginAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v5 + 8] = v3;
    v8 = v4 + EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v5 + 6] = v4;
    v9 = qword_18017A418;
    if ( v7 < qword_18017A418 )
      v9 = v7;
    qword_18017A418 = v9;
    v10 = qword_18017A420;
    if ( v8 > qword_18017A420 )
      v10 = v8;
    qword_18017A420 = v10;
  }
  RtlpUnwindHistoryTable[0] = i;
  LdrProtectMrdata(1);
}
