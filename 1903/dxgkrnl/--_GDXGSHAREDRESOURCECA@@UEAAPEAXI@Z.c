/*
 * XREFs of ??_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z @ 0x1C003BB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C02066DC (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 */

DXGSHAREDRESOURCECA *__fastcall DXGSHAREDRESOURCECA::`scalar deleting destructor'(DXGSHAREDRESOURCECA *this, char a2)
{
  DXGSHAREDRESOURCECA::~DXGSHAREDRESOURCECA(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
