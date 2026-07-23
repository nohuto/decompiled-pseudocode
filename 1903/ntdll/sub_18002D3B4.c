/*
 * XREFs of sub_18002D3B4 @ 0x18002D3B4
 * Callers:
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E4A8 @ 0x18002E4A8 (sub_18002E4A8.c)
 *     sub_180070758 @ 0x180070758 (sub_180070758.c)
 * Callees:
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     sub_180082D20 @ 0x180082D20 (sub_180082D20.c)
 *     sub_18008BAD0 @ 0x18008BAD0 (sub_18008BAD0.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     ZwRaiseHardError @ 0x18009F2F0 (ZwRaiseHardError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

__int64 __fastcall sub_18002D3B4(__int64 a1, _UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r12
  ULONG v6; // eax
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r14
  int i; // esi
  NTSTATUS v11; // eax
  __int64 v12; // r9
  int v13; // ebx
  ULONG v14; // esi
  NTSTATUS v15; // eax
  int v17; // r8d
  int v18; // r9d
  USHORT *v19; // rcx
  int v20; // r8d
  int v21; // r9d
  HANDLE FileHandle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE SectionHandle; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h]
  unsigned __int64 Parameters[2]; // [rsp+58h] [rbp-41h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF
  char v28; // [rsp+100h] [rbp+67h] BYREF
  _UNICODE_STRING *v29; // [rsp+108h] [rbp+6Fh]
  char v30; // [rsp+110h] [rbp+77h] BYREF
  ULONG Response; // [rsp+118h] [rbp+7Fh] BYREF

  v29 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  v24 = *(_QWORD *)(a1 + 168);
  if ( !(unsigned __int8)sub_18002D594(a1, 0LL) )
  {
    v5 = v3 + 72;
    sub_1800255A8(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = a2;
    v6 = 64;
    if ( !byte_180165380 )
      v6 = 2112;
    ObjectAttributes.Attributes = v6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v8 = 2147353476LL;
    v9 = 2147353477LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v19 = RtlGetCurrentServiceSessionId()
          ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
          : (USHORT *)2147353477;
      if ( (*(_BYTE *)v19 & 0x20) != 0 )
      {
        LOBYTE(v18) = -1;
        LOBYTE(v17) = -1;
        sub_1800CFA48(5253, -1, v17, v18, 0LL, 0LL);
      }
    }
    for ( i = 0; ; i = 1 )
    {
      v11 = ZwOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      v13 = v11;
      if ( v11 >= 0 )
        break;
      if ( v11 == -1073741772 || v11 == -1073741766 )
      {
        v13 = -1073741515;
        break;
      }
      if ( v11 != -1073741790 )
        break;
      if ( i || !(unsigned __int8)sub_1800CF490(a1) )
        return (unsigned int)v13;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( byte_180165358 )
    {
      v13 = sub_180082D20(a1, FileHandle);
      if ( v13 < 0 )
      {
        if ( byte_180165310 )
          goto LABEL_22;
      }
    }
    v14 = 0x1000000;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) != 0 && (NtCurrentPeb()->BitField & 0x10) == 0 )
    {
      LOBYTE(v12) = 8;
      v13 = sub_18008BAD0(FileHandle, *(_QWORD *)(a1 + 56), &v30, v12, &v28);
      if ( v13 < 0 )
        goto LABEL_22;
    }
    if ( dword_180165428 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
      v14 = 17825792;
    v15 = ZwCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, v14, FileHandle);
    v13 = v15;
    if ( v15 < 0 )
    {
      if ( v15 == -1073740702 || (unsigned int)(v15 + 1073740674) <= 1 )
      {
        v13 = LdrAppxHandleIntegrityFailure((unsigned int)v15);
      }
      else if ( v15 != -1073741801 && v15 != -1073741670 && v15 != -1073741523 )
      {
        Parameters[0] = v5;
        Parameters[1] = v15;
        if ( ZwRaiseHardError(-1073741701, 2u, 1u, Parameters, 1u, &Response) >= 0 && dword_1801664E0 != 3 )
          ++dword_180164F28;
      }
      sub_18007E384((unsigned int)v13, 5253LL, 0LL, v5);
      goto LABEL_22;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
      {
        LOBYTE(v21) = -1;
        LOBYTE(v20) = -1;
        sub_1800CFA48(5254, -1, v20, v21, 0LL, 0LL);
      }
    }
    if ( !dword_180165428 && (*(_DWORD *)(a1 + 32) & 0x100) == 0 )
    {
      if ( !qword_1801664F0 )
        goto LABEL_20;
      v13 = ((__int64 (__fastcall *)(HANDLE, _UNICODE_STRING *))(__ROR8__(
                                                                   qword_180165028,
                                                                   64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              FileHandle,
              v29);
      if ( v13 == -1073741275 )
        v13 = 0;
    }
    if ( v13 < 0 )
    {
LABEL_21:
      ZwClose(SectionHandle);
LABEL_22:
      ZwClose(FileHandle);
      return (unsigned int)v13;
    }
LABEL_20:
    v13 = sub_180029EFC(a1);
    if ( v24 && v13 >= 0 )
    {
      *(_QWORD *)(a1 + 176) = FileHandle;
      *(_QWORD *)(a1 + 24) = SectionHandle;
      return (unsigned int)v13;
    }
    goto LABEL_21;
  }
  return 3221226029LL;
}
