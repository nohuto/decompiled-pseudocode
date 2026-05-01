/*
 * XREFs of RtlpTestHookInitialize @ 0x1800465F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     NtClose_0 @ 0x18004823C (NtClose_0.c)
 */

__int64 RtlpTestHookInitialize()
{
  unsigned int v1; // eax
  int v2; // r8d
  int v3; // ecx
  void *KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  __int64 KeyValueInformation; // [rsp+70h] [rbp+37h] BYREF
  __int128 v8; // [rsp+78h] [rbp+3Fh]

  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  KeyValueInformation = 0LL;
  v8 = 0uLL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1800857E0;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_1800857D0,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    v1 = DWORD1(v8);
    RtlpUserPolicies = *(_QWORD *)((char *)&v8 + 4);
    v2 = 1049601;
    if ( BYTE4(v8) > 0x14u || !_bittest(&v2, BYTE4(v8)) )
      LOBYTE(RtlpUserPolicies) = 0;
    if ( BYTE1(RtlpUserPolicies) > 0x14u || (v1 = BYTE1(RtlpUserPolicies), !_bittest(&v2, BYTE1(RtlpUserPolicies))) )
      BYTE1(RtlpUserPolicies) = 0;
    LOBYTE(v1) = BYTE2(RtlpUserPolicies);
    if ( BYTE2(RtlpUserPolicies) > 0x14u || (v3 = 1082401, !_bittest(&v3, v1)) )
      BYTE2(RtlpUserPolicies) = 0;
  }
  if ( KeyHandle )
    NtClose_0(KeyHandle);
  return 0LL;
}
