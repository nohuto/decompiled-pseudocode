/*
 * XREFs of ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x1800032B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C8BA0 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?SetWindowId@CAudioStream@@QEAAXI@Z @ 0x1800DAE60 (-SetWindowId@CAudioStream@@QEAAXI@Z.c)
 */

__int64 __fastcall CAudioSession::SetWindowId(CAudioSession *this, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  CAudioStream **v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  *((_DWORD *)this + 70) = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v6 = 0LL;
    do
    {
      v7 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                              (char *)this + 96,
                              v6);
      CAudioStream::SetWindowId(*v7, a2);
      v6 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 13) );
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
