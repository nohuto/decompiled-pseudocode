/*
 * XREFs of ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x18024D3D0
 * Callers:
 *     ??_ECSurfaceManager@@OBA@EAAPEAXI@Z @ 0x1800F1530 (--_ECSurfaceManager@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x18024D2C4 (--1CSurfaceManager@@MEAA@XZ.c)
 */

CSurfaceManager *__fastcall CSurfaceManager::`vector deleting destructor'(CSurfaceManager *this, char a2)
{
  CSurfaceManager::~CSurfaceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
