/*
 * XREFs of WbVerifyVirtualAddressSignature @ 0x1406B0494
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B41C0 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405B4440 @ 0x1405B4440 (sub_1405B4440.c)
 *     WbInitializeEncryptionSegment @ 0x1405B4710 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x1406AFEE0 (WbCreateHeapExecutedBlock.c)
 *     sub_1409210B8 @ 0x1409210B8 (sub_1409210B8.c)
 *     sub_1409212A4 @ 0x1409212A4 (sub_1409212A4.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1401C10B0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall WbVerifyVirtualAddressSignature(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  NTSTATUS v7; // r8d
  __int64 v8; // rcx
  ULONG_PTR v10; // [rsp+30h] [rbp-50h] BYREF
  _QWORD MemoryInformation[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h]
  _QWORD v13[6]; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+28h] BYREF

  v3 = a2;
  memset(v13, 0, sizeof(v13));
  MemoryInformation[0] = 0LL;
  MemoryInformation[1] = 0LL;
  v12 = 0LL;
  v7 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         MemoryInformation,
         0x18uLL,
         &ReturnLength);
  if ( v7 >= 0 )
  {
    v8 = (unsigned int)v12 >> 2;
    LOBYTE(v8) = v8 & 0xF;
    if ( qword_140436440 && (LOBYTE(v6) = 12, (unsigned int)qword_140436440(v8, v6)) )
    {
      v7 = 0;
      if ( a3 )
      {
        v7 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v13, 0x30uLL, &v10);
        if ( v7 >= 0
          && ((unsigned __int64)BaseAddress < v13[0]
           || (unsigned __int64)BaseAddress + v3 > v13[3] + v13[0]
           || HIDWORD(v13[4]) != 32) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  return (unsigned int)v7;
}
