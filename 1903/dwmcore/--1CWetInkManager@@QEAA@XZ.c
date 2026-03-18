/*
 * XREFs of ??1CWetInkManager@@QEAA@XZ @ 0x180176F74
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E08E0 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??RVmMappedSectionDeleter@@QEAAXPEAE@Z @ 0x180177050 (--RVmMappedSectionDeleter@@QEAAXPEAE@Z.c)
 */

void __fastcall CWetInkManager::~CWetInkManager(CWetInkManager *this)
{
  void *v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // rbx
  __int64 *v5; // rsi

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    operator delete(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 24) )
      VmMappedSectionDeleter::operator()();
    if ( (unsigned __int64)(*(_QWORD *)v3 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(*(HANDLE *)v3);
    operator delete((void *)v3);
  }
  v4 = (__int64 *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 2);
    if ( v4 != v5 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v4 + 1);
        v4 += 10;
      }
      while ( v4 != v5 );
      v4 = (__int64 *)*((_QWORD *)this + 1);
    }
    std::_Deallocate<16,0>(v4, 80 * ((*((_QWORD *)this + 3) - (_QWORD)v4) / 80LL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
