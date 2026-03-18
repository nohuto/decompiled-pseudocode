/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C015B1E8
 * Callers:
 *     RIMRegOpenLocalMachineKey @ 0x1C015B344 (RIMRegOpenLocalMachineKey.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C015B25C (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C015B2E0 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  __int16 v4; // bx
  size_t v5; // [rsp+20h] [rbp-28h]
  size_t v6; // [rsp+20h] [rbp-28h]
  ULONG v7; // [rsp+28h] [rbp-20h]
  wchar_t *v8; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength; // [rsp+58h] [rbp+10h] BYREF
  size_t v10; // [rsp+60h] [rbp+18h] BYREF
  size_t v11; // [rsp+68h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)a2;
  result = RtlUnicodeStringValidateDestWorker(a1, &v8, &v10, &v11, v5, v7);
  if ( result >= 0 )
  {
    v4 = v11;
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker(
               &v8[v11],
               v10 - v11,
               &pcchNewDestLength,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
               v6);
    a1->Length = 2 * (pcchNewDestLength + v4);
  }
  return result;
}
