/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180015D58
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C494 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18002984C (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CanBeRemoved(CProcess *this)
{
  int v2; // eax
  unsigned int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 112) != 2
    || *((_QWORD *)this + 11)
    || (v2 = *((_DWORD *)this + 121), v3 = 1, (v2 & 1) != 0)
    || (v2 & 0x1000) != 0
    || *((_DWORD *)this + 122)
    || *((_DWORD *)this + 123)
    || (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 49), *((_DWORD *)this + 48), 0LL)
    || *((_DWORD *)this + 129)
    || *((_DWORD *)this + 134)
    || *((_DWORD *)this + 135)
    || *((_DWORD *)this + 131) )
  {
    v3 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
