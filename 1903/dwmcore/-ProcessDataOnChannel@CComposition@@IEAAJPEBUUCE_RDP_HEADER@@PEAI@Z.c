/*
 * XREFs of ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180041F98
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180041E70 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18004202C (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18009D300 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ProcessDataOnChannel(
        CComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  int AttachedChannel; // eax
  unsigned int v7; // ecx
  struct CChannelContext *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  struct CChannelContext *v13; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v13 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, *((_DWORD *)a2 + 4), &v13);
  v8 = v13;
  v9 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, AttachedChannel, 0x1BAu, 0LL);
  }
  else
  {
    v10 = CComposition::ProcessCommandBatch(this, *((const void **)a2 + 3), *((_DWORD *)a2 + 8), v13, a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1BEu, 0LL);
  }
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(struct CChannelContext *, __int64))(*(_QWORD *)v13 + 16LL))(v13, 1LL);
  return v9;
}
