/*
 * XREFs of ??_GAltEscHotkeyHandler@@MEAAPEAXI@Z @ 0x180358EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x180358E24 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 */

AltEscHotkeyHandler *__fastcall AltEscHotkeyHandler::`scalar deleting destructor'(AltEscHotkeyHandler *this, char a2)
{
  AltEscHotkeyHandler::~AltEscHotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
