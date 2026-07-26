/*
 * XREFs of ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C0115F30
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z @ 0x1C00FD184 (-ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C0115ECC (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 */

char __fastcall ndisValidateNdisOffsetAndLengthInputString(
        struct _IRP *a1,
        const struct _NDIS_OFFSET_AND_LENGTH *a2,
        struct _UNICODE_STRING *a3)
{
  char result; // al
  __int64 v6; // r8
  wchar_t *v7; // [rsp+58h] [rbp+20h] BYREF

  result = ndisValidateNdisOffsetAndLengthInputBufferBounds(a1, a2, (void **)&v7);
  if ( result )
    return ndisValidateAndConvertWcharStringToUnicodeString(v7, *((_DWORD *)a2 + 1), v6, 1, a3);
  return result;
}
