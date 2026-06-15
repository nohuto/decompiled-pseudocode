/*
 * XREFs of ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x180026A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSession::GetDuckingManagerGain(CAudioSession *this, float *a2, __int64 *a3)
{
  __int64 v6; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  *a3 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 432);
  v8 = 0;
  *a2 = 1.0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 59);
  if ( v6 )
  {
    *a2 = *(float *)(v6 + 56);
    *a3 = *(_QWORD *)(*((_QWORD *)this + 59) + 40LL);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
