/*
 * XREFs of BvgaDriverInitialize @ 0x1409D8020
 * Callers:
 *     InbvDriverInitialize @ 0x1409D7F70 (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x140194D10 (_strupr.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     FindBitmapResource @ 0x1409D8120 (FindBitmapResource.c)
 *     BvgaSaveResources @ 0x1409D81A8 (BvgaSaveResources.c)
 */

char __fastcall BvgaDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 BitmapResource; // rax
  char *v10; // rcx
  char *v11; // rax

  v5 = a2;
  LOBYTE(a2) = 0;
  if ( BvgaBootDriverFullyInitialized == 1 )
    return 1;
  BootDriverLock = 0LL;
  if ( a1 == 1 && !BvgaDisplayState )
  {
    v10 = *(char **)(v5 + 216);
    if ( v10 )
      v11 = strupr(v10);
    else
      v11 = 0LL;
    if ( v11 )
      LOBYTE(a2) = strstr(v11, "BOOTLOGO") == 0LL;
    else
      LOBYTE(a2) = 1;
  }
  BvgaBootDriverInstalled = VidInitialize(a1, a2, v5);
  if ( !BvgaBootDriverInstalled )
    return 0;
  if ( a1 == 1 )
  {
    BvgaBootDriverFullyInitialized = 1;
    ResourceCount = a3;
    if ( a3 > 7 )
    {
      ResourceCount = 7;
      a3 = 7;
    }
    v7 = 1;
    if ( a3 )
    {
      do
      {
        v8 = v7 - 1;
        BitmapResource = FindBitmapResource(v7++, (char *)&ResourceSize + 4 * v8);
        ResourceList[v8] = BitmapResource;
      }
      while ( v7 <= ResourceCount );
    }
    BvgaSaveResources();
    BvgaProgressState = 0;
    dword_1404382F4 = 10000;
    dword_1404382F8 = 100;
  }
  return BvgaBootDriverInstalled;
}
