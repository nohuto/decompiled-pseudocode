/*
 * XREFs of VidSchCreateContext @ 0x1C007B2D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateContextInternal @ 0x1C0011938 (VidSchiCreateContextInternal.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0012988 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0015B78 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 */

char *__fastcall VidSchCreateContext(__int64 a1, __int64 a2)
{
  int v3; // r9d
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 v6; // rcx
  int SoftwareOnlyNodeForDriverEngine; // eax
  int *v8; // r10
  __int64 v9; // r11
  __int64 v11; // rax

  if ( a1 && a2 )
  {
    v3 = *(_WORD *)a2 & 0x440;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL);
    *(_DWORD *)a2 = (v3 != 0 ? 4 : 0) | *(_DWORD *)a2 & 0xFFFFFFE2 | 8 | (v3 == 0 ? 0x10 : 0);
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_QWORD *)(v4 + 32);
    if ( v3 )
      SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(v6, v5);
    else
      SoftwareOnlyNodeForDriverEngine = VidSchiDriverNodeEngineToSchedulerNode(v6, *(_DWORD *)(a2 + 4), v5);
    v8[1] = SoftwareOnlyNodeForDriverEngine;
    return VidSchiCreateContextInternal(v4, v8, v9);
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
    return 0LL;
  }
}
