/*
 * XREFs of ??$create@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x180041774
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18003F7C0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180041438 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18003CB8C (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800EB0C4 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800EB0C4.c)
 */

char __fastcall wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  void *v5; // rbx
  bool v6; // zf
  char v7; // al
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v10; // rsi

  v4 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 1;
    v4[2] = 0;
    *((_BYTE *)v4 + 12) = 0;
    v4[2] = *(_DWORD *)a2;
    *((_BYTE *)v4 + 12) = *(_BYTE *)(a2 + 4);
    *((_OWORD *)v4 + 1) = *(_OWORD *)(a2 + 8);
    *((_OWORD *)v4 + 2) = *(_OWORD *)(a2 + 24);
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 0;
    memset_0(v4 + 12, 0, 0x20uLL);
    v6 = *((_BYTE *)v5 + 72) == 0;
    *((_DWORD *)v5 + 12) = *(_DWORD *)(a2 + 40);
    *((_QWORD *)v5 + 7) = *(_QWORD *)(a2 + 48);
    if ( !v6 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *((LPVOID *)v5 + 8));
      *((_BYTE *)v5 + 72) = 0;
    }
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 8) = *(_QWORD *)(a2 + 56);
    v7 = *(_BYTE *)(a2 + 64);
    *(_QWORD *)(a2 + 56) = 0LL;
    *((_BYTE *)v5 + 72) = v7;
    *(_BYTE *)(a2 + 64) = 0;
    *((_DWORD *)v5 + 20) = *(_DWORD *)(a2 + 72);
    *((_DWORD *)v5 + 21) = *(_DWORD *)(a2 + 76);
    wil::StoredFailureInfo::StoredFailureInfo((__int64)v5 + 88, a2 + 80);
    *((_QWORD *)v5 + 31) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 0;
  if ( *a1 )
  {
    if ( !_InterlockedDecrement(*a1) )
    {
      v10 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v10 + 2);
        operator delete((void *)v10, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
  *a1 = (volatile signed __int32 *)v5;
  return 1;
}
