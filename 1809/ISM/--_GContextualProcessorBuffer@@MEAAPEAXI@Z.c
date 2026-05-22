/*
 * XREFs of ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x1800C2D8C
 * Callers:
 *     ??_EContextualProcessorBuffer@@OBA@EAAPEAXI@Z @ 0x1800C4C60 (--_EContextualProcessorBuffer@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800C4238 (--1-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProcesso.c)
 *     ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800C4300 (--1-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextualProc.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::`scalar deleting destructor'(
        ContextualProcessorBuffer *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>((char *)this + 56);
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::~vector<ContextualProcessorBuffer::ContextualProcessorMetadata>((char *)this + 32);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
