/*
 * XREFs of ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800B2CBC
 * Callers:
 *     ??1AudioJournal@@QEAA@XZ @ 0x18005FFB0 (--1AudioJournal@@QEAA@XZ.c)
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800B02B0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::Shutdown(CSerialWorkQueue *this)
{
  int v2; // eax
  int v3; // eax

  v2 = _Mtx_lock((CSerialWorkQueue *)((char *)this + 88));
  if ( v2 )
    std::_Throw_C_error(v2);
  *((_BYTE *)this + 80) = 1;
  v3 = _Mtx_unlock((CSerialWorkQueue *)((char *)this + 88));
  if ( v3 )
    std::_Throw_C_error(v3);
}
