/*
 * XREFs of ?SetInteractionObject@ContextualProcessorBuffer@@UEAAJI@Z @ 0x1800C3DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::SetInteractionObject(ContextualProcessorBuffer *this, unsigned int a2)
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  if ( v3 && (**v3)(v3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v7) >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, a2);
  else
    v4 = -2147467259;
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
