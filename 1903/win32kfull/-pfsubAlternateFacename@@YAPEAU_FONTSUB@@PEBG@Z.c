/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C004ADA0
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0077F80 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C0106404 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B1198 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     cCapString @ 0x1C004C288 (cCapString.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

struct _FONTSUB *__fastcall pfsubAlternateFacename(const unsigned __int16 *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  unsigned __int16 *v3; // rax
  int v4; // r8d
  int v5; // ecx
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (char *)gpfsTable;
  v2 = (char *)gpfsTable + 196 * gcfsTable;
  cCapString(v7, a1, 32LL);
  while ( 1 )
  {
    if ( v1 >= v2 )
      return 0LL;
    v3 = (unsigned __int16 *)v7;
    do
    {
      v4 = *(unsigned __int16 *)((char *)v3 + v1 + 64 - v7);
      v5 = *v3 - v4;
      if ( v5 )
        break;
      ++v3;
    }
    while ( v4 );
    if ( !v5
      && ((v1[129] & 1) != 0 || v1[128] == v1[194])
      && (v1 != gpfsTable || (GetAppCompatFlags2(1024LL) & 0x400) != 0) )
    {
      break;
    }
    v1 += 196;
  }
  return (struct _FONTSUB *)v1;
}
