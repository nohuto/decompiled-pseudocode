/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x180155C84
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x1800E4D00 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18015593C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this)
{
  CDirtyRegion *v2; // rcx
  void *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  struct _LIST_ENTRY *v7; // rcx
  void *v8; // rcx

  *(_QWORD *)this = &CChannel::`vftable';
  v2 = (CDirtyRegion *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CDirtyRegion::Release(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
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
    operator delete(v5);
  }
  v7 = (struct _LIST_ENTRY *)*((_QWORD *)this + 20);
  if ( v7 )
    CCommandBatch::`scalar deleting destructor'(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v8 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  operator delete(v8);
}
