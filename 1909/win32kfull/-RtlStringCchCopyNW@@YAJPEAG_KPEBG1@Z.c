/*
 * XREFs of ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0080070
 * Callers:
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C0055894 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     NtUserCreateWindowStation @ 0x1C007F1D0 (NtUserCreateWindowStation.c)
 *     _SetWatermarkStrings @ 0x1C0118780 (_SetWatermarkStrings.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01D1A34 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C01D1C9C (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C02122BC (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( (v4 & 0x80000000) != 0 )
  {
    if ( !a2 )
      return v4;
LABEL_16:
    *(_WORD *)a1 = 0;
    return v4;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v5 = a4 - a2;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + a2) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --a2;
    }
    while ( a2 );
  }
  v8 = (unsigned __int16 *)(a1 - 2);
  if ( a2 )
    v8 = (unsigned __int16 *)a1;
  v4 = a2 == 0 ? 0x80000005 : 0;
  *v8 = 0;
  return v4;
}
