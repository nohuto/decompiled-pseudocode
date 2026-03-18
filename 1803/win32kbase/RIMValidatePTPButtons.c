/*
 * XREFs of RIMValidatePTPButtons @ 0x1C01091D8
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C00EC198 (RIMGetDeviceButtons.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMValidatePTPButtons(__int64 a1, __int64 a2)
{
  int v2; // r11d
  int v3; // r10d
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebx
  __int16 *v7; // rcx
  __int16 v8; // ax
  __int16 v9; // ax

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = -1073741668;
  if ( !(_DWORD)a2 )
    goto LABEL_18;
  v7 = (__int16 *)(a1 + 56);
  a2 = (unsigned int)a2;
  do
  {
    v8 = *(v7 - 28);
    if ( v8 == 13 && *v7 == 71 )
      v5 = 1;
    if ( v8 == 9 )
    {
      v9 = *v7;
      if ( *v7 == 1 )
        v2 = 1;
      if ( v9 == 2 )
        v3 = 1;
      if ( v9 == 3 )
        v4 = 1;
    }
    v7 += 36;
    --a2;
  }
  while ( a2 );
  if ( !v5 )
    goto LABEL_18;
  if ( !v2 )
  {
    if ( !v3 )
      goto LABEL_18;
LABEL_20:
    if ( !v4 )
      goto LABEL_18;
    return 0;
  }
  if ( v3 )
    goto LABEL_20;
  if ( !v4 )
    return 0;
LABEL_18:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xBu,
    (__int64)&WPP_bf1690b7586b3793459393cbdec69d42_Traceguids);
  return v6;
}
