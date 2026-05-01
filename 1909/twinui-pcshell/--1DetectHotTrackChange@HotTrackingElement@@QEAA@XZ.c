/*
 * XREFs of ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x180376EB4
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x180377820 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180377860 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange(
        HotTrackingElement::DetectHotTrackChange *this)
{
  _DWORD *v2; // rcx

  v2 = *(_DWORD **)this;
  if ( (v2[24] == 1) != *((_BYTE *)this + 8) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 648LL))(v2);
    v2 = *(_DWORD **)this;
  }
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
