/*
 * XREFs of ??1CImpWorkerWndProc@@MEAA@XZ @ 0x180095040
 * Callers:
 *     ??_GCImpWorkerWndProc@@MEAAPEAXI@Z @ 0x180095090 (--_GCImpWorkerWndProc@@MEAAPEAXI@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1802F8330 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CImpWorkerWndProc::~CImpWorkerWndProc(CImpWorkerWndProc *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &CImpWorkerWndProc::`vftable';
  if ( !v1 )
  {
    v3 = (void *)*((_QWORD *)this + 4);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 4) = 0LL;
    }
    v4 = (void *)*((_QWORD *)this + 3);
    if ( v4 )
    {
      CloseHandle(v4);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
