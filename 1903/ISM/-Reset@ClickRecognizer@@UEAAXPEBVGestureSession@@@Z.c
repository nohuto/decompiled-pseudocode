/*
 * XREFs of ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x18010C070
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x18010BA70 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 */

void __fastcall ClickRecognizer::Reset(ClickRecognizer *this, const struct GestureSession *a2)
{
  ClickRecognizer *v2; // rcx

  ClickRecognizer::CancelTapAndHold(this);
  ClickRecognizer::Initialize(v2);
}
