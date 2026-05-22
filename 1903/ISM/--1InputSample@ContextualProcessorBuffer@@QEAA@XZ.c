/*
 * XREFs of ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800F9FE0
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18000B500 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 *     ??1?$_Uninitialized_backout_al@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800F9F3C (--1-$_Uninitialized_backout_al@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSam.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$10 @ 0x1800FA937 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$10.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x1800FB518 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ?_Destroy@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUInputSample@ContextualProcessorBuffer@@0@Z @ 0x1800FB6C0 (-_Destroy@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x1800BF534 (-clear@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@$.c)
 */

void __fastcall ContextualProcessorBuffer::InputSample::~InputSample(ContextualProcessorBuffer::InputSample *this)
{
  void *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  __int64 v4; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 7) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::clear((__int64)this + 24);
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x20);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *(_QWORD *)this )
    operator delete(*(void **)this, v3);
}
