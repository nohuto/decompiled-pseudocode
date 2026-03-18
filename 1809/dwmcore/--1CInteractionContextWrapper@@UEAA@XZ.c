/*
 * XREFs of ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800892A8
 * Callers:
 *     ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x180089268 (--_GCInteractionContextWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x180074874 (-RemoveAll@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801F48A0 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 */

void __fastcall CInteractionContextWrapper::~CInteractionContextWrapper(CInteractionContextWrapper *this)
{
  char *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  if ( *((_QWORD *)this + 3) )
  {
    DestroyInteractionContext();
    *((_QWORD *)this + 3) = 0LL;
    CInteractionContextWrapper::ResetBufferedOutput(this);
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((__int64)this + 608);
  v2 = (char *)this + 544;
  do
  {
    v3 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
    v4 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    if ( v4 != v2 )
    {
      v3 = *((_QWORD *)v4 + 2);
      operator delete(v4, 0x18uLL);
      --*((_DWORD *)v2 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
  }
  while ( v3 );
  DeleteCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
}
