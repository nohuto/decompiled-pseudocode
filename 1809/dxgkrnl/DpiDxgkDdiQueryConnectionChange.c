/*
 * XREFs of DpiDxgkDdiQueryConnectionChange @ 0x1C004B064
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x1C00443F8 (DpiFdoHandleQueryConnectionChange.c)
 *     McTemplateK0pxqqqqq @ 0x1C004B6D0 (McTemplateK0pxqqqqq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryConnectionChange(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // rax

  if ( (*(_BYTE *)(a1 + 3801) & 8) == 0 )
    return DpiFdoHandleQueryConnectionChange(a1, (__int64)a4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pxqqqqq(a1, (unsigned int)&EventEnterDdiQueryConnectionChange, a3, a3, 0, 0, 0, -2, 0, 0);
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1136))(a3, a4);
  v13 = v8;
  if ( bTracingEnabled )
  {
    if ( v8 < 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pxqqqqq(v10, (unsigned int)&EventEnterDdiQueryConnectionChange, v11, a3, 0, 0, 0, -2, 0, v8);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pxqqqqq(
        HIBYTE(a4[2]) & 0xF,
        (unsigned int)&EventExitDdiQueryConnectionChange,
        v11,
        a3,
        *(_QWORD *)a4,
        *((_BYTE *)a4 + 8),
        HIBYTE(a4[2]) & 0xF,
        a4[3],
        a4[4],
        v8);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14[3] = *a4;
  v14[4] = a4[2] & 0xFFFFFF;
  v14[5] = HIBYTE(a4[2]) & 0xF;
  v14[6] = a4[4];
  v14[7] = v13;
  return (unsigned int)v13;
}
