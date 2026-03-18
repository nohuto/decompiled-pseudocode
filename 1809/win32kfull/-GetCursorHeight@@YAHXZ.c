/*
 * XREFs of ?GetCursorHeight@@YAHXZ @ 0x1C0151568
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreGetBitmapBits @ 0x1C0076A08 (GreGetBitmapBits.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 GetCursorHeight(void)
{
  unsigned int v0; // ebx
  struct tagCURSOR *v1; // rcx
  unsigned __int64 v2; // rcx
  unsigned int v3; // r9d
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  HSURF v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  char v14[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h]
  int v16; // [rsp+60h] [rbp-A0h]
  _WORD v17[128]; // [rsp+80h] [rbp-80h] BYREF

  v0 = 16;
  v9 = 0;
  v1 = *(struct tagCURSOR **)(*(_QWORD *)(gptiCurrent + 432LL) + 376LL);
  if ( v1 && _InternalGetIconInfo(v1, (struct _ICONINFO *)v10, 0LL, 0LL, 0LL, 0) )
  {
    if ( (unsigned int)GreExtGetObjectW(v12, 32LL, v14) && (unsigned int)GreGetBitmapBits(v12, 0x100u, v17, &v9) )
    {
      v2 = (unsigned __int64)(v15 * v16) >> 4;
      if ( v13 )
      {
        v3 = 0;
      }
      else
      {
        v3 = v2 - 1;
        LODWORD(v2) = (int)v2 / 2;
      }
      if ( (unsigned int)v2 >= 0x80 )
        LODWORD(v2) = 127;
      v4 = v2 - 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = v3 < 0x80 ? (int)v3 : 0;
        do
        {
          if ( v6 )
          {
            if ( v17[v6--] )
              break;
          }
          if ( v17[v5] != 0xFFFF )
            break;
          --v4;
          --v5;
        }
        while ( v5 >= 0 );
      }
      v0 = 16LL * (v4 + 1) / (unsigned __int64)v15 - v11;
    }
    if ( v13 )
      GreDeleteObject(v13);
    if ( v12 )
      GreDeleteObject(v12);
  }
  return v0;
}
