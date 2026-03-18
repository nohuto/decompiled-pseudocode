/*
 * XREFs of ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800EA578
 * Callers:
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x18002BBC8 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::EnqueueOffThreadPreComputeRequest(
        CComposition *this,
        struct _SLIST_ENTRY *a2,
        void *a3,
        struct _SLIST_ENTRY *a4)
{
  unsigned int v4; // ebx
  struct _SLIST_ENTRY *v9; // rax
  __int64 v10; // rcx
  struct _SLIST_ENTRY *v11; // rdi

  v4 = 0;
  if ( *((_BYTE *)this + 1260) )
  {
    v4 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467260, 0xBDFu);
  }
  else
  {
    v9 = (struct _SLIST_ENTRY *)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
    v11 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x30uLL);
    else
      v11 = 0LL;
    if ( v11 )
    {
      v11[1].Next = a2;
      *((_QWORD *)&v11[1].Next + 1) = a3;
      v11[2].Next = a4;
      if ( !InterlockedPushEntrySList((PSLIST_HEADER)this + 77, v11) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 67) + 104LL))(
          *((_QWORD *)this + 67),
          0LL,
          0x100000LL);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xBE3u);
    }
  }
  return v4;
}
