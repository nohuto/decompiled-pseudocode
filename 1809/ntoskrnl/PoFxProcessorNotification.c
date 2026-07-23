/*
 * XREFs of PoFxProcessorNotification @ 0x140192D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PoFxProcessorNotification(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 (__fastcall *v3)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 && (v3 = *(unsigned __int8 (__fastcall **)(_QWORD))(v1 + 104)) != 0LL )
    return v3(*(_QWORD *)(a1 + 72)) == 0 ? 0xC00000BB : 0;
  else
    return 3221225474LL;
}
