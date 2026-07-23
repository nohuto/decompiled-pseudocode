/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x1402BB0E8
 * Callers:
 *     MiDbgCopyMemory @ 0x1402BA940 (MiDbgCopyMemory.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     MiCheckPhysicalAddressRange @ 0x1402BA67C (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402BB494 (MiDbgUnTranslatePhysicalAddress.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  __int16 v6; // bx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  int v11; // esi
  unsigned __int8 CurrentIrql; // dl
  __int64 v13; // rdx
  __int64 v14; // rbp
  int ProtectionPfnCompatible; // eax
  _QWORD *v16; // rdx
  int v17; // r8d
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r9
  char v22; // di
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // r8d
  volatile signed __int64 *v28; // rsi
  unsigned __int64 ValidPte; // rax
  _DWORD v31[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = qword_14043BA08;
  v6 = a1;
  if ( !qword_14043BA08 || !(unsigned int)MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v8 = v7 >> 12;
  v9 = v3 << 25 >> 16;
  v10 = 2LL;
  *(_DWORD *)a3 = 0;
  v11 = (a2 & 1) != 0 ? 4 : 1;
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  *(_BYTE *)(a3 + 4) = CurrentIrql;
  if ( v8 <= 0xFFFFFFFFFLL )
  {
    v13 = 0x20000000000000LL;
    if ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
    {
      v14 = 48 * v8 - 0x58000000000LL;
      if ( (a2 & 4) != 0 )
      {
        *(_DWORD *)a3 = 1;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
            return 0LL;
          ++dword_14043BA10;
          *(_DWORD *)a3 = 4;
        }
      }
      else
      {
        v31[0] = 0;
        *(_DWORD *)a3 = 2;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(v31, v13, v10);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
      }
      *(_QWORD *)(a3 + 8) = v14;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v11, 48 * v8 - 0x58000000000LL);
      v11 = ProtectionPfnCompatible | 8;
      if ( (*(_BYTE *)(v14 + 34) & 0xC0) != 0xC0 )
        v11 = ProtectionPfnCompatible;
      goto LABEL_67;
    }
  }
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&dword_14043BDC0) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14043BDC0);
  }
  v16 = (_QWORD *)qword_14043BDD0;
  v17 = 3;
  while ( v16 )
  {
    v18 = v16[5];
    if ( v8 < v18 )
    {
      v16 = (_QWORD *)*v16;
    }
    else
    {
      if ( v8 < v18 + 512 )
        break;
      v16 = (_QWORD *)v16[1];
    }
  }
  if ( !v16 )
    goto LABEL_36;
  v19 = 0LL;
  v17 = *(unsigned __int16 *)(v16[6] + 2 * ((v8 & 0xFFFFFFFFFLL) - v16[5])) >> 14;
  if ( v17 != 3 )
    v19 = v16;
  if ( !v19 )
  {
LABEL_36:
    v20 = (_QWORD *)qword_14043BDD8;
    while ( v20 )
    {
      v21 = v20[5];
      if ( v8 < v21 )
      {
        v20 = (_QWORD *)*v20;
      }
      else
      {
        if ( v8 < v21 + 512 )
        {
          v17 = *(unsigned __int16 *)(v20[6] + 2 * ((v8 & 0xFFFFFFFFFLL) - v21)) >> 14;
          break;
        }
        v20 = (_QWORD *)v20[1];
      }
    }
  }
  if ( v17 == 3 )
  {
    v17 = 0;
    if ( (a2 & 4) == 0 )
      v17 = 3;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_50;
    v22 = a2 & 0xD7;
  }
  else
  {
    v22 = a2 & 0xC7;
    if ( v17 )
    {
      if ( v17 == 2 )
        a2 = v22 | 0x20;
      else
        a2 = v22 | 8;
      goto LABEL_50;
    }
  }
  a2 = v22 | 0x10;
LABEL_50:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      v23 = __readcr4();
      if ( (v23 & 0x20080) != 0 )
      {
        __writecr4(v23 ^ 0x80);
        __writecr4(v23);
      }
      else
      {
        v24 = __readcr3();
        __writecr3(v24);
      }
      v11 |= 8u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_74:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      v25 = __readcr4();
      if ( (v25 & 0x20080) != 0 )
      {
        __writecr4(v25 ^ 0x80);
        __writecr4(v25);
      }
      else
      {
        v26 = __readcr3();
        __writecr3(v26);
      }
      v11 |= 0x18u;
    }
  }
  if ( v17 == 3 )
    ++dword_14043BA10;
LABEL_67:
  v27 = v11 | 0xA0000000;
  v28 = (volatile signed __int64 *)qword_14043BA08;
  ValidPte = MiMakeValidPte(qword_14043BA08, v8, v27);
  if ( (a2 & 0x41) != 0 )
    byte_14043BA00 = 1;
  if ( _InterlockedCompareExchange64(v28, ValidPte, 0LL) )
    goto LABEL_74;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v9, 0, 1u);
  else
    KeFlushSingleCurrentTb(v9, 0);
  return v9 + (v6 & 0xFFF);
}
