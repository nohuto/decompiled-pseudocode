/*
 * XREFs of ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800D9488
 * Callers:
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800A9C9C (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::EnqueueOffThreadPreComputeRequest(
        CComposition *this,
        struct _SLIST_ENTRY *a2,
        void *a3,
        struct _SLIST_ENTRY *a4)
{
  struct _SLIST_ENTRY *v8; // rax
  __int64 v9; // rcx
  struct _SLIST_ENTRY *v10; // rdi
  unsigned int v11; // ebx

  if ( *((_BYTE *)this + 1277) )
  {
    v11 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004004, 0xB14u, 0LL);
  }
  else
  {
    v8 = (struct _SLIST_ENTRY *)DefaultHeap::Alloc(0x30uLL);
    v10 = v8;
    if ( v8 )
      memset_0(v8, 0, 0x30uLL);
    else
      v10 = 0LL;
    if ( v10 )
    {
      v10[2].Next = a4;
      v10[1].Next = a2;
      v11 = 0;
      *((_QWORD *)&v10[1].Next + 1) = a3;
      if ( !InterlockedPushEntrySList((PSLIST_HEADER)this + 78, v10) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 69) + 96LL))(
          *((_QWORD *)this + 69),
          0LL,
          0x100000LL);
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0xB18u, 0LL);
    }
  }
  return v11;
}
