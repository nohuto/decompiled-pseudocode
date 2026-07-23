/*
 * XREFs of sub_1800E2500 @ 0x1800E2500
 * Callers:
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009C900 (ZwQueryInformationFile.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

NTSTATUS __fastcall sub_1800E2500(char *FileHandle, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  int v9; // edi
  int v10; // [rsp+30h] [rbp-68h] BYREF
  const wchar_t *v11; // [rsp+38h] [rbp-60h]
  int v12; // [rsp+40h] [rbp-58h] BYREF
  const wchar_t *v13; // [rsp+48h] [rbp-50h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _BYTE FileInformation[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v16; // [rsp+68h] [rbp-30h]

  v10 = 3145774;
  v11 = L"LdrResGetRCConfig Enter";
  v12 = 3014700;
  v13 = L"LdrResGetRCConfig Exit";
  v4 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v5 = 2147353477LL;
  v6 = 2147353476LL;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v7 = 2147353476LL;
    sub_1800E0820((unsigned __int16 *)&v10, *(unsigned __int8 *)v7);
  }
  if ( a2 && (unsigned __int64)(FileHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    v9 = result;
    if ( result < 0 )
      return result;
    *a2 = v16;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800E0820((unsigned __int16 *)&v12, *(unsigned __int8 *)v6);
  }
  return v9;
}
