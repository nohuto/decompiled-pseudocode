/*
 * XREFs of ?GetCursorHeight@@YAHXZ @ 0x1C023EFC0
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023F6F0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00250E0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GreGetBitmapBits @ 0x1C00DCAC4 (GreGetBitmapBits.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 GetCursorHeight(void)
{
  unsigned int v0; // ebx
  struct tagCURSOR *v1; // rcx
  HBRUSH v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned int v4; // r9d
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  HBRUSH v11[4]; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v12[10]; // [rsp+60h] [rbp-A8h] BYREF
  _WORD v13[128]; // [rsp+88h] [rbp-80h] BYREF

  v0 = 16;
  memset(v11, 0, sizeof(v11));
  memset(v12, 0, 0x20uLL);
  v10 = 0;
  v1 = *(struct tagCURSOR **)(*(_QWORD *)(gptiCurrent + 424LL) + 384LL);
  if ( v1 && _InternalGetIconInfo(v1, (struct _ICONINFO *)v11, 0LL, 0LL, 0LL, 0) )
  {
    v2 = v11[2];
    if ( (unsigned int)GreExtGetObjectW(v11[2], 32LL, (char *)v12)
      && (unsigned int)GreGetBitmapBits((__int64)v2, 0x100u, v13, &v10) )
    {
      v3 = (unsigned __int64)(v12[1] * v12[2]) >> 4;
      if ( v11[3] )
      {
        v4 = 0;
      }
      else
      {
        v4 = v3 - 1;
        LODWORD(v3) = (int)v3 / 2;
      }
      if ( (unsigned int)v3 >= 0x80 )
        LODWORD(v3) = 127;
      v5 = v3 - 1;
      v6 = v5;
      if ( v5 >= 0 )
      {
        v7 = v4 < 0x80 ? (int)v4 : 0;
        do
        {
          if ( v7 )
          {
            if ( v13[v7--] )
              break;
          }
          if ( v13[v6] != 0xFFFF )
            break;
          --v5;
          --v6;
        }
        while ( v6 >= 0 );
      }
      v0 = 16LL * (v5 + 1) / (unsigned __int64)v12[1] - LODWORD(v11[1]);
    }
    if ( v11[3] )
      GreDeleteObject(v11[3]);
    if ( v2 )
      GreDeleteObject(v2);
  }
  return v0;
}
