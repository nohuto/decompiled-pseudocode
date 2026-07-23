/*
 * XREFs of VslFinalizeSecureImageHash @ 0x14027CC00
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall VslFinalizeSecureImageHash(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v6; // [rsp+50h] [rbp-98h]
  _BYTE v7[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v8; // [rsp+68h] [rbp-80h]
  __int64 v9; // [rsp+70h] [rbp-78h]
  __int128 v10; // [rsp+78h] [rbp-70h]

  v2 = a2;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4167) >> 12) + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a2 & 0xFFF;
  MemoryDescriptorList.ByteCount = 72;
  MiProbeAndLockPages((__int64)&MemoryDescriptorList, 0, 1);
  v8 = a1;
  v9 = v2;
  v10 = v6;
  LODWORD(v2) = VslpEnterIumSecureMode(2u, 26LL, 0, (__int64)v7);
  MmUnlockPages(&MemoryDescriptorList);
  return (unsigned int)v2;
}
