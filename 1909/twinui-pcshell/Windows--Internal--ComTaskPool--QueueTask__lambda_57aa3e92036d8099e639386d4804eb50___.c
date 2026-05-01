/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_57aa3e92036d8099e639386d4804eb50___ @ 0x18006C810
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C678 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50___::CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50_____lambda_57aa3e92036d8099e639386d4804eb50___ @ 0x18006C89C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_57aa3e92036d8099e639386d4804eb50___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v4 = dword_1805C2D14;
  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50___::CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50_____lambda_57aa3e92036d8099e639386d4804eb50___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, v4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
