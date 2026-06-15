/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180041C70
 * Callers:
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x18006CFA0 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x18006CFB0 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x18006CFC0 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED220 (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180067C24 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  signed __int64 v2; // rax
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)this + 14) + 72LL))(
    *((_QWORD *)this + 14),
    &lpCriticalSection);
  v2 = *((_QWORD *)this + 5);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      v3 = 2147483646;
      goto LABEL_11;
    }
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_8;
  }
  v3 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v2 + 16));
LABEL_8:
  if ( !v3 )
  {
    (*(void (__fastcall **)(CSaDeviceProxy *, __int64))(*(_QWORD *)this + 48LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
LABEL_11:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
