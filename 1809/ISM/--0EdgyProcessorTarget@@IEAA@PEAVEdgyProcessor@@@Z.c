/*
 * XREFs of ??0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z @ 0x1800CC938
 * Callers:
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1800CCE08 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

EdgyProcessorTarget *__fastcall EdgyProcessorTarget::EdgyProcessorTarget(
        EdgyProcessorTarget *this,
        struct EdgyProcessor *a2)
{
  EdgyProcessorTarget *result; // rax

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &EdgyProcessorTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &EdgyProcessorTarget::`vftable'{for `ITouchInfoAdapterClient'};
  *((_QWORD *)this + 2) = &EdgyProcessorTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = -1;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = -1;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct EdgyProcessor *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = &EdgyProcessorTarget::InteractionContext::`vftable';
  result = this;
  *((_QWORD *)this + 22) = this;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
