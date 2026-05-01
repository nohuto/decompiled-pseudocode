/*
 * XREFs of ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F6E8C
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1803E1548 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z @ 0x1803F68B8 (--0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z.c)
 *     ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x1803F9040 (-_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z.c)
 */

__int64 __fastcall CDragVisual::CreateInstance(unsigned int a1, struct IDragVisualHost *a2, __int64 a3, _QWORD *a4)
{
  CDragVisual *v7; // rbx
  CDragVisual *v8; // rax
  CDragVisual *v9; // rdi
  int v10; // esi

  *a4 = 0LL;
  v7 = 0LL;
  v8 = (CDragVisual *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    v7 = CDragVisual::CDragVisual(v8, a2);
    v9 = v7;
  }
  if ( v9 )
  {
    v10 = CDragVisual::_Initialize(v7, a1);
    if ( v10 >= 0 )
      v10 = (**(__int64 (__fastcall ***)(CDragVisual *, GUID *, _QWORD *))v7)(
              v7,
              &GUID_fddf6c78_7133_462a_9ca9_020619164eb1,
              a4);
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v10;
}
