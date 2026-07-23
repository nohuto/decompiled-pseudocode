/*
 * XREFs of ExpQueryNumaAvailableMemory @ 0x1408CD5CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetProcessPartitionId @ 0x1400F0D4C (MmGetProcessPartitionId.c)
 *     MmGetAvailablePages @ 0x1400F0D5C (MmGetAvailablePages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmGetChannelInformation @ 0x1408604B8 (MmGetChannelInformation.c)
 */

__int64 __fastcall ExpQueryNumaAvailableMemory(__int64 a1)
{
  unsigned int v2; // edx
  _DWORD *v3; // r8
  unsigned __int16 ProcessPartitionId; // r15
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // esi
  __int64 i; // rbx
  __int64 v9; // rdi
  __int64 j; // r8
  SIZE_T v11; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  SIZE_T v14; // [rsp+50h] [rbp-38h]

  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( v2 >= 4 )
  {
    v6 = (unsigned __int16)KeNumberNodes;
    v7 = (unsigned __int16)KeNumberNodes;
    *(_DWORD *)a1 = (unsigned __int16)KeNumberNodes - 1;
    if ( (v2 - 8) >> 3 <= v6 )
      v7 = (v2 - 8) >> 3;
    if ( v2 >= 8 && v7 )
    {
      *v3 = 8 * v7 + 8;
      if ( (unsigned __int16)v6 <= 1u )
      {
        *(_QWORD *)(a1 + 8) = MmGetAvailablePages(ProcessPartitionId) << 12;
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
        {
          result = MmGetChannelInformation(ProcessPartitionId, i, &P, &v11);
          if ( (int)result < 0 )
            return result;
          v9 = 0LL;
          v13 = 0LL;
          v14 = v11 / 0x28;
          for ( j = 0LL; (unsigned int)j < v11 / 0x28; j = (unsigned int)(j + 1) )
          {
            v9 += *((_QWORD *)P + 5 * j + 2) + *((_QWORD *)P + 5 * j + 3);
            v13 = v9;
          }
          ExFreePoolWithTag(P, 0);
          *(_QWORD *)(a1 + 8 * i + 8) = v9 << 12;
        }
      }
      return 0LL;
    }
    else
    {
      *v3 = 4;
      return 0LL;
    }
  }
  else
  {
    if ( v3 )
      *v3 = 4;
    return 3221225476LL;
  }
}
