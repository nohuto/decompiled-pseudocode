/*
 * XREFs of ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x18002636C
 * Callers:
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800262B8 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18005200C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::SetPrimaryCloneDisplay(CDisplay *this, struct CDisplay *a2)
{
  __int64 v2; // r9
  unsigned int *DisplayId; // rax
  void (__fastcall *v5)(__int64, _QWORD); // r8
  __int64 v6; // r9
  unsigned int *v7; // rax
  void (__fastcall *v8)(__int64, _QWORD); // r8
  __int64 v9; // r9
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 19) = a2;
  if ( v2 )
  {
    DisplayId = (unsigned int *)CDisplay::GetDisplayId(this, &v10);
    v5(v6, *DisplayId);
  }
  if ( *((_QWORD *)this + 10) )
  {
    v7 = (unsigned int *)CDisplay::GetDisplayId(this, &v10);
    v8(v9, *v7);
  }
}
