/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C002B970
 * Callers:
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D2F0 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002BC10 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(GdiHandleManager *this, struct OBJECT *a2, char a3)
{
  __int64 v6; // rsi
  struct _ENTRY *EntryFromObject; // rax
  char v8; // dl
  char v9; // cl
  char v10; // dl
  unsigned __int64 v11; // rdx

  v6 = GdiHandleManager::DecodeIndex(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000);
  if ( (unsigned int)v6 < 0x10000 && *(_DWORD *)this <= 0x10000u )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject(this, a2);
    v8 = *((_BYTE *)EntryFromObject + 13);
    v9 = v8 - 1;
    v10 = v8 + 1;
    if ( !a3 )
      v10 = v9;
    *((_BYTE *)EntryFromObject + 13) = v10;
    v11 = v6 | (*((unsigned __int16 *)EntryFromObject + 6) << 16);
    *(_QWORD *)a2 = v11;
    *(_QWORD *)EntryFromObject = (unsigned __int16)v11 | *(_QWORD *)EntryFromObject & 0xFFFFFFFFFF000000uLL | (v11 >> 8) & 0xFF0000;
  }
}
