/*
 * XREFs of RtlpHpHeapProtect @ 0x18010A8E4
 * Callers:
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009D890 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010ADE4 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010BA68 (RtlpHpSegProtect.c)
 */

NTSTATUS __fastcall RtlpHpHeapProtect(unsigned __int64 *BaseAddress, ULONG NewProtect)
{
  __int64 v2; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  bool v7; // zf
  char v8; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v10; // rdx
  PVOID BaseAddressa; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+38h] [rbp-40h] BYREF
  ULONG OldProtect; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  v2 = NewProtect;
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v12, 0x30uLL, 0LL);
  if ( result >= 0 )
  {
    RegionSize = v12[3];
    BaseAddressa = BaseAddress;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
    if ( result >= 0 )
    {
      result = RtlpHpSegProtect(BaseAddress + 32, (unsigned int)v2);
      if ( result >= 0 )
      {
        result = RtlpHpSegProtect(BaseAddress + 56, (unsigned int)v2);
        if ( result >= 0 )
        {
          v5 = BaseAddress[9];
          if ( !v5 )
            return 0;
          while ( 1 )
          {
LABEL_8:
            result = RtlpHpLargeAllocationProtect(v5, v2);
            if ( result < 0 )
              return result;
            v6 = *(_QWORD *)v5;
            if ( !*(_QWORD *)v5 )
              break;
            v7 = (BaseAddress[10] & 1) == 0;
LABEL_13:
            if ( v7 )
              v5 = v6;
            else
              v5 ^= v6;
          }
          v6 = *(_QWORD *)(v5 + 8);
          v8 = BaseAddress[10] & 1;
          if ( v6 )
          {
            v7 = v8 == 0;
            goto LABEL_13;
          }
          for ( i = v5; ; v5 = i )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v8 )
            {
              if ( !i )
                return result;
              i ^= v5;
            }
            if ( !i )
              return result;
            v10 = *(_QWORD *)(i + 8);
            if ( v8 )
            {
              if ( !v10 )
                continue;
              v10 ^= i;
            }
            if ( v10 && v10 != v5 )
            {
              v5 = v10;
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
  return result;
}
