/*
 * XREFs of ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x180031064
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800306C4 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180030DA0 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
        void **this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5,
        const struct _GUID *a6,
        const struct _GUID *a7)
{
  HANDLE ProcessHeap; // rax
  struct _GUID *v9; // rax
  HANDLE v10; // rax
  struct _GUID *v11; // rax

  ATL::CDacl::CAccessAce::CAccessAce((ATL::CDacl::CAccessAce *)this, a2, a3, a4, a5);
  *this = &ATL::CDacl::CAccessObjectAce::`vftable';
  this[19] = 0LL;
  this[20] = 0LL;
  if ( a6 )
  {
    ProcessHeap = GetProcessHeap();
    v9 = (struct _GUID *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
    if ( v9 )
      *v9 = *a6;
    this[19] = v9;
    if ( !v9 )
      ATL::AtlThrowImpl(-2147024882);
  }
  if ( a7 )
  {
    v10 = GetProcessHeap();
    v11 = (struct _GUID *)HeapAlloc(v10, 0, 0x10uLL);
    if ( v11 )
      *v11 = *a7;
    this[20] = v11;
    if ( !v11 )
    {
      operator delete(this[19], (const struct std::nothrow_t *)0x10);
      this[19] = 0LL;
      ATL::AtlThrowImpl(-2147024882);
    }
  }
  return this;
}
