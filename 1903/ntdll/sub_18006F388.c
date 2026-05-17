/*
 * XREFs of sub_18006F388 @ 0x18006F388
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 * Callees:
 *     sub_18000283C @ 0x18000283C (sub_18000283C.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlInitString @ 0x180021100 (RtlInitString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwRaiseHardError @ 0x18009F2F0 (ZwRaiseHardError.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __fastcall sub_18006F388(UNICODE_STRING *a1, const char *a2, unsigned int a3)
{
  UNICODE_STRING *p_DestinationString; // rdi
  char v6; // r14
  int v7; // ecx
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  _DWORD *v10; // rsi
  int v11; // ecx
  _DWORD *v12; // r13
  UNICODE_STRING v13; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING *v17; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  WCHAR Buffer[8]; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+A0h] [rbp-60h] BYREF

  p_DestinationString = a1;
  if ( a1 )
  {
    v6 = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    p_DestinationString = &DestinationString;
    v6 = 0;
  }
  switch ( a3 )
  {
    case 0xC0000135:
      v9 = 1;
      *(_QWORD *)&v13.Length = 0LL;
      v13.Buffer = 0LL;
      v8 = 1;
      v17 = p_DestinationString;
      break;
    case 0xC0000138:
      sub_18000283C(Buffer, 0xEuLL, L"#%d", (unsigned __int16)a2);
      RtlInitUnicodeString(&v13, Buffer);
      v11 = dword_18015FAB0;
      v8 = 3;
      v19 = -1073741512LL;
      v17 = (UNICODE_STRING *)a2;
      v9 = 2;
      v18 = p_DestinationString;
      v12 = (_DWORD *)((char *)&unk_1801184C0 + 16 * ((unsigned __int8)v6 ^ 1u));
      if ( ((*v12 | 1) & dword_18015FAB0) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          857,
          (unsigned int)"LdrpReportError",
          (unsigned __int8)v6 ^ 1,
          (__int64)"Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          (_DWORD)a2,
          p_DestinationString,
          -1073741512);
        v11 = dword_18015FAB0;
      }
      if ( (v11 & v12[1]) != 0 )
        __debugbreak();
      break;
    case 0xC0000139:
      RtlInitString(&SourceString, a2);
      v13.Buffer = (wchar_t *)&v21;
      v13.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v13, &SourceString, 0) < 0 )
        v13.Length = 0;
      v7 = dword_18015FAB0;
      v17 = &v13;
      v8 = 3;
      v19 = -1073741511LL;
      v18 = p_DestinationString;
      v9 = 3;
      v10 = (_DWORD *)((char *)&unk_1801184C0 + 16 * ((unsigned __int8)v6 ^ 1u));
      if ( ((*v10 | 1) & dword_18015FAB0) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          883,
          (unsigned int)"LdrpReportError",
          (unsigned __int8)v6 ^ 1,
          (__int64)"Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          &v13,
          p_DestinationString,
          -1073741511);
        v7 = dword_18015FAB0;
      }
      if ( (v7 & v10[1]) != 0 )
        __debugbreak();
      break;
    default:
      *(_QWORD *)&v13.Length = 0LL;
      v9 = 3;
      v13.Buffer = 0LL;
      v8 = 3;
      break;
  }
  if ( v6 )
  {
    if ( (int)ZwRaiseHardError(a3, v8, v9, &v17, 1, v14) >= 0 && dword_1801664E0 != 3 )
      ++dword_180164F28;
    if ( a3 + 1073741512 <= 1 )
      RtlRaiseStatus(a3);
  }
}
