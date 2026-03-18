/*
 * XREFs of DxgkCreateAllocation @ 0x1C013B820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetWin32kImportTable @ 0x1C0040498 (DxgkGetWin32kImportTable.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010EAF0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200390 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(struct _D3DKMT_CREATEALLOCATION *a1, __int64 a2, const GUID *a3)
{
  int AllocationInternal; // eax
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (**Win32kImportTable)(void); // rax

  AllocationInternal = DxgkCreateAllocationInternal(a1, 0LL, a3);
  v4 = AllocationInternal;
  if ( (AllocationInternal == -1071775488 || AllocationInternal == -1073741801)
    && (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    Win32kImportTable = (unsigned int (**)(void))DxgkGetWin32kImportTable(v7, v6);
    if ( (*Win32kImportTable)() )
    {
      if ( byte_1C00A1E56 )
      {
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x80FuLL, v4, 0LL, 0LL);
        byte_1C00A1E56 = 0;
      }
    }
  }
  return (unsigned int)v4;
}
