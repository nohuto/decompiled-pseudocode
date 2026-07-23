/*
 * XREFs of PspApplyIFEOPerfOptions @ 0x1406CD1D8
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     PspSetProcessPriorityClass @ 0x1406C9468 (PspSetProcessPriorityClass.c)
 */

__int64 __fastcall PspApplyIFEOPerfOptions(__int64 a1, unsigned int *a2, KPROCESSOR_MODE a3, __int64 a4)
{
  __int64 result; // rax
  int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // edi
  int v14; // edx

  result = *a2;
  if ( (result & 1) != 0 )
  {
    v12 = a2[2];
    if ( v12 < 4 )
    {
      if ( v12 <= 2 || (result = SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a3) & 1, (_DWORD)result) )
      {
        LODWORD(result) = *(_DWORD *)(a1 + 772);
        v13 = v12 << 27;
        do
        {
          v14 = result;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)(a1 + 772),
                                   v13 | result & 0xC7FFFFFF,
                                   result);
        }
        while ( (_DWORD)result != v14 );
      }
    }
  }
  v8 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    result = MmGetDefaultPagePriority();
    if ( v9 < (unsigned int)result )
    {
      LODWORD(result) = *(_DWORD *)(a1 + 768);
      v10 = v9 << 12;
      do
      {
        v11 = result;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)(a1 + 768),
                                 v10 | result & 0xFFFF8FFF,
                                 result);
      }
      while ( (_DWORD)result != v11 );
      v8 = *a2;
    }
  }
  if ( (v8 & 4) != 0 )
  {
    result = a2[4];
    if ( (unsigned int)result <= 0xFF )
    {
      LOBYTE(a4) = a3;
      return PspSetProcessPriorityClass(a1, a2[4], 0LL, a4);
    }
  }
  return result;
}
