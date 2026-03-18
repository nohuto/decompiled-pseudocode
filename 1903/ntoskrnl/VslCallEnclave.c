/*
 * XREFs of VslCallEnclave @ 0x14085174C
 * Callers:
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     KeAlertThreadByThreadId @ 0x1401198BC (KeAlertThreadByThreadId.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall VslCallEnclave(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __int64 CurrentThread; // rsi
  NTSTATUS v12; // ebx
  __int64 MemoryDescriptorList; // [rsp+40h] [rbp-F8h] BYREF
  __int16 MemoryDescriptorList_8; // [rsp+48h] [rbp-F0h]
  __int16 MemoryDescriptorList_10; // [rsp+4Ah] [rbp-EEh]
  __int128 MemoryDescriptorList_12; // [rsp+4Ch] [rbp-ECh]
  int MemoryDescriptorList_28; // [rsp+5Ch] [rbp-DCh]
  unsigned __int64 MemoryDescriptorList_32; // [rsp+60h] [rbp-D8h]
  int MemoryDescriptorList_40; // [rsp+68h] [rbp-D0h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+6Ch] [rbp-CCh]
  _QWORD v24[14]; // [rsp+80h] [rbp-B8h] BYREF

  memset(v24, 0, 0x68uLL);
  MemoryDescriptorList_12 = 0LL;
  MemoryDescriptorList_28 = 0;
  *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList = 0LL;
  MemoryDescriptorList_8 = 8 * (((unsigned __int16)((CurrentThread & 0xFFF) + 6175) >> 12) + 6);
  MemoryDescriptorList_10 = 0;
  MemoryDescriptorList_32 = CurrentThread & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)MemoryDescriptorList_44 = CurrentThread & 0xFFF;
  MemoryDescriptorList_40 = 2080;
  MmProbeAndLockPages((PMDL)&MemoryDescriptorList, 0, IoWriteAccess);
  LODWORD(v24[1]) = a4;
  HIDWORD(v24[1]) = *(_DWORD *)(a1 + 40);
  v24[2] = *a3;
  v24[3] = *a5;
  v24[4] = *(_QWORD *)&MemoryDescriptorList_44[4];
  BYTE4(v24[7]) = 0;
  v24[5] = *a6;
  v24[6] = *a7;
  v12 = VslpEnterIumSecureMode(1, 0LL, (unsigned int)*a2, (__int64)v24);
  if ( v12 < 0 )
  {
    *a9 = 0;
  }
  else
  {
    *a2 = HIDWORD(v24[0]);
    *a3 = v24[2];
    *a5 = v24[3];
    *a8 = v24[7];
    *a6 = v24[5];
    *a7 = v24[6];
    *a9 = BYTE5(v24[7]);
  }
  MmUnlockPages((PMDL)&MemoryDescriptorList);
  if ( BYTE4(v24[7]) )
    KeAlertThreadByThreadId(CurrentThread);
  return (unsigned int)v12;
}
