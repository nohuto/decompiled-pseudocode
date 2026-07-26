/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x1C0012BB8
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B98D8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1C0012C14 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0012C78 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const wchar_t *a2)
{
  NTSTATUS v3; // edx
  const wchar_t *v4; // r9
  size_t v6; // [rsp+20h] [rbp-18h]
  size_t v7; // [rsp+20h] [rbp-18h]
  ULONG v8; // [rsp+28h] [rbp-10h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF
  size_t pcchDest; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *ppszDest; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)a2;
  v3 = RtlUnicodeStringValidateDestWorker(a1, &ppszDest, &pcchDest, 0LL, v6, v8);
  if ( v3 >= 0 )
  {
    pcchNewDestLength = 0LL;
    v3 = RtlWideCharArrayCopyStringWorker(ppszDest, pcchDest, &pcchNewDestLength, v4, v7);
    a1->Length = 2 * pcchNewDestLength;
  }
  return (unsigned int)v3;
}
