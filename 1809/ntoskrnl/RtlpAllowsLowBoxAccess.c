/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x140133190
 * Callers:
 *     RtlpLookupLowBox @ 0x1400892A0 (RtlpLookupLowBox.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E050 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x14064A470 (PsReferenceEffectiveToken.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  char v3; // bl
  SIZE_T v4; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  const WCHAR *v7; // rdx
  char v8; // si
  char v9; // [rsp+60h] [rbp-A0h] BYREF
  int v10; // [rsp+64h] [rbp-9Ch]
  _DWORD v11[4]; // [rsp+68h] [rbp-98h] BYREF
  char v12; // [rsp+78h] [rbp-88h] BYREF
  char v13; // [rsp+7Ch] [rbp-84h] BYREF
  char *v14; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v15; // [rsp+90h] [rbp-70h] BYREF
  PVOID v16[4]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v18[7]; // [rsp+D0h] [rbp-30h] BYREF
  char v19; // [rsp+108h] [rbp+8h] BYREF

  memset(v16, 0, sizeof(v16));
  v11[0] = 0x20000;
  v11[1] = 196608;
  v11[2] = 0x20000;
  v11[3] = 2031616;
  memset(v18, 0, sizeof(v18));
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return 1;
  if ( !byte_14044116C )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
  v3 = 1;
  v4 = 2LL * *(unsigned __int8 *)(a1 + 40) + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x6D4E7441u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    if ( RtlStringCbCopyW(v6, v4, (NTSTRSAFE_PCWSTR)(a1 + 42)) < 0 )
      v7 = L"Unable to capture ATOM name.";
    else
      v7 = v6;
  }
  else
  {
    v7 = L"Unable to Allocate space for ATOM name.";
  }
  RtlInitUnicodeString(&v15, v7);
  v18[2] = &DestinationString;
  v18[3] = &v15;
  SeSetLearningModeObjectInformation((__int64)v18);
  v14 = &v19;
  v16[2] = (PVOID)PsReferenceEffectiveToken(
                    (unsigned int)KeGetCurrentThread(),
                    (unsigned int)&v13,
                    (unsigned int)&v9,
                    (unsigned int)&v12,
                    0LL);
  v16[3] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v8 = SeAccessCheckWithHint(SeAtomSd, 0LL, (__int64)v16, 0LL, 0x20000, 0, (__int64)&v14, (__int64)v11);
  ObfDereferenceObjectWithTag(v16[2], 0x746C6644u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  if ( v8 != 1 || !v10 )
    return 0;
  return v3;
}
