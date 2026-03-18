/*
 * XREFs of MiStartDpcGang @ 0x1402E897C
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     MiDecommitRegion @ 0x140606890 (MiDecommitRegion.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFreeLargePagesFinish @ 0x1402DFAC0 (MiFreeLargePagesFinish.c)
 *     MiDoGangAssignment @ 0x1402E845C (MiDoGangAssignment.c)
 *     MiGetGangAssignment @ 0x1402E8760 (MiGetGangAssignment.c)
 */

unsigned __int64 __fastcall MiStartDpcGang(__int64 a1)
{
  int v2; // ecx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned int i; // edi
  __int64 v8; // r14
  __int64 v9; // rcx
  _BYTE v10[56]; // [rsp+20h] [rbp-38h] BYREF

  memset(v10, 0, 0x20uLL);
  v2 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 100) = 0;
  if ( (v2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = v3 / *(unsigned int *)(a1 + 112);
    v5 = v4 * *(unsigned int *)(a1 + 112);
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = v3 - v5;
  }
  else
  {
    result = *(unsigned __int16 *)(a1 + 2);
    if ( !(_WORD)result )
      return result;
    if ( (_WORD)result == 1 && (v2 & 2) == 0 )
    {
      MiGetGangAssignment(a1, (__int64)v10);
      MiDoGangAssignment(a1, (__int64)v10);
      goto LABEL_4;
    }
  }
  KeGenericCallDpc((__int64)MiDpcGangTarget, a1);
LABEL_4:
  result = *(unsigned int *)(a1 + 108);
  if ( (result & 1) == 0 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 112); ++i )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_QWORD *)(v8 + 8LL * i);
      if ( v9 )
      {
        result = *(unsigned int *)(a1 + 108);
        if ( (result & 0x40) == 0 )
        {
          result = MiFreeLargePagesFinish(v9);
          *(_QWORD *)(v8 + 8LL * i) = 0LL;
        }
      }
    }
  }
  return result;
}
