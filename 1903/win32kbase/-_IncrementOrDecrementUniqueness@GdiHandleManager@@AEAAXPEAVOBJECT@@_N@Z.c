/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C00834E8
 * Callers:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0052CF0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001CE80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021EDC (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq @ 0x1C01105E8 (McTemplateK0ppqqq.c)
 */

void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(
        GdiHandleEntryDirectory **this,
        struct OBJECT *a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbp
  struct _ENTRY *EntryFromObject; // r10
  char v9; // cl
  char v10; // al
  char v11; // cl
  unsigned __int64 v12; // rcx
  char v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  char EtwGdiHandleType; // al
  int v18; // edx
  int v19; // ecx
  int v20; // r8d

  v3 = *(_QWORD *)a2;
  v7 = (unsigned int)GdiHandleManager::DecodeIndex(
                       this,
                       (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(this, a2);
  if ( (unsigned int)v7 >= 0x10000 || *(_DWORD *)this > 0x10000u )
  {
    if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
    {
      EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)EntryFromObject + 14));
      McTemplateK0ppqqq(v19, v18, v20, v3, v3, EtwGdiHandleType);
    }
  }
  else
  {
    v9 = *((_BYTE *)EntryFromObject + 13);
    v10 = v9 - 1;
    v11 = v9 + 1;
    if ( !a3 )
      v11 = v10;
    *((_BYTE *)EntryFromObject + 13) = v11;
    v12 = v7 | ((unsigned __int64)*((unsigned __int16 *)EntryFromObject + 6) << 16);
    *(_QWORD *)a2 = v12;
    *(_QWORD *)EntryFromObject = (unsigned __int16)v12 | *(_QWORD *)EntryFromObject & 0xFFFFFFFFFF000000uLL | ((unsigned int)v12 >> 8) & 0xFF0000;
    if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
    {
      v13 = GetEtwGdiHandleType(*((_BYTE *)EntryFromObject + 14));
      McTemplateK0ppqqq(v15, v14, v16, v3, *(_QWORD *)a2, v13);
    }
  }
}
