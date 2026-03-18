/*
 * XREFs of ?RemoveVirtualMonitorTarget@CDesktopRenderTarget@@QEAAXPEAVCVirtualMonitorCaptureRenderTarget@@@Z @ 0x1801A7480
 * Callers:
 *     ?DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ @ 0x1801A54B4 (-DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopRenderTarget::RemoveVirtualMonitorTarget(CDesktopRenderTarget *this, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // r8
  __int64 v4; // rbx
  struct CVirtualMonitorCaptureRenderTarget *i; // r10
  __int64 v7; // rcx

  v2 = *((_DWORD *)this + 74);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 34);
  for ( i = (struct CVirtualMonitorCaptureRenderTarget *)a2; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( a2 == *(_QWORD *)(v4 + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 < v2 )
  {
    if ( (unsigned int)v3 < v2 - 1 )
    {
      do
      {
        a2 = (unsigned int)(v3 + 1);
        v7 = (unsigned int)v3;
        v3 = a2;
        *(_QWORD *)(v4 + 8 * v7) = *(_QWORD *)(v4 + 8 * a2);
        v2 = *((_DWORD *)this + 74);
      }
      while ( (unsigned int)a2 < v2 - 1 );
    }
    *((_DWORD *)this + 74) = v2 - 1;
    if ( i )
      (*(void (__fastcall **)(struct CVirtualMonitorCaptureRenderTarget *, unsigned __int64, unsigned __int64))(*(_QWORD *)i + 16LL))(
        i,
        a2,
        v3);
  }
}
