/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800EAAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EADE0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800EAF70 @ 0x1800EAF70 (sub_1800EAF70.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(PCWSTR SourceString)
{
  char v1; // di
  int File; // ebx
  PCWSTR SourceStringa; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  int v6; // [rsp+88h] [rbp+Fh]
  __int64 v7; // [rsp+90h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp+1Fh]
  int v9; // [rsp+A0h] [rbp+27h]
  __int128 v10; // [rsp+A8h] [rbp+2Fh]
  char v11; // [rsp+E0h] [rbp+67h] BYREF
  char v12; // [rsp+E8h] [rbp+6Fh]
  __int64 v13; // [rsp+F0h] [rbp+77h]
  __int64 v14; // [rsp+F8h] [rbp+7Fh]

  v14 = 0LL;
  v1 = 0;
  SourceStringa = 0LL;
  v12 = 1;
  v11 = 0;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  else
  {
    sub_1800EAF70(&SourceStringa, &v11);
    RtlInitUnicodeString(&DestinationString, SourceStringa);
    v1 = v11;
  }
  v7 = 0LL;
  p_DestinationString = &DestinationString;
  v6 = 48;
  v9 = 64;
  v10 = 0LL;
  v13 = 67584LL;
  File = ZwCreateFile();
  if ( File >= 0 )
  {
    --v13;
    File = ZwWriteFile();
    if ( File >= 0 )
      File = RtlRestoreBootStatusDefaults(v14);
  }
  if ( v14 )
    ZwClose();
  if ( v1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceStringa);
  return (unsigned int)File;
}
