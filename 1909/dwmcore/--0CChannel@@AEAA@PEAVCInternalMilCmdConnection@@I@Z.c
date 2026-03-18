/*
 * XREFs of ??0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@I@Z @ 0x1800E4D34
 * Callers:
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z @ 0x1800E4C38 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CChannel *__fastcall CChannel::CChannel(CChannel *this, struct CInternalMilCmdConnection *a2, int a3)
{
  CChannel *result; // rax

  *(_QWORD *)this = &CChannel::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 6) = 12;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_DWORD *)this + 14) = a3;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  result = this;
  *((_DWORD *)this + 2) = 1;
  return result;
}
