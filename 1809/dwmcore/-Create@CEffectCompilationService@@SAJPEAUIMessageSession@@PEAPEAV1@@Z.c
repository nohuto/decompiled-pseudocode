/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800615D0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x180061694 (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  unsigned int v5; // ebx
  CEffectCompilationService *v6; // rax
  unsigned int v7; // ecx
  CEffectCompilationService *v8; // rsi
  HANDLE EventW; // rax
  int v10; // eax
  unsigned int v11; // ecx
  signed int v12; // edi
  signed int LastError; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CEffectCompilationService *)WPF::ProcessHeapImpl::AllocClear(0xE0uLL);
  v5 = 0;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CEffectCompilationService::CEffectCompilationService(v4, a1);
  v8 = v6;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x4Au);
    return v5;
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
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v12, 0x31u);
LABEL_15:
      v5 = v12;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v12, 0x4Du);
      goto LABEL_6;
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), CEffectCompilationService *))(**((_QWORD **)v8 + 2) + 264LL))(
          *((_QWORD *)v8 + 2),
          *((_QWORD *)v8 + 3),
          lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_,
          v8);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x3Au);
    goto LABEL_15;
  }
  *a2 = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
LABEL_6:
  CMILRefCountBase::Release(v8);
  return v5;
}
