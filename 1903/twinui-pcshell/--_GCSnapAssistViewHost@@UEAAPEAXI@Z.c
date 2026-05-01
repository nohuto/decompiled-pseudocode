/*
 * XREFs of ??_GCSnapAssistViewHost@@UEAAPEAXI@Z @ 0x18034FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x18034FDD0 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 */

CSnapAssistViewHost *__fastcall CSnapAssistViewHost::`scalar deleting destructor'(CSnapAssistViewHost *this, char a2)
{
  CSnapAssistViewHost::~CSnapAssistViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
