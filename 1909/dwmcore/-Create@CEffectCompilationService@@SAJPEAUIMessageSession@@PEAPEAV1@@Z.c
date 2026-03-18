/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E1818
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x1800E18D0 (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  __int64 v5; // r8
  CEffectCompilationService *v6; // rax
  __int64 v7; // rcx
  CEffectCompilationService *v8; // rdi
  HANDLE EventW; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  signed int LastError; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CEffectCompilationService *)DefaultHeap::AllocClear(0xE0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  v6 = CEffectCompilationService::CEffectCompilationService(v4, a1);
  v8 = v6;
  if ( !v6 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x48u, 0LL);
    return (unsigned int)v12;
  }
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v8 + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v12 = LastError;
    if ( LastError > 0 )
      v12 = (unsigned __int16)LastError | 0x80070000;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v12, 0x2Fu, 0LL);
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v12, 0x4Bu, 0LL);
      goto LABEL_6;
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(CEffectCompilationService *), CEffectCompilationService *))(**((_QWORD **)v8 + 2) + 248LL))(
          *((_QWORD *)v8 + 2),
          *((_QWORD *)v8 + 3),
          lambda_85e973520dc2ca0a0fec8750a81f8fb9_::_lambda_invoker_cdecl_,
          v8);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x38u, 0LL);
    goto LABEL_15;
  }
  v12 = 0;
  *a2 = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
LABEL_6:
  CDirtyRegion::Release(v8);
  return (unsigned int)v12;
}
