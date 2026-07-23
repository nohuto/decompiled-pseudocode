/*
 * XREFs of PiDrvDbRegisterNodeCallback @ 0x140764A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDrvDbRegisterNode @ 0x14073BC40 (PiDrvDbRegisterNode.c)
 */

bool __fastcall PiDrvDbRegisterNodeCallback(const WCHAR *a1, int *a2)
{
  int v4; // ebx
  __int64 v6; // rax
  SIZE_T v7; // rbx
  wchar_t *PoolWithTag; // rsi

  if ( wcsicmp(a1, L"SYSTEM") )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a1[v6] );
    v7 = (unsigned int)(2 * v6 + 76);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x62647050u);
    if ( PoolWithTag )
    {
      v4 = RtlStringCchPrintfW(
             PoolWithTag,
             v7 >> 1,
             L"%ws\\%ws%ws%ws",
             L"\\DriverStores",
             a1,
             L"\\System32\\config\\",
             L"SYSTEM");
      if ( v4 >= 0 )
      {
        v4 = PiDrvDbRegisterNode(a1, 10);
        if ( v4 == 0x40000000 )
          v4 = 0;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = 0;
  }
  *a2 = v4;
  return v4 >= 0;
}
