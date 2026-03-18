/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800994F8
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x1800994A8 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800CFA60 (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 * Callees:
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800644A8 (_anonymous_namespace_--AddToResourceCount.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x18006C544 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009A0C4 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  unsigned int *Entry; // rax
  unsigned int v5; // r10d
  unsigned int *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // r8d

  Entry = (unsigned int *)CResourceTable::GetEntry(this, a2);
  v6 = Entry;
  if ( Entry )
  {
    v7 = *Entry;
    if ( v7 )
    {
      if ( *((_QWORD *)v6 + 1) )
      {
        AddToResourceCount((_DWORD *)(*((_QWORD *)this + 7) + 44LL), v7, -1);
        anonymous_namespace_::AddToResourceCount(v8, v9);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 1) + 16LL))(*((_QWORD *)v6 + 1));
        *((_QWORD *)v6 + 1) = 0LL;
      }
      memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
      return 0;
    }
  }
  return v5;
}
