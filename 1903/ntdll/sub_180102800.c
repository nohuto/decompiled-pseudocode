/*
 * XREFs of sub_180102800 @ 0x180102800
 * Callers:
 *     RtlQueryHeapInformation @ 0x180067610 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1801028F0 @ 0x1801028F0 (sub_1801028F0.c)
 *     sub_180114820 @ 0x180114820 (sub_180114820.c)
 */

__int64 __fastcall sub_180102800(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed int v5; // ebx
  char v6; // al

  if ( a2 == 40 && *(_DWORD *)a1 == 2 )
  {
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      RtlAcquireSRWLockShared(&stru_180166390);
      if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 )
      {
        *(_BYTE *)(a1 + 33) |= 1u;
        v5 = sub_180114820(&qword_1801663A0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
        if ( v5 >= 0 )
        {
          v5 = sub_18006790C((__int64)sub_180102590, a1, 0);
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
      RtlReleaseSRWLockShared(&stru_180166390);
    }
    else
    {
      return (unsigned int)sub_1801028F0();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
