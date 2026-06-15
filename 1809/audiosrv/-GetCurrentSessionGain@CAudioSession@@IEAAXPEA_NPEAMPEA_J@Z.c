/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x180014A60
 * Callers:
 *     _lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator() @ 0x1800642F0 (_lambda_ce62a0462eef1ffdae6c0304eec1e9a4_--operator().c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSession::GetCurrentSessionGain(CAudioSession *this, bool *a2, float *a3, __int64 *a4)
{
  bool v8; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 848);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *a4 = 50000LL;
  *a3 = *((float *)this + 222);
  v8 = v10 == 0;
  *a2 = *((_DWORD *)this + 223) != 0;
  if ( !v8 )
    LeaveCriticalSection(lpCriticalSection);
}
