/*
 * XREFs of sub_1800E319C @ 0x1800E319C
 * Callers:
 *     sub_1800E29E8 @ 0x1800E29E8 (sub_1800E29E8.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 * Callees:
 *     ZwSetInformationFile @ 0x18009CBC0 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall sub_1800E319C(char *a1, __int64 a2)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  FileInformation = a2;
  return ZwSetInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FilePositionInformation);
}
