/*
 * XREFs of EtwTraceDWMGetDirtyRegion @ 0x1C0080040
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C01076C4 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3 @ 0x1C0108554 (McTemplateK0xqnqNR3.c)
 */

void __fastcall EtwTraceDWMGetDirtyRegion(int a1, char a2, struct REGION *a3)
{
  unsigned int RegionPtrData; // eax
  unsigned int v7; // esi
  struct _RGNDATA *v8; // rax
  __int64 v9; // rbx
  int v10; // r8d

  if ( a3 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
      && (qword_1C01C3310 & 0x8000000000001000uLL) != 0
      && (qword_1C01C3318 & 0x8000000000001000uLL) == qword_1C01C3318 )
    {
      RegionPtrData = GrepGetRegionPtrData(a3, 0, 0LL);
      v7 = RegionPtrData;
      if ( RegionPtrData )
      {
        v8 = (struct _RGNDATA *)Win32AllocPool(RegionPtrData, 0x79737355u);
        v9 = (__int64)v8;
        if ( v8 )
        {
          if ( GrepGetRegionPtrData(a3, v7, v8) )
          {
            if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              McTemplateK0xqnqNR3(v9 + 16, (unsigned int)&DWMGetRgnEvent, v10, a1, a2);
          }
          Win32FreePool(v9);
        }
      }
    }
  }
}
