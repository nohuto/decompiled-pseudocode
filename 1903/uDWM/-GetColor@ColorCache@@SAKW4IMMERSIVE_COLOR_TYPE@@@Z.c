/*
 * XREFs of ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18007E918
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017100 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001D0D0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18003CE00 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall ColorCache::GetColor(unsigned int a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  unsigned int v4; // ebx
  unsigned int Buffer; // [rsp+20h] [rbp-10h] BYREF
  unsigned int Color; // [rsp+24h] [rbp-Ch]
  char v8; // [rsp+28h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+18h] BYREF

  v9 = &ColorCache::_lock;
  EnterCriticalSection(&ColorCache::_lock);
  Color = 0;
  v8 = 1;
  Buffer = a1;
  v2 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
  v3 = v2;
  if ( v2 )
  {
    if ( !*((_BYTE *)v2 + 8) )
    {
      v2[1] = CImmersiveColor::GetColor(a1);
      *((_BYTE *)v3 + 8) = 1;
    }
    v4 = v3[1];
  }
  else
  {
    Color = 0;
    v8 = 1;
    Buffer = a1;
    Color = CImmersiveColor::GetColor(a1);
    RtlInsertElementGenericTable(&ColorCache::_cachedColors, &Buffer, 0xCu, 0LL);
    v4 = Color;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v4;
}
