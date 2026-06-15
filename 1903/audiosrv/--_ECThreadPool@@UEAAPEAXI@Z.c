/*
 * XREFs of ??_ECThreadPool@@UEAAPEAXI@Z @ 0x18011EC80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 */

CThreadPool *__fastcall CThreadPool::`vector deleting destructor'(CThreadPool *this, char a2)
{
  *(_QWORD *)this = &CThreadPool::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
