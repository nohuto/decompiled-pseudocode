/*
 * XREFs of ?AllowGraphicsPartitionUse@DXGGLOBAL@@QEAA?AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ @ 0x1C0241C0C
 * Callers:
 *     ?DxgkIsGraphisPartitionApplication@@YA_NXZ @ 0x1C025E0B8 (-DxgkIsGraphisPartitionApplication@@YA_NXZ.c)
 * Callees:
 *     ?DxgkpQueryGraphicsPartitionAvailability@@YA?AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ @ 0x1C02426E8 (-DxgkpQueryGraphicsPartitionAvailability@@YA-AW4_DXGGLOBAL_GRAPHICS_PARTITION_AVAILABILITY@@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::AllowGraphicsPartitionUse(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( *(struct _KTHREAD **)(a1 + 224) != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v3 + 24) = 1534LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !*(_BYTE *)(a1 + 303928) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 1535LL;
    WdLogEvent5_WdAssertion(v4);
  }
  result = *(unsigned int *)(a1 + 303932);
  if ( (_DWORD)result == -1 )
  {
    result = DxgkpQueryGraphicsPartitionAvailability();
    *(_DWORD *)(a1 + 303932) = result;
    if ( (_DWORD)result == -1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v8 + 24) = 1540LL;
      WdLogEvent5_WdAssertion(v8);
      return *(unsigned int *)(a1 + 303932);
    }
  }
  return result;
}
