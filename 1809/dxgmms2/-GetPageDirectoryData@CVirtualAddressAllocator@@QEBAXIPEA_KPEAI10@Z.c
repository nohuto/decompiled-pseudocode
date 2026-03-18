/*
 * XREFs of ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00B4DD4
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00B2204 (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0010BDC (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 */

void __fastcall CVirtualAddressAllocator::GetPageDirectoryData(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // r11
  CVirtualAddressAllocator *v7; // rbx
  __int64 v8; // rdi
  CVirtualAddressAllocator **v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10
  __int64 v12; // rax

  v6 = 0LL;
  v7 = this;
  v8 = (unsigned int)a2;
  v9 = (CVirtualAddressAllocator **)(*((_QWORD *)this + 14) + 32LL * (unsigned int)a2);
  if ( v9 && (this = *v9) != 0LL && VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    *v10 = *(_QWORD *)(v11 + 8);
    *a4 = *(_DWORD *)(v11 + 16);
    *a6 = *(_QWORD *)(*((_QWORD *)this + 1) + 144LL);
    *a5 = *(_DWORD *)(v11 + 24);
  }
  else
  {
    *a4 = v6;
    *a6 = v6;
    *a5 = v6;
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = v7;
    *(_QWORD *)(v12 + 32) = v8;
    WdLogEvent5_WdAssertion(v12);
  }
}
