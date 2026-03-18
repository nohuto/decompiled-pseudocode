/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00C83D8
 * Callers:
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C0040950 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00CAD44 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02886EC (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     cCapString @ 0x1C00CA9C4 (cCapString.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

struct _FONTSUB *__fastcall pfsubAlternateFacename(const unsigned __int16 *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  unsigned __int16 *v3; // rax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // ecx
  _BYTE v8[64]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (char *)gpfsTable;
  v2 = (char *)gpfsTable + 196 * gcfsTable;
  cCapString(v8, a1, 32LL);
  while ( 1 )
  {
    if ( v1 >= v2 )
      return 0LL;
    v3 = (unsigned __int16 *)v8;
    v4 = v1 + 64 - v8;
    do
    {
      v5 = *(unsigned __int16 *)((char *)v3 + v4);
      v6 = *v3 - v5;
      if ( v6 )
        break;
      ++v3;
    }
    while ( v5 );
    if ( !v6
      && ((v1[129] & 1) != 0 || v1[128] == v1[194])
      && (v1 != gpfsTable || (GetAppCompatFlags2(0x400u, v4) & 0x400) != 0) )
    {
      break;
    }
    v1 += 196;
  }
  return (struct _FONTSUB *)v1;
}
