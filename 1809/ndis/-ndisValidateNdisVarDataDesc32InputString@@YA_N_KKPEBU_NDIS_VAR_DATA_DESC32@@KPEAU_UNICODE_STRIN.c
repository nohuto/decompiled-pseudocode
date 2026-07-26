/*
 * XREFs of ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B3094
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKKPEAPEAX@Z @ 0x1C00B3008 (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKKPEAPEAX@Z.c)
 *     ?ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z @ 0x1C00B41BC (-ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z.c)
 */

bool __fastcall ndisValidateNdisVarDataDesc32InputString(
        unsigned __int64 a1,
        unsigned int a2,
        const struct _NDIS_VAR_DATA_DESC32 *a3,
        __int64 a4,
        struct _UNICODE_STRING *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  bool result; // al
  wchar_t *v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  result = (unsigned __int64)a3 >= a1
        && (unsigned __int64)a3 + 8 <= a1 + a2
        && (v5 = *(unsigned __int16 *)a3,
            ndisValidateEmbeddedBufferBounds(
              a1,
              a2,
              (unsigned __int64)a3,
              8u,
              0x28u,
              *((_DWORD *)a3 + 1),
              v5,
              2u,
              (void **)&v8))
        && ndisValidateAndConvertWcharStringToUnicodeString(v8, v5, v6, 0, a5);
  return result;
}
