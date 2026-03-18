/*
 * XREFs of ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x1800C2E50
 * Callers:
 *     ?Release@CD3DDeviceLevel1@@WBPA@EAAKXZ @ 0x1800EC6A0 (-Release@CD3DDeviceLevel1@@WBPA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Release(CD3DDeviceLevel1 *this)
{
  char *v1; // r8
  unsigned __int32 v2; // ebx
  void (__fastcall ***v4)(_QWORD, char *); // rcx

  v1 = (char *)this + 496;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 126);
  if ( !v2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 64);
    if ( v4 )
      (**v4)(v4, v1);
    else
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  }
  return v2;
}
