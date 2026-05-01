/*
 * XREFs of ??_GAltEscHotkeyHandler@@MEAAPEAXI@Z @ 0x180378710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x180378658 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 */

AltEscHotkeyHandler *__fastcall AltEscHotkeyHandler::`scalar deleting destructor'(AltEscHotkeyHandler *this, char a2)
{
  AltEscHotkeyHandler::~AltEscHotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
