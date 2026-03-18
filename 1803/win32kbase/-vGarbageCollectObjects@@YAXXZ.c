/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C0077D10
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x1C0076618 (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077AA0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077B94 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void vGarbageCollectObjects(void)
{
  int v0; // ecx
  int v1; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v0 = 0;
  v2 = 30;
  while ( 1 )
  {
    v1 = HmgNextGarbageCollectible(v0, &v3, &v2);
    if ( !v1 )
      break;
    if ( v2 == 5 )
    {
      vGarbageCollectObject<SURFREF>(v3);
    }
    else if ( v2 == 8 )
    {
      vGarbageCollectObject<EPALOBJ>(v3);
    }
    v0 = v1;
  }
}
