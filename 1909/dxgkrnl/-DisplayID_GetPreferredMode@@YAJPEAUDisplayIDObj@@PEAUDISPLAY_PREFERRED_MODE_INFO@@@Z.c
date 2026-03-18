/*
 * XREFs of ?DisplayID_GetPreferredMode@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00574E4
 * Callers:
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01291C0 (MonitorGetDpiInfoFromDescriptor.c)
 * Callees:
 *     ?DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEAU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z @ 0x1C0057298 (-DisplayID_GetFirstType7Desc@@YAJAEBUDisplayIDObj@@AEAPEAU_DISPLAYID_TYPE7_TIMING_BLOCK@@@Z.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x1C0057DA4 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetPreferredMode(struct DisplayIDObj *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 result; // rax
  char v4; // r8
  __int64 v5; // r9
  _BYTE *v6; // rax
  __int16 v7; // dx
  struct _DISPLAYID_TYPE7_TIMING_BLOCK *v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  struct _DISPLAYID_TYPE7_TIMING_BLOCK *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  result = DisplayID_GetFirstType7Desc(a1, &v10);
  if ( (int)result >= 0 )
  {
    v8 = v10;
    v9 = *((_BYTE *)v10 + 2) / 0x14u;
    if ( !DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v8) )
      return 3221226021LL;
    v6 = (_BYTE *)(v5 + 3);
    if ( !v4 )
      v6 = 0LL;
    if ( v6 )
    {
      v7 = (unsigned __int8)v6[13];
      *(_DWORD *)a2 = (unsigned __int16)((unsigned __int8)v6[4] + 1 + ((unsigned __int8)v6[5] << 8));
      *((_DWORD *)a2 + 1) = (unsigned __int16)((unsigned __int8)v6[12] + 1 + (v7 << 8));
      *((_BYTE *)a2 + 8) = (v6[3] & 0x10) != 0;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
