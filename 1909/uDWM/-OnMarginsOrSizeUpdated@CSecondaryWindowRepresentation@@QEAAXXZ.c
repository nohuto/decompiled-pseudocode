/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180013D98
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013190 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001F8F0 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18003926C (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x1800130E4 (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180013EE0 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v1; // rsi
  CWindowData *v3; // rdi
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF

  v1 = (CWindowData *)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18) - 1;
  if ( !v4 )
    goto LABEL_12;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_5;
    if ( !CWindowData::IsImmersiveWindow(v1) )
    {
      v3 = *(CWindowData **)(*((_QWORD *)v1 + 55) + 80LL);
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  v6 = *((_QWORD *)v1 + 54);
  if ( !v6 )
  {
LABEL_12:
    v3 = v1;
    goto LABEL_5;
  }
  v3 = *(CWindowData **)(v6 + 32);
LABEL_5:
  if ( (unsigned __int8)CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
                          (_DWORD)v3,
                          *((_DWORD *)this + 10),
                          *((_QWORD *)this + 6) != 0LL,
                          (unsigned int)&v10,
                          (__int64)&v11) )
  {
    v7 = v10;
    if ( v10 != *((_QWORD *)this + 10)
      || !operator==((_DWORD *)this + 22, &v11)
      || !operator==((_DWORD *)this + 26, (_DWORD *)(*((_QWORD *)v3 + 50) + 604LL)) )
    {
      v8 = v11;
      v9 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 10) = v7;
      *(_OWORD *)((char *)this + 88) = v8;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)v3 + 50) + 604LL);
      (*(void (__fastcall **)(__int64, CSecondaryWindowRepresentation *))(*(_QWORD *)v9 + 8LL))(v9, this);
    }
  }
}
