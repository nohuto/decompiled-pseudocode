/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C0276EB0
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0240D88 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007758 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C001A460 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 i; // rdi
  DXGSESSIONDATA *v4; // rcx
  char *v5; // rcx
  struct _KEVENT *v6; // rcx
  __int64 v7; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v4 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v4 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v4);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
    }
  }
  v5 = (char *)*((_QWORD *)this + 5);
  if ( v5 != (char *)this + 48 )
  {
    operator delete[](v5);
    *((_QWORD *)this + 5) = 0LL;
  }
  v6 = (struct _KEVENT *)*((_QWORD *)this + 17);
  if ( v6 )
  {
    KeSetEvent(v6, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_BYTE *)this + 240) || *((DXGSESSIONMGR **)this + 28) != (DXGSESSIONMGR *)((char *)this + 224) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v7 + 24) = 130LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 184));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 80));
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
