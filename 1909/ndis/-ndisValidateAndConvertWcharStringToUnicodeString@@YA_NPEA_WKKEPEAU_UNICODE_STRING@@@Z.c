/*
 * XREFs of ?ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEA_WKKEPEAU_UNICODE_STRING@@@Z @ 0x1C00FD184
 * Callers:
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00FD104 (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C0115F30 (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C0115F74 (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateAndConvertWcharStringToUnicodeString(
        wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        struct _UNICODE_STRING *a5)
{
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( (a2 & 1) == 0 )
  {
    if ( !a2 )
    {
      a5->Buffer = 0LL;
      LOWORD(a2) = 0;
      a5->MaximumLength = 0;
LABEL_7:
      a5->Length = a2;
      return 1;
    }
    if ( a2 <= 0x1000 )
    {
      v6 = (a2 >> 1) - 1;
      if ( !a4 )
        goto LABEL_5;
      v8 = (unsigned int)v6;
      if ( !a1[v6] )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( a1[v9] );
        if ( v9 == v8 )
        {
LABEL_5:
          a5->MaximumLength = a2;
          a5->Buffer = a1;
          if ( a4 )
            LOWORD(a2) = a2 - 2;
          goto LABEL_7;
        }
      }
    }
  }
  return 0;
}
