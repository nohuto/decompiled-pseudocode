/*
 * XREFs of ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800FD14C
 * Callers:
 *     ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1800FD290 (--_GCProcessSubmixManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x1800FD064 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

void __fastcall CProcessSubmixManager::~CProcessSubmixManager(CProcessSubmixManager *this)
{
  CAppSubmixClientContext **v1; // rbx
  CAppSubmixClientContext **v3; // rbp
  CAppSubmixClientContext *v4; // rsi

  v1 = (CAppSubmixClientContext **)*((_QWORD *)this + 7);
  if ( v1 )
  {
    v3 = (CAppSubmixClientContext **)*((_QWORD *)this + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          CAppSubmixClientContext::~CAppSubmixClientContext(*v1);
          operator delete(v4, (const struct std::nothrow_t *)0x48);
        }
        ++v1;
      }
      while ( v1 != v3 );
      v1 = (CAppSubmixClientContext **)*((_QWORD *)this + 7);
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
