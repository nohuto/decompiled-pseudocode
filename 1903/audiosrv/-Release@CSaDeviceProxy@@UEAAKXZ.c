/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18003DB70
 * Callers:
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x18006BF40 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x18006BF50 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x18006BF60 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED6A0 (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  signed __int64 v2; // rax
  unsigned __int32 v3; // ebx
  signed __int64 v5; // rtt
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)this + 14) + 72LL))(
    *((_QWORD *)this + 14),
    &lpCriticalSection);
  v2 = *((_QWORD *)this + 5);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v2 - 1, v2);
    if ( v5 == v2 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v2 + 16));
LABEL_4:
  if ( !v3 )
  {
    (*(void (__fastcall **)(CSaDeviceProxy *, __int64))(*(_QWORD *)this + 48LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
