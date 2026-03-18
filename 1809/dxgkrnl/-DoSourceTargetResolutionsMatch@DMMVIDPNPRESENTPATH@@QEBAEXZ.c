/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000EAE0
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000A7C4 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     BmlPinPathContentScaling @ 0x1C00D67C0 (BmlPinPathContentScaling.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E4E34 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000EC9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E20BC (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v11; // eax
  DMMVIDPNPRESENTPATH *v12; // r8
  unsigned __int64 v13; // rdi
  int v14; // eax

  v2 = 1;
  v3 = *((_QWORD *)this + 11);
  v4 = *(_QWORD *)(v3 + 104);
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 96), 1u);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_QWORD *)this + 12);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 96), 1u);
    v8 = *(_QWORD *)(v6 + 104);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(v8 + 144);
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL);
  v11 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29));
  if ( v11 == D3DKMDT_VPPR_ROTATE90 || v11 == D3DKMDT_VPPR_ROTATE270 )
  {
    LODWORD(v13) = v10;
  }
  else
  {
    v13 = HIDWORD(v10);
    if ( v11 != D3DKMDT_VPPR_UNPINNED || !DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(v12) )
    {
      v14 = v10;
      goto LABEL_12;
    }
    if ( v10 == *(_QWORD *)(v9 + 84) )
      goto LABEL_14;
    LODWORD(v13) = v10;
  }
  v14 = HIDWORD(v10);
LABEL_12:
  if ( v14 != *(_DWORD *)(v9 + 84) || (_DWORD)v13 != *(_DWORD *)(v9 + 88) )
    v2 = 0;
LABEL_14:
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  return v2;
}
