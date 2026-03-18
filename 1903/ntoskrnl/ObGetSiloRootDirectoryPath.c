/*
 * XREFs of ObGetSiloRootDirectoryPath @ 0x14094485C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     PsGetPermanentSiloContext @ 0x1400FF140 (PsGetPermanentSiloContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x14063E630 (RtlIntegerToUnicodeString.c)
 *     PsGetParentSilo @ 0x1408C4AD0 (PsGetParentSilo.c)
 */

int __fastcall ObGetSiloRootDirectoryPath(__int64 a1, UNICODE_STRING *a2)
{
  int result; // eax
  struct _LIST_ENTRY *ParentSilo; // rbx
  ULONG v6; // ecx
  unsigned int v7; // ebx
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&String.Length);
  if ( result >= 0 )
  {
    ParentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(a1);
    if ( PsGetCurrentSilo() != ParentSilo )
      return -1073740007;
    v6 = 0;
    *(_QWORD *)&String.Length = 1441792LL;
    String.Buffer = (wchar_t *)&v11;
    if ( a1 )
      v6 = *(_DWORD *)(a1 + 1220);
    result = RtlIntegerToUnicodeString(v6, 0xAu, &String);
    if ( result >= 0 )
    {
      v7 = String.Length + 14;
      if ( a2->Buffer )
      {
        if ( a2->MaximumLength < v7 )
          return -1073741789;
      }
      else
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x6D4E624Fu);
        a2->Buffer = PoolWithTag;
        if ( !PoolWithTag )
          return -1073741670;
        a2->Length = 0;
        a2->MaximumLength = v7;
      }
      RtlCopyUnicodeString(a2, &ObpSilosDirectoryName);
      RtlAppendUnicodeStringToString(a2, &Source);
      RtlAppendUnicodeStringToString(a2, &String);
      return 0;
    }
  }
  return result;
}
