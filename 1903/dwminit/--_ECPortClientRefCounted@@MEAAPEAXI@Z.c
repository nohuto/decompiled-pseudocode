/*
 * XREFs of ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x180003FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1800047CC (--1CPortClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180005FBC (--3@YAXPEAX_K@Z.c)
 */

CPortClientRefCounted *__fastcall CPortClientRefCounted::`vector deleting destructor'(
        CPortClientRefCounted *this,
        char a2)
{
  *(_QWORD *)this = &CPortClientRefCounted::`vftable';
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
