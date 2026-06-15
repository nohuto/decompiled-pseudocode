/*
 * XREFs of ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18000E438
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000E028 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001BEB0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::GetActiveProcessCount(CApplication *this)
{
  _QWORD *v2; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ecx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  v3 = 0;
  while ( v2 )
  {
    v4 = v2[2];
    v5 = v3 + 1;
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)(v4 + 448) )
      v5 = v3;
    v3 = v5;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
