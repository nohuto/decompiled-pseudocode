/*
 * XREFs of VslValidateDynamicCodePages @ 0x14027D180
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall VslValidateDynamicCodePages(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // r8
  __int16 v9; // dx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE v15[8]; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-120h]
  __int64 v17; // [rsp+30h] [rbp-118h]
  unsigned __int64 v18; // [rsp+38h] [rbp-110h]
  __int64 v19; // [rsp+40h] [rbp-108h]
  __int64 v20; // [rsp+48h] [rbp-100h]
  __int64 v21; // [rsp+50h] [rbp-F8h]
  struct _MDL MemoryDescriptorList; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-88h]
  struct _MDL v24; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-50h]

  v8 = 8
     * (((unsigned int)(*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44)) + (*(_DWORD *)(a1 + 32) & 0xFFFuLL) + 4095) >> 12)
     + 48;
  v9 = a1;
  v10 = (v8 + (a1 & 0xFFF) + 4095) >> 12;
  if ( v10 > 1 )
    return 3221225485LL;
  v24.Next = 0LL;
  v24.Size = 8 * (v10 + 6);
  v24.MdlFlags = 0;
  v24.StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v24.ByteOffset = v9 & 0xFFF;
  v24.ByteCount = v8;
  MiProbeAndLockPages((__int64)&v24, 0, 0);
  v11 = 8
      * (((*(_DWORD *)(a4 + 32) & 0xFFFLL)
        + 4095
        + (unsigned __int64)(unsigned int)(*(_DWORD *)(a4 + 40) + *(_DWORD *)(a4 + 44))) >> 12)
      + 48;
  v12 = (v11 + (a4 & 0xFFF) + 4095) >> 12;
  if ( v12 > 1 )
    return 3221225485LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (v12 + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a4 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a4 & 0xFFF;
  MemoryDescriptorList.ByteCount = v11;
  MiProbeAndLockPages((__int64)&MemoryDescriptorList, 0, 0);
  v16 = a1;
  v17 = v25;
  v18 = a4;
  v19 = v23;
  v20 = a2;
  v21 = a3;
  v13 = VslpEnterIumSecureMode(2u, 31LL, 0, (__int64)v15);
  MmUnlockPages(&MemoryDescriptorList);
  MmUnlockPages(&v24);
  return v13;
}
