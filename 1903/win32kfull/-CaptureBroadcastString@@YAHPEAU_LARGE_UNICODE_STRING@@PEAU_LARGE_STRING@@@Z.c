/*
 * XREFs of ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C013D248
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 * Callees:
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall CaptureBroadcastString(struct _LARGE_UNICODE_STRING *a1, struct _LARGE_STRING *a2)
{
  int v4; // eax
  ULONG v5; // eax
  WCHAR *v6; // rcx
  ULONG v7; // edx
  unsigned int v8; // eax
  NTSTATUS v9; // edx
  ULONG BytesInUnicodeString; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_DWORD *)a2;
  if ( *((int *)a2 + 1) < 0 )
    v5 = 2 * v4 + 2;
  else
    v5 = v4 + 2;
  BytesInUnicodeString = v5;
  if ( v5 )
  {
    v6 = (WCHAR *)Win32AllocPoolWithQuota(v5, 1936946005LL);
    *((_QWORD *)a1 + 1) = v6;
    if ( v6 )
    {
      v7 = BytesInUnicodeString;
      *((_DWORD *)a1 + 1) = BytesInUnicodeString & 0x7FFFFFFF;
      if ( *((int *)a2 + 1) < 0 )
      {
        v9 = RtlMultiByteToUnicodeN(v6, v7, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *(_DWORD *)a2);
        *(_DWORD *)a1 = BytesInUnicodeString;
      }
      else
      {
        v8 = *(_DWORD *)a2;
        *(_DWORD *)a1 = *(_DWORD *)a2;
        memmove(v6, *((const void **)a2 + 1), v8);
        v9 = 0;
      }
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*(unsigned int *)a1 >> 1)) = 0;
      if ( v9 >= 0 )
        return 1LL;
      Win32FreePool(*((_QWORD *)a1 + 1));
    }
  }
  return 0LL;
}
