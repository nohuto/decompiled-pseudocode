/*
 * XREFs of ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x180152FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180152CF8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void **__fastcall CLegacySurfaceManager::`vector deleting destructor'(void **this, char a2)
{
  CLegacySurfaceManager::~CLegacySurfaceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
