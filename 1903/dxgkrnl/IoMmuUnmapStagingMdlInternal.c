/*
 * XREFs of IoMmuUnmapStagingMdlInternal @ 0x1C0050368
 * Callers:
 *     IoMmuMapStagingMdlInternal @ 0x1C0050068 (IoMmuMapStagingMdlInternal.c)
 *     IoMmuUnmapStagingMdl @ 0x1C0050304 (IoMmuUnmapStagingMdl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     IoMmuReferenceMdl @ 0x1C0050170 (IoMmuReferenceMdl.c)
 */

__int64 __fastcall IoMmuUnmapStagingMdlInternal(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax

  do
  {
    if ( (int)IoMmuReferenceMdl(a1 + 16, (__int64)a2, 0, a3) < 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v8 + 24) = 574LL;
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = a2[7];
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 48);
      v11 = v9 << 12;
      *(_QWORD *)v10 = 0LL;
      *(_WORD *)(v10 + 10) = 0;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_DWORD *)(v10 + 44) = 0;
      *(_DWORD *)(v10 + 40) = v11;
      *(_WORD *)(v10 + 8) = 8 * ((v11 >> 12) + 6);
      if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C00A2C98)(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 48)) < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v14 + 24) = 581LL;
        WdLogEvent5_WdAssertion(v14);
      }
    }
    result = a2[4];
  }
  while ( a2[6] != (_DWORD)result );
  return result;
}
