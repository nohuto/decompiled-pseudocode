/*
 * XREFs of ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C00EA158
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

void __fastcall ndisMoveUnicodeStringToNdisVarDataDesc(
        struct _UNICODE_STRING *a1,
        unsigned __int8 *a2,
        unsigned __int8 **a3,
        struct _NDIS_VAR_DATA_DESC *a4)
{
  _BYTE *v5; // rbx
  __int64 MaximumLength; // rdi
  ULONG_PTR v7; // rax
  wchar_t *Buffer; // rdx

  v5 = *a3;
  MaximumLength = a1->MaximumLength;
  a4->Length = a1->Length;
  a4->MaximumLength = MaximumLength;
  v7 = v5 - a2;
  Buffer = a1->Buffer;
  a4->Offset = v7;
  memmove(v5, Buffer, (unsigned int)MaximumLength);
  *a3 = &v5[MaximumLength];
}
