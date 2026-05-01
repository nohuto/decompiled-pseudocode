/*
 * XREFs of ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x1802512F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$WindowDestroyed@AEAIAEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@@Z @ 0x18023F920 (--$WindowDestroyed@AEAIAEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall WindowWrapperBase::WindowRemoved(WindowWrapperBase *this)
{
  __int64 v2; // rcx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33));
  v5 = *((int *)this + 70);
  v4 = (*(__int64 (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 272LL))(this);
  ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int &,HWND__ * &>(&v4, &v5);
  v2 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
