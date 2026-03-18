/*
 * XREFs of ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x180023144
 * Callers:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18002306C (--1CWarpLockSubresource@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Unlock(CWarpLockSubresource *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ecx
  int v4; // edi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]

  v6 = 14;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 2013265920LL);
  v2 = *((_QWORD *)this + 3);
  v7 = *((_DWORD *)this + 10);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v6);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v4, 0xBAu, 0LL);
  }
  else
  {
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
  }
  return (unsigned int)v4;
}
