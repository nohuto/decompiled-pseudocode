/*
 * XREFs of ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x1800811BC
 * Callers:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18008115C (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18014C210 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CScheduleFrameInfoVolatileData::ResetTokens(CScheduleFrameInfoVolatileData *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 276); i = (unsigned int)(i + 1) )
    WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)this + 135) + 8 * i));
  *((_DWORD *)this + 276) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1080, 8u);
}
