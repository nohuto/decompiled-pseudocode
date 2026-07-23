/*
 * XREFs of sub_18002A0B0 @ 0x18002A0B0
 * Callers:
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     RtlAcquirePrivilege @ 0x180075AD0 (RtlAcquirePrivilege.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x18007FB70 (RtlReleasePrivilege.c)
 *     sub_180085F24 @ 0x180085F24 (sub_180085F24.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x18009E8B0 (ZwMapViewOfSectionEx.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002A0B0(__int64 a1, void *a2)
{
  __int64 v3; // rbx
  char v4; // r14
  int v5; // esi
  struct _TEB *v6; // r13
  ULONG AllocationType; // r15d
  ULONG Win32Protect; // edx
  PVOID *v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  const WCHAR *v14; // rdx
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-20h] BYREF
  PVOID Buffer; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE SectionHandle; // [rsp+C8h] [rbp+48h]
  PVOID ReturnedState; // [rsp+D0h] [rbp+50h] BYREF

  SectionHandle = a2;
  v3 = *(_QWORD *)(a1 + 56);
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      640,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      (__int64)"DLL name: %wZ\n",
      v3 + 72);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)&stru_180118260, 1u)
    || (v4 = 1, (*(_BYTE *)(qword_180165308 + 22) & 0x20) == 0) )
  {
    v4 = 0;
  }
  ReturnedState = 0LL;
  v5 = 0x800000;
  if ( !v4 )
  {
    if ( qword_180164F20 )
    {
      v14 = *(const WCHAR **)(v3 + 96);
      LODWORD(Buffer) = 0;
      LdrQueryImageFileKeyOption(qword_180164F20, v14, 4u, &Buffer, 4u, 0LL);
      if ( (_DWORD)Buffer )
      {
        if ( RtlAcquirePrivilege((PULONG)&Privilege, 1u, 0, &ReturnedState) >= 0 )
          v5 = 0x20000000;
      }
    }
  }
  v6 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  Buffer = v6->NtTib.ArbitraryUserPointer;
  v6->NtTib.ArbitraryUserPointer = *(PVOID *)(v3 + 80);
  AllocationType = v5 | 0x40000;
  Win32Protect = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 128;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    AllocationType = v5;
  v9 = (PVOID *)(v3 + 48);
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v16[1] = qword_180165020;
    ExtendedParameters.ULong64 = (DWORD64)v16;
    v16[0] = 0LL;
    v16[2] = 0LL;
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)1LL;
    v10 = ZwMapViewOfSectionEx(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID *)(v3 + 48),
            0LL,
            (PSIZE_T)(a1 + 160),
            AllocationType,
            Win32Protect,
            &ExtendedParameters,
            1u);
  }
  else
  {
    v10 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID *)(v3 + 48),
            0LL,
            0LL,
            0LL,
            (PSIZE_T)(a1 + 160),
            ViewShare,
            AllocationType,
            Win32Protect);
  }
  v12 = v10;
  v6->NtTib.ArbitraryUserPointer = Buffer;
  if ( AllocationType == 0x20000000 )
    RtlReleasePrivilege(ReturnedState);
  switch ( v12 )
  {
    case 1073741827:
      goto LABEL_40;
    case 1073741838:
      v12 = sub_180085F24(a1);
      break;
    case 1073741878:
LABEL_40:
      if ( Work && !*(_QWORD *)(a1 + 168) )
      {
        LOBYTE(v11) = 1;
        if ( (unsigned __int8)sub_18002D594(a1, v11) )
        {
          v12 = -1073741267;
        }
        else if ( v4 )
        {
          v12 = -1073741800;
        }
      }
      break;
  }
  if ( *v9 && (v12 < 0 || v12 == 1073741838) )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v9);
    *v9 = 0LL;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      834,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      (__int64)"Status: 0x%08lx\n",
      v12);
  return (unsigned int)v12;
}
