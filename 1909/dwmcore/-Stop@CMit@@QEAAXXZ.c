/*
 * XREFs of ?Stop@CMit@@QEAAXXZ @ 0x18023A21C
 * Callers:
 *     ??1CGlobalInputManager@@MEAA@XZ @ 0x180235B18 (--1CGlobalInputManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x180235CA8 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ??_GCMit@@QEAAPEAXI@Z @ 0x180235D68 (--_GCMit@@QEAAPEAXI@Z.c)
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
