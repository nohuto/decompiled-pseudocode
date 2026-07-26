/*
 * XREFs of ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00FD104
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z @ 0x1C00FD184 (-ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00FD1E4 (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z.c)
 */

bool __fastcall ndisValidateNdisVarDataDescInputString(
        unsigned __int64 a1,
        unsigned int a2,
        const struct _NDIS_VAR_DATA_DESC *a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int Length; // ebx
  unsigned int v6; // r8d
  bool result; // al
  wchar_t *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  result = (unsigned __int64)a3 >= a1
        && (unsigned __int64)&a3[1] <= a1 + a2
        && (Length = a3->Length,
            ndisValidateEmbeddedBufferBounds(a1, a2, (unsigned __int64)a3, 0x10u, a3->Offset, Length, 2u, (void **)&v8))
        && ndisValidateAndConvertWcharStringToUnicodeString(v8, Length, v6, 0, a4);
  return result;
}
