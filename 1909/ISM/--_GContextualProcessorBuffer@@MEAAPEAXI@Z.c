/*
 * XREFs of ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18000B600
 * Callers:
 *     ??_EContextualProcessorBuffer@@OBI@EAAPEAXI@Z @ 0x180038F00 (--_EContextualProcessorBuffer@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x180006AB0 (-_Tidy@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextual.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800F9DB0 (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::`scalar deleting destructor'(
        ContextualProcessorBuffer *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  ContextualProcessorBuffer::InputSample *v6; // rsi
  ContextualProcessorBuffer::InputSample *v8; // rbp

  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
  *((_QWORD *)this + 3) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    v8 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 9);
    if ( v6 != v8 )
    {
      do
      {
        ContextualProcessorBuffer::InputSample::~InputSample(v6);
        v6 = (ContextualProcessorBuffer::InputSample *)((char *)v6 + 80);
      }
      while ( v6 != v8 );
      v6 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 8);
    }
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(80 * ((*((_QWORD *)this + 10) - (_QWORD)v6) / 80LL)));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Tidy((__int64)this + 40);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
