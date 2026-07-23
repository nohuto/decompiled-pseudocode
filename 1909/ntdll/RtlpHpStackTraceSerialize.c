/*
 * XREFs of RtlpHpStackTraceSerialize @ 0x1801028E0
 * Callers:
 *     RtlQueryHeapInformation @ 0x180067860 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpEnumProcessHeaps @ 0x180067B5C (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801029D0 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlStackDbContextSerialize @ 0x180114950 (RtlStackDbContextSerialize.c)
 */

__int64 __fastcall RtlpHpStackTraceSerialize(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed int v5; // ebx
  char v6; // al

  if ( a2 == 40 && *(_DWORD *)a1 == 2 )
  {
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
      if ( (dword_1801663A8 & 1) != 0 && (dword_1801663A8 & 2) != 0 )
      {
        *(_BYTE *)(a1 + 33) |= 1u;
        v5 = RtlStackDbContextSerialize(&qword_1801663B0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
        if ( v5 >= 0 )
        {
          v5 = RtlpEnumProcessHeaps((__int64)RtlpHpStackTraceHeapSerialize, a1, 0);
          if ( v5 >= 0 )
          {
            v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 16))(0LL, 0LL, *(_QWORD *)(a1 + 24));
            if ( v5 >= 0 )
            {
              v5 = 0;
              if ( a3 )
                *a3 = 0LL;
            }
          }
        }
      }
      else
      {
        v6 = *(_BYTE *)(a1 + 32) - 1;
        *(_BYTE *)(a1 + 33) = 0;
        v5 = v6 != 0 ? 0xC000000D : 0;
      }
      RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
    }
    else
    {
      return (unsigned int)RtlpHpStackTraceSerializeRemote();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
