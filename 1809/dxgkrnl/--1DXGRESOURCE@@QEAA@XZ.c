/*
 * XREFs of ??1DXGRESOURCE@@QEAA@XZ @ 0x1C00F9BA4
 * Callers:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0011898 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C00F9900 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00103D4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGRESOURCE::~DXGRESOURCE(DXGRESOURCE *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    operator delete[](v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGRESOURCE *)((char *)this + 80));
}
