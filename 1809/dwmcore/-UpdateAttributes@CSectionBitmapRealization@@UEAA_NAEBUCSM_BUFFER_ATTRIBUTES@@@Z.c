/*
 * XREFs of ?UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180226470
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180065B8C (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009445C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSectionBitmapRealization::UpdateAttributes(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char v4; // di
  _DWORD *v5; // rdx
  __int64 v6; // rcx

  v4 = 0;
  if ( HasAlphaChannel(*((_DWORD *)this + 113)) && *v5 != *((_DWORD *)this + 38) )
  {
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
    v6 = *((_QWORD *)this + 58);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *((_QWORD *)this + 58) = 0LL;
    }
    v4 = 1;
  }
  return v4 | CBitmapRealization::UpdateAttributes(this, a2);
}
