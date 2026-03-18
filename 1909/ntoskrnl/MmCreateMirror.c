/*
 * XREFs of MmCreateMirror @ 0x140889B40
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1401C35F0 (ZwQueryLicenseValue.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS MmCreateMirror(void)
{
  KPROCESSOR_MODE PreviousMode; // dl
  _QWORD v2[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-10h]
  int v5; // [rsp+64h] [rbp-Ch]
  int v6; // [rsp+80h] [rbp+10h] BYREF
  int v7; // [rsp+88h] [rbp+18h]
  char v8; // [rsp+90h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0;
  v2[1] = L"Kernel-MemoryMirroringSupported";
  v2[0] = 4194366LL;
  v7 = 4;
  if ( (int)ZwQueryLicenseValue((__int64)v2, (__int64)&v8, (__int64)&v6) < 0 || v6 != 1 )
    return -1073741206;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return -1073741727;
  if ( (dword_140571194 & 1) == 0 )
    return -1073741637;
  v3[0] = off_140426810[0];
  v3[1] = off_140426818[0];
  v3[2] = off_140426820[0];
  v3[3] = (unsigned __int64)off_140426830 & -(__int64)((dword_140571194 & 2) != 0);
  v4 = 2;
  return MmDuplicateMemory((__int64)v3);
}
