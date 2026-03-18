/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002A6D0
 * Callers:
 *     <none>
 * Callees:
 *     AllocateObject @ 0x1C002A780 (AllocateObject.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  __int64 Object; // rax
  _QWORD *v3; // rax

  *((_DWORD *)this + 2) = 0;
  Object = AllocateObject(0xD8uLL);
  *(_QWORD *)this = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(Object + 40) = Object + 120;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 216;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v3 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v3[1] = v3;
    *v3 = v3;
  }
  return this;
}
