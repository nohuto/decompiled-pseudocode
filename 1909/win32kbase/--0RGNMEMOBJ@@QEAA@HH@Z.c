/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002BB50
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000EAD0 (NtGdiCreateRectRgn.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C002C5CC (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     GreCreateRectRgn @ 0x1C012F350 (GreCreateRectRgn.c)
 * Callees:
 *     AllocateObject @ 0x1C002A780 (AllocateObject.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, __int64 a2, int a3)
{
  _QWORD *Object; // rax
  _QWORD *v5; // rax

  *((_DWORD *)this + 2) = 0;
  if ( a3 == 1 )
  {
    Object = AllocateObject(0xD8uLL, 4u, 0);
    *(_QWORD *)this = Object;
    if ( Object )
    {
      *((_DWORD *)Object + 6) = 216;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
      v5 = (_QWORD *)(*(_QWORD *)this + 48LL);
      v5[1] = v5;
      *v5 = v5;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
