/*
 * XREFs of ndisLWMCreateAdapterInstanceName @ 0x1C00F2944
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1C0064A10 (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     ??$MakeExtendedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@KKPEAK@Z @ 0x1C00F0D5C (--$MakeExtendedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UN.c)
 */

__int64 __fastcall ndisLWMCreateAdapterInstanceName(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  unsigned __int16 v5; // di
  void **ExtendedPool; // rax
  PUNICODE_STRING v7; // rbx
  NTSTATUS appended; // edi
  _UNICODE_STRING *v9; // rcx
  PUNICODE_STRING v10; // rcx
  PUNICODE_STRING Destination; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_WORD **)(a2 + 88);
  Destination = 0LL;
  v5 = *v2 + 2;
  ExtendedPool = (void **)MakeExtendedPoolPtr<_UNICODE_STRING>(&P, a2, (unsigned int)(unsigned __int16)*v2 + 2);
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=((void **)&Destination, ExtendedPool);
  if ( P )
    ExFreePoolWithTag(P, 0);
  v7 = Destination;
  if ( Destination )
  {
    v9 = Destination;
    Destination->Buffer = &Destination[1].Length;
    v7->Length = 0;
    v7->MaximumLength = v5;
    appended = RtlAppendUnicodeStringToString(v9, *(PCUNICODE_STRING *)(a2 + 88));
    if ( appended >= 0 )
    {
      v10 = v7;
      v7 = 0LL;
      *(_QWORD *)(a1 + 3888) = v10;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)appended;
}
