/*
 * XREFs of ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0029304
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001009C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(char *P)
{
  `vector destructor iterator'(
    P + 56,
    1296LL,
    64LL,
    (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_ENTRY::~VIDSCH_FLIP_QUEUE_ENTRY);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
