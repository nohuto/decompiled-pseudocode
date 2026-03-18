/*
 * XREFs of ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0037304
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015FC34 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1C00373D4 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCchCopyStringN(
        struct _UNICODE_STRING *a1,
        const unsigned __int16 *a2,
        size_t cchToCopy)
{
  __int16 v3; // ax
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rdi
  size_t v8; // rdx
  NTSTATUS v9; // r9d
  unsigned __int16 MaximumLength; // r10
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Length = a1->Length;
  Buffer = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( !a1->Buffer && (Length || MaximumLength) )
    {
      v9 = -1073741811;
    }
    else
    {
      Buffer = a1->Buffer;
      v8 = (unsigned __int64)MaximumLength >> 1;
    }
    if ( v9 >= 0 )
    {
      pcchNewDestLength = 0LL;
      if ( cchToCopy <= 0x7FFF )
      {
        v9 = RtlWideCharArrayCopyStringWorker(Buffer, v8, &pcchNewDestLength, a2, cchToCopy);
        v3 = pcchNewDestLength;
      }
      else
      {
        v9 = -1073741811;
      }
      a1->Length = 2 * v3;
    }
  }
  return (unsigned int)v9;
}
