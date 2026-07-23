/*
 * XREFs of MiCheckVirtualAddress @ 0x140098C30
 * Callers:
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14002D0E8 (MiFindActualFaultingPte.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MiCheckProtoAccess @ 0x140098B50 (MiCheckProtoAccess.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x140098DE0 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  __int64 v5; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 4;
      return 0LL;
    }
LABEL_15:
    *a2 = 24;
    return 0LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
    goto LABEL_5;
  v5 = a1 & 0x7FFFFFFFF000LL;
  if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    *a2 = 1;
    return qword_14043B0B8;
  }
  if ( v5 != qword_14043B0C8 || !v5 )
  {
LABEL_5:
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = Process[2].Affinity.Bitmap[5];
    if ( v7 )
    {
      v8 = a1 >> 12;
      if ( a1 >> 12 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
        && v8 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
      {
LABEL_8:
        *a3 = v7;
        return MiCheckUserVirtualAddress(a1, a2, v7);
      }
      v7 = Process[2].Affinity.Bitmap[4];
      while ( v7 )
      {
        if ( v8 > (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
        {
          v7 = *(_QWORD *)(v7 + 8);
        }
        else
        {
          if ( v8 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) )
          {
            Process[2].Affinity.Bitmap[5] = v7;
            goto LABEL_8;
          }
          v7 = *(_QWORD *)v7;
        }
      }
    }
    *a3 = 0LL;
    goto LABEL_15;
  }
  result = qword_14043B0C0;
  *a2 = 1;
  return result;
}
