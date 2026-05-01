/*
 * XREFs of ?Invoke@CPlaceModeButtonAcc@@UEAAJXZ @ 0x1803E0590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaceModeButtonAcc::Invoke(CPlaceModeButtonAcc *this)
{
  __int64 v1; // r8
  __int64 v3; // [rsp+30h] [rbp+8h]

  if ( *((_BYTE *)this + 24) )
  {
    v1 = *((_QWORD *)this + 6);
    if ( v1 )
    {
      LODWORD(v3) = *((_DWORD *)this + 8) + (*((_DWORD *)this + 10) - *((_DWORD *)this + 8)) / 2;
      HIDWORD(v3) = *((_DWORD *)this + 9);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 104LL))(v1, v3);
    }
  }
  return 0LL;
}
