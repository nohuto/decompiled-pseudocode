/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x18007FC08
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003F560 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1800A05A0 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // edi
  char v1; // si
  int v3; // ebx
  int Key; // ebx
  int v5; // ebx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v14[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 Heap; // [rsp+60h] [rbp-A8h]
  HANDLE v16; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  int v21; // [rsp+98h] [rbp-70h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  __int128 v25; // [rsp+B8h] [rbp-50h]
  _BYTE v26[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v27; // [rsp+DCh] [rbp-2Ch]
  _BYTE v28[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v29; // [rsp+FCh] [rbp-Ch]
  int v30; // [rsp+100h] [rbp-8h]
  unsigned int v31; // [rsp+104h] [rbp-4h]
  _BYTE v32[4]; // [rsp+148h] [rbp+40h] BYREF
  int v33; // [rsp+14Ch] [rbp+44h]
  int v34; // [rsp+150h] [rbp+48h]
  int v35; // [rsp+154h] [rbp+4Ch]
  __int64 retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  v17 = 0LL;
  v13 = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v19);
  if ( (unsigned __int16)(*(_WORD *)(v19 + 92) - 2) > 1u )
    return 0LL;
  if ( (int)NtOpenKey(&v16, 3LL, &unk_180118840) < 0
    || (v3 = NtQueryValueKey(v16, &unk_180119408, 2LL, v32, 80, &v18), NtClose(v16), v3 < 0)
    || v33 != 4
    || v34 != 4
    || !v35 )
  {
    v12 = 0LL;
    v1 = 0;
    if ( (int)NtOpenKey(&v12, 131097LL, &unk_18015F600) >= 0 )
    {
      Key = ZwQueryKey(v12, 2LL, v26);
      NtClose(v12);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v27 )
        goto LABEL_27;
    }
    if ( (int)NtOpenKey(&Handle, 1LL, &unk_180118810) >= 0 )
    {
      if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v28, 80, &v10) >= 0 && v29 == 4 && v30 == 4 && v31 > 1 )
      {
        v1 = 1;
        NtQueryValueKey(Handle, L"FH", 2LL, v28, 80, &v10);
      }
      NtClose(Handle);
      if ( v1 )
        goto LABEL_27;
    }
    if ( (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      v14[0] = 0;
      if ( (unsigned int)UnicodeString.Length + 120 <= 0xFFFE )
      {
        v14[1] = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap(
                 (__int64)NtCurrentPeb()->ProcessHeap,
                 NtdllBaseTag + 1572864,
                 (unsigned __int16)(UnicodeString.Length + 120));
        if ( Heap )
        {
          if ( (int)RtlAppendUnicodeStringToString(v14, (__int16 *)&UnicodeString) >= 0
            && (int)RtlAppendUnicodeToString(v14, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v21 = 48;
            v23 = v14;
            v22 = 0LL;
            v24 = 64;
            v25 = 0LL;
            if ( (int)NtOpenKey(&Handle, 1LL, &v21) >= 0 )
            {
              v5 = NtQueryValueKey(Handle, L"$&", 2LL, v28, 80, &v10);
              NtClose(Handle);
              if ( v5 >= 0 && v29 == 4 && v30 == 4 && v31 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( v1 )
      {
LABEL_27:
        if ( (int)LdrLoadDll(0LL, 0LL, (__int64)&unk_1801193E8, &v17) >= 0 )
        {
          v6 = v17;
          if ( (int)LdrGetProcedureAddressForCaller(v17, &qword_180119418, 0, &v13, 0, retaddr) >= 0 && v13 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = v6;
          }
          else
          {
            LdrUnloadDll(v6, v7, v8, v9);
            return (unsigned int)-1073741511;
          }
        }
        else
        {
          return (unsigned int)-1073741515;
        }
      }
    }
  }
  return v0;
}
