/*
 * XREFs of ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z @ 0x1800C2248
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800436CC (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 *     ?ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800C1C70 (-ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorManager::RegisterProcessor(
        ContextualProcessorManager *this,
        struct IContextualProcessor *a2)
{
  struct IContextualProcessor *v4; // rbx
  char *v5; // rdx
  const unsigned __int16 *v6; // rax
  struct IContextualProcessor *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (char *)*((_QWORD *)this + 3);
  if ( *((char **)this + 4) == v5 )
  {
    std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
      (char **)this + 2,
      v5,
      (char *)&v8);
    v4 = v8;
  }
  else
  {
    *(_QWORD *)v5 = 0LL;
    if ( v5 != (char *)&v8 )
    {
      *(_QWORD *)v5 = a2;
      v4 = 0LL;
    }
    *((_QWORD *)this + 3) += 8LL;
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)a2 + 48LL))(a2);
  InputETW::ContextualProcessing::ProcessorRegistered(v6);
  return 0LL;
}
