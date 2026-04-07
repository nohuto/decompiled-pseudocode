/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180022A28
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180014580 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002379C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x1800384A4 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18002016C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180023070 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v1; // rsi
  CWindowData *v3; // rdi
  int v4; // ecx
  __int64 v5; // r8
  __int128 v6; // xmm0
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF

  v1 = (CWindowData *)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18) - 1;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_3;
      if ( !CWindowData::IsImmersiveWindow(v1) )
      {
        v3 = *(CWindowData **)(*((_QWORD *)v1 + 54) + 80LL);
        goto LABEL_3;
      }
    }
    else
    {
      v9 = *((_QWORD *)v1 + 53);
      if ( v9 )
      {
        v3 = *(CWindowData **)(v9 + 32);
        goto LABEL_3;
      }
    }
  }
  v3 = v1;
LABEL_3:
  if ( (unsigned __int8)CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
                          (_DWORD)v3,
                          *((_DWORD *)this + 10),
                          *((_QWORD *)this + 6) != 0LL,
                          (unsigned int)&v10,
                          (__int64)&v11) )
  {
    v5 = v10;
    if ( v10 != *((_QWORD *)this + 10)
      || !operator==((_DWORD *)this + 22, &v11)
      || !operator==((_DWORD *)this + 26, (_DWORD *)(*((_QWORD *)v3 + 49) + 604LL)) )
    {
      v6 = v11;
      v7 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 10) = v5;
      *(_OWORD *)((char *)this + 88) = v6;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)v3 + 49) + 604LL);
      (*(void (__fastcall **)(__int64, CSecondaryWindowRepresentation *))(*(_QWORD *)v7 + 8LL))(v7, this);
    }
  }
}
