/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00D69D4
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C00D6870 (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020345C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C000F5FC (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000F618 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

unsigned __int8 __fastcall BmlIsSupportedPathRotation(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  __int32 v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // r10d
  __int32 v6; // eax
  __int32 v7; // eax
  unsigned int v8; // eax
  __int32 v9; // eax
  unsigned __int8 v10; // r8
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  __int64 v14; // rax
  __int32 v15; // eax
  __int32 v16; // eax

  v2 = a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v3 )
  {
    v6 = v3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          goto LABEL_15;
        v8 = v5 >> 3;
      }
      else
      {
        v8 = v5 >> 2;
      }
    }
    else
    {
      v8 = v5 >> 1;
    }
  }
  else
  {
    LOBYTE(v8) = v5;
  }
  if ( (v8 & 1) == 0 )
    return 0;
  v9 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2) - 1;
  if ( !v9 )
  {
    v12 = v11 >> 4;
    goto LABEL_9;
  }
  v15 = v9 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v12 = v11 >> 7;
        goto LABEL_9;
      }
LABEL_15:
      v14 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v14 + 24) = v2;
      WdLogEvent5_WdAssertion(v14);
      return 0;
    }
    v12 = v11 >> 6;
  }
  else
  {
    v12 = v11 >> 5;
  }
LABEL_9:
  if ( ((unsigned __int8)v12 & v10) == 0 )
    return 0;
  return v10;
}
