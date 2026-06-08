/*
 * XREFs of InitAcpi1ThrottleStates @ 0x1C0020E78
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0020D1C (InitAcpiThrottleStates.c)
 * Callees:
 *     memset @ 0x1C000CEC0 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C002EE38 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1ThrottleStates(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbp
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned int v9; // r8d
  int v10; // eax

  v1 = 0;
  if ( ((unsigned int)dword_1C00113E4 <= 1 || (*(_DWORD *)(a1 + 264) & 0x200000) != 0)
    && (*(_DWORD *)(a1 + 264) & 0x100000LL) != 0
    && (v3 = a1 + 184, (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184))
    && (unsigned __int8)(byte_1C0011BE6 - 1) <= 3u
    && (unsigned __int8)byte_1C0011BE6 + (unsigned int)(unsigned __int8)byte_1C0011BE7 <= 0x20 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 4u);
    v4 = 1 << byte_1C0011BE6;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * (1 << byte_1C0011BE6) + 4), 0x72637250u);
    *(_QWORD *)(a1 + 472) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 20 * v4 + 4);
      v6 = 1;
      **(_DWORD **)(a1 + 472) = v4;
      if ( v4 > 1 )
      {
        v7 = 20LL;
        do
        {
          v8 = *(_QWORD *)(a1 + 472);
          v7 += 20LL;
          v9 = v4 - v6++;
          *(_DWORD *)(v8 + v7 - 16) = 100 * v9 / v4;
          *(_DWORD *)(v8 + v7 - 4) = (v9 << byte_1C0011BE7) | 0x10;
        }
        while ( v6 < v4 );
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 4LL) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 36LL) & 0xFFFFFFEF;
      v10 = *(_DWORD *)(v3 + 8);
      *(_QWORD *)(a1 + 448) = *(_QWORD *)v3;
      *(_DWORD *)(a1 + 456) = v10;
      *(_QWORD *)(a1 + 460) = 0LL;
      *(_DWORD *)(a1 + 468) = 0;
      *(_DWORD *)(a1 + 480) = 0;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
