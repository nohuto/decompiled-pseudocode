/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00097C8
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005BB4 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     BmlPinPathContentScaling @ 0x1C00D2B70 (BmlPinPathContentScaling.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E5CF0 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E613C (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  DMMVIDPNPRESENTPATH *v11; // r8
  int v12; // r9d
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v18; // [rsp+30h] [rbp+8h]

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
  v18 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL);
  v12 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)this + 29));
  if ( ((v12 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v12 == 254 && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(v11) )
    {
      v13 = v18;
      v14 = HIDWORD(v18);
      if ( v18 == *(_QWORD *)(v9 + 84) )
        goto LABEL_11;
    }
    else
    {
      v13 = HIDWORD(v18);
      v14 = v18;
    }
  }
  else
  {
    v13 = v18;
    v14 = HIDWORD(v18);
  }
  if ( v14 != *(_DWORD *)(v9 + 84) || v13 != *(_DWORD *)(v9 + 88) )
    v2 = 0;
LABEL_11:
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 88), v10, (__int64)v11);
  ReferenceCounted::Release((ReferenceCounted *)(v5 + 88), v15, v16);
  return v2;
}
