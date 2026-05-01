/*
 * XREFs of ?CanScroll@CVirtualDesktopContainerElement@@UEAA_NXZ @ 0x1803817F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVirtualDesktopContainerElement::CanScroll(CVirtualDesktopContainerElement *this)
{
  int *v2; // rax
  int v3; // edi
  int v4; // ebx
  _DWORD *v5; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (int *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, _BYTE *))(*(_QWORD *)this + 40LL))(this, v7);
  v3 = v2[2];
  v4 = *v2;
  v5 = (_DWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, _BYTE *))(*(_QWORD *)this + 32LL))(
                   this,
                   v8);
  return v3 - v4 > v5[2] - *v5;
}
