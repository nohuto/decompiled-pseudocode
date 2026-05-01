/*
 * XREFs of ??_GCImpWorkerWndProc@@MEAAPEAXI@Z @ 0x180095090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CImpWorkerWndProc@@MEAA@XZ @ 0x180095040 (--1CImpWorkerWndProc@@MEAA@XZ.c)
 */

CImpWorkerWndProc *__fastcall CImpWorkerWndProc::`scalar deleting destructor'(CImpWorkerWndProc *this, char a2)
{
  CImpWorkerWndProc::~CImpWorkerWndProc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
