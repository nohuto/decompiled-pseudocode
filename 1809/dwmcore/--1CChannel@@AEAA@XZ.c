/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x1801458D0
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x1800780C0 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180145984 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this)
{
  unsigned int v2; // edx
  void *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  CCommandBatch *v7; // rcx
  void *v8; // rcx

  *(_QWORD *)this = &CChannel::`vftable';
  ReleaseInterface<CConnection>((CMILRefCountBase **)this + 6);
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
    CloseHandle(v3);
  v4 = (_QWORD **)((char *)this + 64);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    WPF::ProcessHeapImpl::Free(v5);
  }
  v7 = (CCommandBatch *)*((_QWORD *)this + 20);
  if ( v7 )
    CCommandBatch::`scalar deleting destructor'(v7, v2);
  *((_QWORD *)this + 20) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v8 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  WPF::ProcessHeapImpl::Free(v8);
}
