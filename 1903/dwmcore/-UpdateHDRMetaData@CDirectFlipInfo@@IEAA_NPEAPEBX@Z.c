/*
 * XREFs of ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x180194D2C
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180193D70 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDirectFlipInfo::UpdateHDRMetaData(CDirectFlipInfo *this, const void **a2)
{
  char v4; // bl
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // xmm1_8
  int v8; // eax
  __int128 Buf1; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+38h] [rbp-30h]

  Buf1 = 0uLL;
  v4 = 0;
  *a2 = 0LL;
  v5 = *((_QWORD *)this + 4);
  v11 = 0LL;
  v12 = 0;
  v6 = (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 240LL))(v5, &Buf1) != 0;
  if ( v6 != *((_DWORD *)this + 30) || v6 == 1 && memcmp_0(&Buf1, (char *)this + 124, 0x1CuLL) )
  {
    v7 = v11;
    v8 = v12;
    *((_DWORD *)this + 30) = v6;
    *(_OWORD *)((char *)this + 124) = Buf1;
    *(_QWORD *)((char *)this + 140) = v7;
    *((_DWORD *)this + 37) = v8;
    if ( v6 == 1 )
      *a2 = (char *)this + 124;
    return 1;
  }
  return v4;
}
