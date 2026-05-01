/*
 * XREFs of ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x180416524
 * Callers:
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x180413A70 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureContext::Uninitialize(VirtualDesktopGestureContext *this, volatile int *a2)
{
  char *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi

  v2 = (char *)this + 72;
  v3 = *((_QWORD *)this + 9);
  v4 = v3 + 8LL * *((_QWORD *)this + 10);
  while ( v3 != v4 )
  {
    DestroyWindow(*(HWND *)(*(_QWORD *)v3 + 8LL));
    v3 += 8LL;
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>>::RemoveAll(
    (__int64)v2,
    a2);
}
