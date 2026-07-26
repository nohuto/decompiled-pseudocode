/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C005184C
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B98D8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ndisReadBindPaths @ 0x1C00CB698 (ndisReadBindPaths.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x1C005192C (RtlUnicodeStringValidateWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  size_t v7; // rdx
  __int64 v8; // rcx
  ULONG v9; // r8d
  wchar_t *v10; // r10
  NTSTATUS v11; // r11d
  wchar_t *Buffer; // r14
  unsigned __int64 v13; // rdi
  NTSTATUS v14; // r10d
  __int16 v15; // cx
  __int64 v16; // r15

  v4 = 0LL;
  v5 = 0LL;
  v11 = RtlUnicodeStringValidateWorker_0(a1, (const size_t)a2, a3);
  if ( v11 >= 0 )
  {
    if ( v8 )
    {
      v4 = *(_QWORD *)(v8 + 8);
      v5 = (unsigned __int64)*(unsigned __int16 *)(v8 + 2) >> 1;
    }
    Buffer = v10;
    v13 = (unsigned __int64)v10;
    v11 = RtlUnicodeStringValidateWorker_0(a2, v7, v9);
    if ( v11 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v13 = (unsigned __int64)a2->Length >> 1;
      }
      v11 = v14;
      v15 = v14;
      if ( !v5 )
        goto LABEL_12;
      v16 = v4 - (_QWORD)Buffer;
      do
      {
        if ( !v13 )
          break;
        --v13;
        *(wchar_t *)((char *)Buffer + v16) = *Buffer;
        ++v15;
        ++Buffer;
        --v5;
      }
      while ( v5 );
      if ( !v5 )
      {
LABEL_12:
        if ( v13 )
          v11 = -2147483643;
      }
      LOWORD(v14) = v15;
    }
    a1->Length = 2 * v14;
  }
  return (unsigned int)v11;
}
