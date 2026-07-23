/*
 * XREFs of WbVerifyVirtualAddressSignature @ 0x140691B44
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405855DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_14058585C @ 0x14058585C (sub_14058585C.c)
 *     WbInitializeEncryptionSegment @ 0x140585B2C (WbInitializeEncryptionSegment.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     sub_1408E6958 @ 0x1408E6958 (sub_1408E6958.c)
 *     sub_1408E6B44 @ 0x1408E6B44 (sub_1408E6B44.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1401B8750 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WbVerifyVirtualAddressSignature(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // r9d
  int v10; // eax
  ULONG_PTR v12; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v13[6]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD MemoryInformation[4]; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+74h] [rbp-14h]
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  v6 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         v13,
         0x18uLL,
         &ReturnLength);
  v9 = v6;
  if ( v6 >= 0 )
  {
    if ( qword_14040EE00 )
    {
      LOBYTE(v8) = (v13[4] >> 2) & 0xF;
      LOBYTE(v7) = 12;
      v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD), _QWORD))qword_14040EE00)(
              v8,
              v7,
              qword_14040EE00,
              (unsigned int)v6);
    }
    else
    {
      v10 = 0;
    }
    v9 = v10 == 0 ? 0xC0000428 : 0;
    if ( v10 )
    {
      if ( a3 )
      {
        v9 = ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryBasicInformation,
               MemoryInformation,
               0x30uLL,
               &v12);
        if ( v9 >= 0
          && ((unsigned __int64)BaseAddress < MemoryInformation[0]
           || (unsigned __int64)BaseAddress + v3 > MemoryInformation[3] + MemoryInformation[0]
           || v15 != 32) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return (unsigned int)v9;
}
