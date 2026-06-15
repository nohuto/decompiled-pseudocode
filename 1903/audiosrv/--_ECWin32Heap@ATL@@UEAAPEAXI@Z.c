/*
 * XREFs of ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x18013C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ??1CWin32Heap@ATL@@UEAA@XZ @ 0x180063430 (--1CWin32Heap@ATL@@UEAA@XZ.c)
 */

ATL::CWin32Heap *__fastcall ATL::CWin32Heap::`vector deleting destructor'(ATL::CWin32Heap *this, char a2)
{
  ATL::CWin32Heap::~CWin32Heap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
