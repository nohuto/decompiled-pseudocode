/*
 * XREFs of ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x1802DEC60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x1802DE92C (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall CRunnableTask::`scalar deleting destructor'(CRunnableTask *this, char a2)
{
  CRunnableTask::~CRunnableTask(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
