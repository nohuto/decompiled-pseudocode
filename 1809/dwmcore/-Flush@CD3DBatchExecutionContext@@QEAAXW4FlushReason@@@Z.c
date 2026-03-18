/*
 * XREFs of ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180066164
 * Callers:
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x1800148A0 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860 (-AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV-$span@$$CBG$0-0@gsl@@IPEAPEAX@Z.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x180189B28 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::Flush(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) |= a2;
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v3 + 40) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 16) + 640LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v3 + 16) + 640LL),
      *(_QWORD *)(v3 + 24),
      0LL);
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_DWORD *)(v3 + 48) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 64) + 640LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v3 + 64) + 640LL),
      *(_QWORD *)(v3 + 72),
      0LL);
    *(_QWORD *)(v3 + 88) = 0LL;
    *(_DWORD *)(v3 + 96) = 0;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 96),
               *(unsigned int *)(a1 + 88),
               0LL);
    ++*(_DWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 92) = 0;
    *(_DWORD *)(a1 + 96) = 0;
  }
  return result;
}
