/*
 * XREFs of sub_18007A3BC @ 0x18007A3BC
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x18009C9A0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 sub_18007A3BC()
{
  unsigned int v0; // edi
  char v1; // si
  int v3; // ebx
  int Key; // ebx
  int v5; // ebx
  unsigned __int64 v6; // rbx
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v11[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 Heap; // [rsp+60h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  int v18; // [rsp+98h] [rbp-70h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v20; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+B0h] [rbp-58h]
  __int128 v22; // [rsp+B8h] [rbp-50h]
  _BYTE v23[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v24; // [rsp+DCh] [rbp-2Ch]
  _BYTE v25[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v26; // [rsp+FCh] [rbp-Ch]
  int v27; // [rsp+100h] [rbp-8h]
  unsigned int v28; // [rsp+104h] [rbp-4h]
  _BYTE v29[4]; // [rsp+148h] [rbp+40h] BYREF
  int v30; // [rsp+14Ch] [rbp+44h]
  int v31; // [rsp+150h] [rbp+48h]
  int v32; // [rsp+154h] [rbp+4Ch]
  __int64 retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  v14 = 0LL;
  v10 = 0LL;
  if ( byte_180165430 )
    return 0LL;
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v16);
  if ( (unsigned __int16)(*(_WORD *)(v16 + 92) - 2) > 1u )
    return 0LL;
  if ( (int)ZwOpenKey(&v13, 3LL, &unk_180118818) < 0
    || (v3 = ZwQueryValueKey(v13, &unk_1801193E8, 2LL, v29, 80, &v15), ZwClose(v13), v3 < 0)
    || v30 != 4
    || v31 != 4
    || !v32 )
  {
    v9 = 0LL;
    v1 = 0;
    if ( (int)ZwOpenKey(&v9, 131097LL, &unk_18015F530) >= 0 )
    {
      Key = ZwQueryKey(v9, 2LL, v23);
      ZwClose(v9);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v24 )
        goto LABEL_27;
    }
    if ( (int)ZwOpenKey(&v8, 1LL, &unk_1801187E8) >= 0 )
    {
      if ( (int)ZwQueryValueKey(v8, L"$&", 2LL, v25, 80, &v7) >= 0 && v26 == 4 && v27 == 4 && v28 > 1 )
      {
        v1 = 1;
        ZwQueryValueKey(v8, L"FH", 2LL, v25, 80, &v7);
      }
      ZwClose(v8);
      if ( v1 )
        goto LABEL_27;
    }
    if ( (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      v11[0] = 0;
      if ( (unsigned int)UnicodeString.Length + 120 <= 0xFFFE )
      {
        v11[1] = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap(
                 (__int64)NtCurrentPeb()->ProcessHeap,
                 dword_18016542C + 1572864,
                 (unsigned __int16)(UnicodeString.Length + 120));
        if ( Heap )
        {
          if ( (int)RtlAppendUnicodeStringToString(v11, (__int16 *)&UnicodeString) >= 0
            && (int)RtlAppendUnicodeToString(v11, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v18 = 48;
            v20 = v11;
            v19 = 0LL;
            v21 = 64;
            v22 = 0LL;
            if ( (int)ZwOpenKey(&v8, 1LL, &v18) >= 0 )
            {
              v5 = ZwQueryValueKey(v8, L"$&", 2LL, v25, 80, &v7);
              ZwClose(v8);
              if ( v5 >= 0 && v26 == 4 && v27 == 4 && v28 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
      if ( v1 )
      {
LABEL_27:
        if ( (int)LdrLoadDll(0LL, 0LL, (__int64)&unk_1801193C8, &v14) >= 0 )
        {
          v6 = v14;
          if ( (int)LdrGetProcedureAddressForCaller(v14, &qword_1801193F8, 0, &v10, 0, retaddr) >= 0 && v10 )
          {
            qword_180165028 = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            qword_1801664F0 = v6;
          }
          else
          {
            LdrUnloadDll(v6);
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
