/*
 * XREFs of ?v_OnClick@CMultitaskingViewElementBase@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180366890
 * Callers:
 *     ?v_OnClick@CMultitaskingViewFrameElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18036E040 (-v_OnClick@CMultitaskingViewFrameElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMultitaskingViewElementBase::v_OnClick(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 48);
  if ( !v4 )
    return 0;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1, v2);
  return 1;
}
