/*
 * XREFs of SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286628
 * Callers:
 *     SecureDump_Init @ 0x140180E80 (SecureDump_Init.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140181E80 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_LogErrorEvent @ 0x140286B40 (SecureDump_LogErrorEvent.c)
 *     BCryptDestroyKey @ 0x1402FE650 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x1402FE6A4 (BCryptEncrypt.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BCryptGetProperty @ 0x140692424 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x14073D270 (BCryptOpenAlgorithmProvider.c)
 *     BCryptImportKeyPair @ 0x14089CC54 (BCryptImportKeyPair.c)
 */

__int64 SecureDump_EncryptSymmetricKeyWithPublicKey()
{
  UCHAR *v0; // rsi
  unsigned int v1; // edi
  void *v2; // rdx
  NTSTATUS Property; // ebx
  UCHAR *PoolWithTag; // rax
  const WCHAR *v5; // r8
  ULONG v6; // r9d
  ULONG pcbResult; // [rsp+28h] [rbp-50h]
  ULONG dwFlags; // [rsp+30h] [rbp-48h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-28h] BYREF
  _QWORD pPaddingInfo[2]; // [rsp+58h] [rbp-20h] BYREF
  int v12; // [rsp+68h] [rbp-10h]
  ULONG cbInput; // [rsp+B0h] [rbp+38h] BYREF
  int pbOutput; // [rsp+B8h] [rbp+40h] BYREF
  ULONG v15; // [rsp+C0h] [rbp+48h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+C8h] [rbp+50h] BYREF

  pPaddingInfo[0] = L"SHA256";
  phAlgorithm = 0LL;
  v0 = 0LL;
  phKey = 0LL;
  pPaddingInfo[1] = 0LL;
  v1 = 1;
  v12 = 0;
  dword_140439ADC = 2;
  Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", 0LL, 0, &cbInput, 0);
  if ( Property >= 0 )
  {
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, cbInput, 0x706D6453u);
    v0 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_3:
      Property = -1073741670;
      goto LABEL_14;
    }
    Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", PoolWithTag, cbInput, &cbInput, 0);
    if ( Property >= 0 )
    {
      Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", 0LL, 1u);
      if ( Property >= 0 )
      {
        Property = BCryptImportKeyPair(phAlgorithm, v2, v5, &phKey, (PUCHAR)pbInput, ::dwFlags, dwFlags);
        if ( Property < 0
          || (Property = BCryptGetProperty(phKey, L"KeyLength", (PUCHAR)&pbOutput, v6, &v15, pcbResult), Property < 0) )
        {
          v1 = 3;
        }
        else if ( pbOutput == 2048 )
        {
          Property = BCryptEncrypt(phKey, v0, cbInput, pPaddingInfo, 0LL, 0, 0LL, 0, &::pcbResult, 4u);
          if ( Property >= 0 )
          {
            qword_140439AB8 = ExAllocatePoolWithTag(NonPagedPoolNx, ::pcbResult, 0x706D6453u);
            if ( !qword_140439AB8 )
              goto LABEL_3;
            Property = BCryptEncrypt(
                         phKey,
                         v0,
                         cbInput,
                         pPaddingInfo,
                         0LL,
                         0,
                         (PUCHAR)qword_140439AB8,
                         ::pcbResult,
                         &::pcbResult,
                         4u);
          }
        }
        else
        {
          v1 = 4;
          Property = -1073741823;
        }
      }
    }
  }
LABEL_14:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, (ULONG)v2);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( Property < 0 )
    SecureDump_LogErrorEvent(v1);
  return (unsigned int)Property;
}
