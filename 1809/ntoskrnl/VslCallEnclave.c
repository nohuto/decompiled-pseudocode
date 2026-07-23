/*
 * XREFs of VslCallEnclave @ 0x140818EFC
 * Callers:
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     KeAlertThreadByThreadId @ 0x1400CCE2C (KeAlertThreadByThreadId.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall VslCallEnclave(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __int64 CurrentThread; // rsi
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _MDL MemoryDescriptorList; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-C8h]
  _BYTE v20[4]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v21; // [rsp+84h] [rbp-B4h]
  int v22; // [rsp+88h] [rbp-B0h]
  int v23; // [rsp+8Ch] [rbp-ACh]
  __int64 v24; // [rsp+90h] [rbp-A8h]
  __int64 v25; // [rsp+98h] [rbp-A0h]
  __int64 v26; // [rsp+A0h] [rbp-98h]
  __int64 v27; // [rsp+A8h] [rbp-90h]
  __int64 v28; // [rsp+B0h] [rbp-88h]
  int v29; // [rsp+B8h] [rbp-80h]
  char v30; // [rsp+BCh] [rbp-7Ch]
  char v31; // [rsp+BDh] [rbp-7Bh]

  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (((unsigned __int16)((CurrentThread & 0xFFF) + 6159) >> 12) + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(CurrentThread & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = CurrentThread & 0xFFF;
  MemoryDescriptorList.ByteCount = 2064;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoWriteAccess);
  v22 = a4;
  v23 = *(_DWORD *)(a1 + 40);
  v24 = *a3;
  v25 = *a5;
  v26 = v19;
  v30 = 0;
  v27 = *a6;
  v28 = *a7;
  v12 = VslpEnterIumSecureMode(1u, 0LL, *a2, (__int64)v20);
  if ( v12 < 0 )
  {
    *a9 = 0;
  }
  else
  {
    *a2 = v21;
    *a3 = v24;
    *a5 = v25;
    *a8 = v29;
    *a6 = v27;
    *a7 = v28;
    *a9 = v31;
  }
  MmUnlockPages(&MemoryDescriptorList);
  if ( v30 )
    KeAlertThreadByThreadId(CurrentThread, v13, v14);
  return (unsigned int)v12;
}
