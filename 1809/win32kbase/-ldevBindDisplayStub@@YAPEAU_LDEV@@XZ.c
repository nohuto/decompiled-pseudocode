/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C0056B74
 * Callers:
 *     ldevLoadDriver @ 0x1C0054000 (ldevLoadDriver.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C0056C40 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 */

struct _LDEV *ldevBindDisplayStub(void)
{
  struct _LDEV *i; // rbx
  struct _LDEV *v1; // rax
  struct _LDEV *v2; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-18h] BYREF
  void *v5; // [rsp+28h] [rbp-10h]

  for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
  {
    if ( (*((_DWORD *)i + 8) & 8) != 0 )
    {
      ++*((_DWORD *)i + 7);
      return i;
    }
  }
  v1 = (struct _LDEV *)PALLOCMEM2(0x388uLL, 1986292807LL, 1);
  i = v1;
  if ( v1 )
  {
    *((_DWORD *)v1 + 8) |= 0xAu;
    *((_DWORD *)v1 + 15) = 0;
    *((_QWORD *)v1 + 112) = (char *)v1 + 64;
    *((_DWORD *)v1 + 6) = 1;
    *((_DWORD *)v1 + 7) = 1;
    v5 = &unk_1C01C7DF0;
    v4[0] = 196864;
    v4[1] = 16;
    if ( (unsigned int)ldevFillTable(v1, v4) )
    {
      if ( gpldevDrivers )
        *((_QWORD *)gpldevDrivers + 1) = i;
      v2 = gpldevDrivers;
      *((_QWORD *)i + 1) = 0LL;
      *(_QWORD *)i = v2;
      gpldevDrivers = i;
    }
    else
    {
      Win32FreePool((__int64)i);
      return 0LL;
    }
  }
  return i;
}
