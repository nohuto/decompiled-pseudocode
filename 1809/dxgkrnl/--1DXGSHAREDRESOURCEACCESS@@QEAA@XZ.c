/*
 * XREFs of ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C012C460
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C012C1C0 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00103D4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1DXGPROCESSSHAREDACCESS@@QEAA@XZ @ 0x1C012C4D8 (--1DXGPROCESSSHAREDACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(DXGSHAREDRESOURCEACCESS *this)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rsi

  v2 = (_QWORD **)((char *)this + 48);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    v5 = v3 - 1;
    *v2 = v4;
    v4[1] = v2;
    if ( v3 != (_QWORD *)8 )
    {
      DXGPROCESSSHAREDACCESS::~DXGPROCESSSHAREDACCESS((DXGPROCESSSHAREDACCESS *)(v3 - 1));
      operator delete(v5);
    }
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSHAREDRESOURCEACCESS *)((char *)this + 8));
}
