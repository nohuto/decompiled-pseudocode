/*
 * XREFs of ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0012F8C
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B98D8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C0013074 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCat(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  size_t v7; // rdx
  unsigned __int16 *v8; // rcx
  ULONG v9; // r8d
  NTSTATUS v10; // r10d
  wchar_t *Buffer; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // r11
  __int16 v14; // cx
  __int64 v15; // r11
  __int64 v16; // rdx

  v5 = 0LL;
  v6 = 0LL;
  v10 = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      v5 = *((_QWORD *)v8 + 1);
      v6 = (unsigned __int64)*v8 >> 1;
    }
    Buffer = 0LL;
    v12 = 0LL;
    v10 = RtlUnicodeStringValidateWorker(a2, v7, v9);
    if ( v10 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v12 = (unsigned __int64)a2->Length >> 1;
      }
      v14 = 0;
      v10 = 0;
      v15 = v13 - v6;
      if ( !v15 )
        goto LABEL_14;
      v16 = v5 + 2 * v6 - (_QWORD)Buffer;
      do
      {
        if ( !v12 )
          break;
        --v12;
        *(wchar_t *)((char *)Buffer + v16) = *Buffer;
        ++v14;
        ++Buffer;
        --v15;
      }
      while ( v15 );
      if ( !v15 )
      {
LABEL_14:
        if ( v12 )
          v10 = -2147483643;
      }
      a1->Length = 2 * (v6 + v14);
    }
  }
  return (unsigned int)v10;
}
