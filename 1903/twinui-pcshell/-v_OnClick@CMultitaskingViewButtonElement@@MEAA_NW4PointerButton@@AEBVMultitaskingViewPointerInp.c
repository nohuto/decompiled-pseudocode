/*
 * XREFs of ?v_OnClick@CMultitaskingViewButtonElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18035E300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewButtonElement::v_OnClick(__int64 a1, int a2)
{
  if ( a2 == 1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 312LL))(a1);
  else
    return 0;
}
