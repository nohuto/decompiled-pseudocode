/*
 * XREFs of ??_ECFlipConsumerMessage@@MEAAPEAXI@Z @ 0x1C0057290
 * Callers:
 *     ??_ECFlipConsumerMessage@@OCI@EAAPEAXI@Z @ 0x1C0023620 (--_ECFlipConsumerMessage@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipConsumerMessage@@MEAA@XZ @ 0x1C0057234 (--1CFlipConsumerMessage@@MEAA@XZ.c)
 */

CFlipConsumerMessage *__fastcall CFlipConsumerMessage::`vector deleting destructor'(CFlipConsumerMessage *P, char a2)
{
  CFlipConsumerMessage::~CFlipConsumerMessage(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
