/*
 * XREFs of ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18009CF1C
 * Callers:
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009CA88 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::PostMessageToChannel(CChannel *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v4; // edi
  CChannel *v5; // rax
  unsigned int v6; // ecx
  CChannel *v7; // rbx
  CChannel **v8; // rcx

  v4 = 0;
  v5 = (CChannel *)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  v7 = v5;
  if ( v5 )
  {
    *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v5 + 4) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v5 + 10) = *((_DWORD *)a2 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    v8 = (CChannel **)*((_QWORD *)this + 9);
    if ( *v8 != (CChannel *)((char *)this + 64) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 64;
    *((_QWORD *)v7 + 1) = v8;
    *v8 = v7;
    *((_QWORD *)this + 9) = v7;
    SetEvent(*((HANDLE *)this + 10));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x1A4u);
  }
  return v4;
}
