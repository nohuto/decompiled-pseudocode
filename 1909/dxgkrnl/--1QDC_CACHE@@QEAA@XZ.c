/*
 * XREFs of ??1QDC_CACHE@@QEAA@XZ @ 0x1C026E174
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0240D88 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00012FC (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 */

void __fastcall QDC_CACHE::~QDC_CACHE(QDC_CACHE *this)
{
  DXGFASTMUTEX *v2; // rcx
  void **v3; // rbx
  __int64 v4; // rdi

  v2 = (DXGFASTMUTEX *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (void **)((char *)this + 32);
  v4 = 18LL;
  do
  {
    if ( *v3 )
    {
      operator delete[](*v3);
      *v3 = 0LL;
    }
    v3 += 4;
    --v4;
  }
  while ( v4 );
}
