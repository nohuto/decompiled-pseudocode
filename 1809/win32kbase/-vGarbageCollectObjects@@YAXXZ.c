/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C00ACB28
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x1C00AAC0C (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC538 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC624 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC740 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC84C (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC938 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void vGarbageCollectObjects(void)
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  char v2; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp+18h] BYREF

  v3 = 0LL;
  v0 = 0LL;
  v2 = 30;
  while ( 1 )
  {
    v1 = HmgNextGarbageCollectible(v0, &v3, &v2);
    if ( !v1 )
      break;
    switch ( v2 )
    {
      case 5:
        vGarbageCollectObject<SURFREFGC>(v3);
        break;
      case 7:
        vGarbageCollectObject<EPATHOBJGC>(v3);
        break;
      case 8:
        vGarbageCollectObject<XEPALOBJ2>(v3);
        break;
      case 9:
        vGarbageCollectObject<COLORSPACEGC>(v3);
        break;
      case 16:
        vGarbageCollectObject<BRUSHSELOBJGC>(v3);
        break;
    }
    v0 = v1;
  }
}
