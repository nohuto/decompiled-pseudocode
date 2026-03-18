/*
 * XREFs of MiAllocateVad @ 0x140692B84
 * Callers:
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 *     MiAllocateProcessVads @ 0x140692ADC (MiAllocateProcessVads.c)
 *     MiCreatePlaceholderStorage @ 0x14089922C (MiCreatePlaceholderStorage.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAddSecureEntry @ 0x140609DB0 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx
  int v8; // edx
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  int v11; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
  v7 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v8 = *(_DWORD *)(v7 + 48);
    *(_QWORD *)(v7 + 40) = 0LL;
    v9 = v8 & 0xFFFFF07F | 0x80;
    *(_QWORD *)(v7 + 16) = -2LL;
    *(_DWORD *)(v7 + 24) = a1 >> 12;
    *(_BYTE *)(v7 + 32) = a1 >> 44;
    *(_DWORD *)(v7 + 28) = a2 >> 12;
    *(_BYTE *)(v7 + 33) = a2 >> 44;
    if ( (a3 & 1) != 0 )
    {
      v10 = ((unsigned int)(a2 >> 12) | ((unsigned __int64)(unsigned __int8)(a2 >> 44) << 32))
          - ((unsigned int)(a1 >> 12) | ((unsigned __int64)(unsigned __int8)(a1 >> 44) << 32))
          + 1;
      *(_DWORD *)(v7 + 52) |= 0x80000000;
    }
    else if ( (a3 & 2) != 0 )
    {
      v10 = 0x7FFFFFFFDLL;
      v9 = v9 & 0xFFFFF07F | 0xC00;
    }
    else
    {
      v10 = 0x7FFFFFFFFLL;
    }
    v11 = v10 ^ *(_DWORD *)(v7 + 52);
    *(_DWORD *)(v7 + 48) = v9 | 0x100000;
    *(_DWORD *)(v7 + 52) ^= v11 & 0x7FFFFFFF;
    *(_BYTE *)(v7 + 34) = v10 >> 31;
    if ( (a3 & 2) != 0 || MiAddSecureEntry(v7, a1, a2, -2147483647, 0) )
      return v7;
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  return 0LL;
}
