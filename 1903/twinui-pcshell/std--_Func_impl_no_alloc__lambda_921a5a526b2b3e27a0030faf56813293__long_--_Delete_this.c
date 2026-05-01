/*
 * XREFs of std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_::_Delete_this @ 0x1801CCDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4E5C (--1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_::_Delete_this(
        char *a1,
        char a2)
{
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::~CortanaUndocking_FirstBootTriggered((CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *)(a1 + 8));
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x140);
}
