/*
 * XREFs of ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B311C
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKKPEAPEAX@Z @ 0x1C00B3008 (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKKPEAPEAX@Z.c)
 *     ?ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z @ 0x1C00B41BC (-ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z.c)
 */

bool __fastcall ndisValidateNdisVarDataDescInputString(
        unsigned __int64 a1,
        unsigned int a2,
        const struct _NDIS_VAR_DATA_DESC *a3,
        __int64 a4,
        struct _UNICODE_STRING *a5)
{
  unsigned int Length; // ebx
  unsigned int v6; // r8d
  bool result; // al
  wchar_t *v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  result = (unsigned __int64)a3 >= a1
        && (unsigned __int64)&a3[1] <= a1 + a2
        && (Length = a3->Length,
            ndisValidateEmbeddedBufferBounds(
              a1,
              a2,
              (unsigned __int64)a3,
              0x10u,
              0x48u,
              a3->Offset,
              Length,
              2u,
              (void **)&v8))
        && ndisValidateAndConvertWcharStringToUnicodeString(v8, Length, v6, 0, a5);
  return result;
}
