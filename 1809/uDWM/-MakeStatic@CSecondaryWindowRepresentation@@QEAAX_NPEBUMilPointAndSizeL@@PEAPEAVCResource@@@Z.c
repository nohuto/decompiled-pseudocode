/*
 * XREFs of ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x180084604
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180006F4C (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180006F90 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::MakeStatic(
        CSecondaryWindowRepresentation *this,
        char a2,
        LONG *a3,
        struct CResource **a4)
{
  __int64 v4; // rbx
  CWindowSnapshot *v9; // r11
  LONG v10; // r8d
  LONG v11; // edx
  LONG v12; // ecx
  LONG v13; // ecx
  CWindowSnapshot *v14; // r11
  struct CResource *v15; // rbx
  struct CResource *v16; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+28h] [rbp-30h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v9 = *(CWindowSnapshot **)(v4 + 424);
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    v16 = 0LL;
    v17.right = v10 + v12;
    v13 = v11 + a3[3];
    v17.left = v10;
    v17.top = v11;
    v17.bottom = v13;
    if ( a2
      && v9
      && CWindowSnapshot::HasCVIOfCompatibleSize(v9, &v17)
      && (int)CWindowSnapshot::GetCVI(v14, (const struct tagRECT *)(v4 + 48), &v16, (float *)this + 126) >= 0 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v15 = v16;
      *a4 = v16;
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
        v15 = v16;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, struct tagRECT *))(**((_QWORD **)v15 + 2) + 1016LL))(
        *((_QWORD *)v15 + 2),
        *((unsigned int *)v15 + 6),
        &v17);
      CBaseObject::Release(v15);
      *((_BYTE *)this + 160) = 1;
    }
    else
    {
      *((_DWORD *)this + 10) |= 0x200u;
    }
  }
}
