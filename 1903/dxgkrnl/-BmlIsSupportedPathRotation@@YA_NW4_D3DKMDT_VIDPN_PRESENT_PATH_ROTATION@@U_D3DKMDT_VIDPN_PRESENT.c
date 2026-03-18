/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00D2DDC
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C00D2C20 (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0234D9C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003CE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

unsigned __int8 __fastcall BmlIsSupportedPathRotation(
        unsigned int a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r10d
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned __int8 v11; // r8
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax

  v2 = (int)a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          goto LABEL_15;
        v9 = v6 >> 3;
      }
      else
      {
        v9 = v6 >> 2;
      }
    }
    else
    {
      v9 = v6 >> 1;
    }
  }
  else
  {
    LOBYTE(v9) = v6;
  }
  if ( (v9 & 1) == 0 )
    return 0;
  v10 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v2) - 1;
  if ( !v10 )
  {
    v13 = v12 >> 4;
    goto LABEL_9;
  }
  v16 = v10 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v13 = v12 >> 7;
        goto LABEL_9;
      }
LABEL_15:
      v15 = WdLogNewEntry5_WdAssertion(v5, v4);
      *(_QWORD *)(v15 + 24) = v2;
      WdLogEvent5_WdAssertion(v15);
      return 0;
    }
    v13 = v12 >> 6;
  }
  else
  {
    v13 = v12 >> 5;
  }
LABEL_9:
  if ( ((unsigned __int8)v13 & v11) == 0 )
    return 0;
  return v11;
}
