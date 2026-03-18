/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x140133D1C
 * Callers:
 *     RtlpLookupLowBox @ 0x14001D464 (RtlpLookupLowBox.c)
 * Callees:
 *     SeSetLearningModeObjectInformation @ 0x14003B450 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14003B480 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     SeAccessCheckWithHint @ 0x1400A85A0 (SeAccessCheckWithHint.c)
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1405DF3D0 (PsReferenceEffectiveToken.c)
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
  int v10; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING v11; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v12[4]; // [rsp+78h] [rbp-88h] BYREF
  char v13; // [rsp+88h] [rbp-78h] BYREF
  char v14; // [rsp+8Ch] [rbp-74h] BYREF
  _BYTE v15[8]; // [rsp+90h] [rbp-70h] BYREF
  char *v16; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY *Flink; // [rsp+C8h] [rbp-38h]
  _QWORD v21[7]; // [rsp+D0h] [rbp-30h] BYREF
  char v22; // [rsp+108h] [rbp+8h] BYREF

  v18[0] = 0LL;
  v18[1] = 0LL;
  v12[0] = 0x20000;
  v12[1] = 196608;
  v12[2] = 0x20000;
  v12[3] = 2031616;
  memset(v21, 0, sizeof(v21));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return 1;
  if ( !byte_14046BBEC )
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
  RtlInitUnicodeString(&v11, v7);
  v21[2] = &DestinationString;
  v21[3] = &v11;
  SeSetLearningModeObjectInformation((__int64)v21);
  v16 = &v22;
  Object = (PVOID)PsReferenceEffectiveToken(
                    (unsigned int)KeGetCurrentThread(),
                    (unsigned int)&v14,
                    (unsigned int)&v9,
                    (unsigned int)&v13,
                    0LL);
  Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v8 = SeAccessCheckWithHint(
         SeAtomSd,
         0LL,
         (__int64)v18,
         0LL,
         0x20000,
         0,
         (__int64)&v16,
         (__int64)v12,
         KeGetCurrentThread()->PreviousMode,
         (__int64)&v10,
         (__int64)v15);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  if ( v8 != 1 || !v10 )
    return 0;
  return v3;
}
