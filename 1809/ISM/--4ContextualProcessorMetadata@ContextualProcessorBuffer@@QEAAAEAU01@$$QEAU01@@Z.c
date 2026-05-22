/*
 * XREFs of ??4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C4A9C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(__int64 *a1, char *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  char *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( &v10 != a2 )
  {
    v4 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v5 = *a1;
  *a1 = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
  v6 = a2 + 16;
  v7 = 0LL;
  if ( &v10 != v6 )
  {
    v7 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
  }
  v8 = a1[2];
  a1[2] = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
