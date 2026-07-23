/*
 * XREFs of sub_180047BA0 @ 0x180047BA0
 * Callers:
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     sub_18004E6F8 @ 0x18004E6F8 (sub_18004E6F8.c)
 *     sub_18004E9E0 @ 0x18004E9E0 (sub_18004E9E0.c)
 *     sub_18010BA90 @ 0x18010BA90 (sub_18010BA90.c)
 * Callees:
 *     ZwAllocateVirtualMemoryEx @ 0x18009D550 (ZwAllocateVirtualMemoryEx.c)
 */

NTSTATUS __fastcall sub_180047BA0(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        __int64 a3,
        int a4,
        ULONG PageProtection,
        int a6,
        int a7,
        __int64 a8)
{
  ULONG v8; // r9d
  ULONG ExtendedParameterCount; // edx
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  _QWORD v16[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v17[5]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a4 & 0xBFFFFFFF;
  if ( dword_180163688 && (v8 & 0x2000) == 0 )
    v8 &= ~0x20000000u;
  ExtendedParameterCount = 0;
  if ( (v8 & 0x2000) != 0 )
  {
    v16[2] = a3;
    v17[0] = 1LL;
    v14 = 0LL;
    v16[1] = 0LL;
    ExtendedParameterCount = 1;
    v17[1] = v16;
    if ( (v8 & 0x40000) != 0 )
      v14 = 0x100000000LL;
    v16[0] = v14;
    v15 = v8 & 0xFFFBFFFF;
    if ( (v8 & 0x40000) == 0 )
      v15 = v8;
    v8 = v15;
    if ( a8 )
    {
      v17[3] = a8;
      v17[2] = 3LL;
      ExtendedParameterCount = 2;
    }
  }
  ExtendedParameters = (MEM_EXTENDED_PARAMETER *)v17;
  if ( !ExtendedParameterCount )
    ExtendedParameters = 0LL;
  return ZwAllocateVirtualMemoryEx(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           RegionSize,
           v8,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount);
}
