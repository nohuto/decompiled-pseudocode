/*
 * XREFs of ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x180081384
 * Callers:
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800812CC (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::SetPrimaryCloneDisplay(CDisplay *this, struct CDisplay *a2)
{
  __int64 v2; // r9
  unsigned int *DisplayId; // rax
  __int64 v5; // r9
  unsigned int *v6; // rax
  __int64 v7; // r9
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 19) = a2;
  if ( v2 )
  {
    DisplayId = (unsigned int *)CDisplay::GetDisplayId(this, &v8);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 512LL))(v5, *DisplayId);
  }
  if ( *((_QWORD *)this + 10) )
  {
    v6 = (unsigned int *)CDisplay::GetDisplayId(this, &v8);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 512LL))(v7, *v6);
  }
}
