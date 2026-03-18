/*
 * XREFs of VidSchCreateContext @ 0x1C007B6A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateContextInternal @ 0x1C000FDBC (VidSchiCreateContextInternal.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00109A8 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0014F4C (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 */

__int64 __fastcall VidSchCreateContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // r9d
  unsigned int v5; // edx
  __int64 v6; // rcx
  int SoftwareOnlyNodeForDriverEngine; // eax
  int *v8; // r10
  __int64 v9; // r11
  __int64 v11; // rax

  if ( a1 && a2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL);
    v4 = *(_WORD *)a2 & 0x440;
    *(_DWORD *)a2 = (4 * (v4 != 0)) | *(_DWORD *)a2 & 0xFFFFFFE2 | 8 | (16 * (v4 == 0));
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_QWORD *)(v3 + 32);
    if ( v4 )
      SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(v6, v5);
    else
      SoftwareOnlyNodeForDriverEngine = VidSchiDriverNodeEngineToSchedulerNode(v6, *(_DWORD *)(a2 + 4), v5);
    v8[1] = SoftwareOnlyNodeForDriverEngine;
    return VidSchiCreateContextInternal(v3, v8, v9);
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
    return 0LL;
  }
}
