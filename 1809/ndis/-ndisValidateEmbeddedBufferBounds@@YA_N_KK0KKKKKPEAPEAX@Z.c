/*
 * XREFs of ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKKPEAPEAX@Z @ 0x1C00B3008
 * Callers:
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B3094 (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@KPEAU_UNICODE_STRIN.c)
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B311C (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@KPEAU_UNICODE_STRING@@@.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00EA298 (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateEmbeddedBufferBounds(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        void **a9)
{
  unsigned __int64 v10; // rbx
  char *v11; // rdx
  char *v12; // r10
  unsigned __int64 v13; // r8

  v10 = a1 + a2;
  v11 = (char *)(a1 + a6);
  v12 = &v11[a7];
  v13 = a3 + a4;
  if ( v10 < a1
    || a5 && a6 < a5
    || (unsigned __int64)v11 < a1
    || v12 < v11
    || (unsigned __int64)v12 > v10
    || a8 && a7 && ((a8 - 1) & (unsigned int)v11) != 0
    || (unsigned __int64)v11 <= a3 && (unsigned __int64)v12 > a3
    || (unsigned __int64)v11 <= v13 && (unsigned __int64)v12 > v13 )
  {
    return 0;
  }
  *a9 = v11;
  return 1;
}
