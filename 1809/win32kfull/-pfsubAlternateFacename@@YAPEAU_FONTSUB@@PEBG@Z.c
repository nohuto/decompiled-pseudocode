/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C007E324
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C007E7E4 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C00FCF10 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C029C314 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

struct _FONTSUB *__fastcall pfsubAlternateFacename(const unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v5; // rdi
  unsigned __int16 *v6; // rax
  int v7; // r8d
  int v8; // ecx
  _BYTE v10[64]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (char *)gpfsTable;
  v5 = (char *)gpfsTable + 196 * gcfsTable;
  cCapString(v10, a1, 32LL, a4);
  while ( 1 )
  {
    if ( v4 >= v5 )
      return 0LL;
    v6 = (unsigned __int16 *)v10;
    do
    {
      v7 = *(unsigned __int16 *)((char *)v6 + v4 + 64 - v10);
      v8 = *v6 - v7;
      if ( v8 )
        break;
      ++v6;
    }
    while ( v7 );
    if ( !v8
      && ((v4[129] & 1) != 0 || v4[128] == v4[194])
      && (v4 != gpfsTable || (GetAppCompatFlags2(1024LL) & 0x400) != 0) )
    {
      break;
    }
    v4 += 196;
  }
  return (struct _FONTSUB *)v4;
}
