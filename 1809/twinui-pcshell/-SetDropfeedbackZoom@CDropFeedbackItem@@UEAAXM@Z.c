/*
 * XREFs of ?SetDropfeedbackZoom@CDropFeedbackItem@@UEAAXM@Z @ 0x1800831D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDropFeedbackItem::SetDropfeedbackZoom(CDropFeedbackItem *this, float a2)
{
  *((double *)this + 20) = a2;
}
