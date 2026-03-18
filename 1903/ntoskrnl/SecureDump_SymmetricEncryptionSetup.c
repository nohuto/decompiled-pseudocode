/*
 * XREFs of SecureDump_SymmetricEncryptionSetup @ 0x14029BD44
 * Callers:
 *     SecureDump_Init @ 0x140189240 (SecureDump_Init.c)
 * Callees:
 *     SecureDump_LogErrorEvent @ 0x14029BCB0 (SecureDump_LogErrorEvent.c)
 *     BCryptGenRandom @ 0x14031C75C (BCryptGenRandom.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BCryptGetProperty @ 0x1406AE828 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140754498 (BCryptOpenAlgorithmProvider.c)
 *     BCryptGenerateSymmetricKey @ 0x1408DA0D4 (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x1408DA1FC (BCryptSetProperty.c)
 */

__int64 SecureDump_SymmetricEncryptionSetup()
{
  NTSTATUS SymmetricKey; // ebx
  UCHAR *PoolWithTag; // rax
  void *v2; // rcx
  ULONG v3; // r9d
  UCHAR *v4; // rdi
  ULONG v5; // r9d
  ULONG pbSecret; // [rsp+20h] [rbp-28h]
  ULONG cbSecret; // [rsp+28h] [rbp-20h]
  ULONG v9; // [rsp+30h] [rbp-18h]
  int pbOutput; // [rsp+50h] [rbp+8h] BYREF
  ULONG pcbResult; // [rsp+58h] [rbp+10h] BYREF

  dword_140464498 = 1;
  SymmetricKey = BCryptOpenAlgorithmProvider(&hAlgorithm, L"XTS-AES", L"Microsoft Primitive Provider", 1u);
  if ( SymmetricKey < 0 )
    goto LABEL_11;
  PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x706D6453u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SymmetricKey = -1073741670;
    goto LABEL_11;
  }
  SymmetricKey = BCryptGenRandom(v2, PoolWithTag, 0x40u, v3);
  if ( SymmetricKey >= 0 )
  {
    SymmetricKey = BCryptGenerateSymmetricKey(hAlgorithm, &hObject, 0LL, 0, v4, 0x40u, v9);
    ExFreePoolWithTag(v4, 0);
    if ( SymmetricKey < 0 )
      goto LABEL_11;
    SymmetricKey = BCryptGetProperty(hObject, L"KeyLength", (PUCHAR)&pbOutput, v5, &pcbResult, cbSecret);
    if ( SymmetricKey < 0 )
      goto LABEL_11;
    if ( pbOutput == 512 )
    {
      cbOutput = 4096;
      SymmetricKey = BCryptSetProperty(hObject, L"MessageBlockLength", (PUCHAR)&cbOutput, 4u, pbSecret);
    }
  }
  else
  {
    ExFreePoolWithTag(v4, 0);
  }
  if ( SymmetricKey < 0 )
LABEL_11:
    SecureDump_LogErrorEvent(1);
  return (unsigned int)SymmetricKey;
}
