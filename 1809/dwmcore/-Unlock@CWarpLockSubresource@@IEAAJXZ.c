/*
 * XREFs of ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x180021378
 * Callers:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x1800212A0 (--1CWarpLockSubresource@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Unlock(CWarpLockSubresource *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]

  v7 = 14;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), 2013265920LL);
  v2 = *((_QWORD *)this + 3);
  v8 = *((_DWORD *)this + 10);
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v7);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xBDu);
  }
  else
  {
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
  }
  return v5;
}
