/*
 * XREFs of ??1BLTENTRY@@QEAA@XZ @ 0x1C0046E00
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 */

void __fastcall BLTENTRY::~BLTENTRY(void **this)
{
  operator delete[](this[63]);
  operator delete[](this[29]);
}
