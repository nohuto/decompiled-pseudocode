/*
 * XREFs of MiCheckVirtualAddress @ 0x14005DC90
 * Callers:
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiResolveDemandZeroFault @ 0x1400ACCF0 (MiResolveDemandZeroFault.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1400CBAE8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1400CBBA4 (MiFindActualFaultingPte.c)
 *     MiCheckProtoAccess @ 0x14012BDF8 (MiCheckProtoAccess.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x14005DE50 (MiCheckUserVirtualAddress.c)
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
LABEL_11:
    *a2 = 24;
    return 0LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) != 0 )
    goto LABEL_5;
  v5 = a1 & 0x7FFFFFFFF000LL;
  if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    result = qword_140465710;
    *a2 = 1;
    return result;
  }
  if ( v5 != qword_140465720 || !v5 )
  {
LABEL_5:
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = Process[2].Affinity.Bitmap[9];
    if ( v7 )
    {
      v8 = a1 >> 12;
      if ( a1 >> 12 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
        && v8 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
      {
LABEL_8:
        *a3 = v7;
        return MiCheckUserVirtualAddress(a1, a2);
      }
      v7 = Process[2].Affinity.Bitmap[8];
      if ( v7 )
      {
        while ( 1 )
        {
          if ( v8 > (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
          {
            v7 = *(_QWORD *)(v7 + 8);
          }
          else
          {
            if ( v8 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) )
            {
              Process[2].Affinity.Bitmap[9] = v7;
              goto LABEL_8;
            }
            v7 = *(_QWORD *)v7;
          }
          if ( !v7 )
          {
            *a3 = 0LL;
            result = 0LL;
            *a2 = 24;
            return result;
          }
        }
      }
      *a3 = 0LL;
    }
    goto LABEL_11;
  }
  result = qword_140465718;
  *a2 = 1;
  return result;
}
