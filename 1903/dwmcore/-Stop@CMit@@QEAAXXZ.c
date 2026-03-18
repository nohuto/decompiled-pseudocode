/*
 * XREFs of ?Stop@CMit@@QEAAXXZ @ 0x18023B92C
 * Callers:
 *     ??1CGlobalInputManager@@MEAA@XZ @ 0x180237228 (--1CGlobalInputManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x1802373B8 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??_GCMit@@QEAAPEAXI@Z @ 0x180237478 (--_GCMit@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMit::Stop(CMit *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *((_BYTE *)this + 24) = 1;
  if ( !v1 )
  {
    SetEvent(*((HANDLE *)this + 2));
    WaitForSingleObject(*((HANDLE *)this + 1), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
