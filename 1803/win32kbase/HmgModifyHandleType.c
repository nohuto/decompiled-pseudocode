/*
 * XREFs of HmgModifyHandleType @ 0x1C0065050
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002FA68 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C00C2F70 (HmgLockAndModifyHandleType.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00C8310 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  GdiHandleManager *v1; // rbx
  unsigned int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // rbp
  struct _ENTRY *Entry; // r14
  unsigned int v7; // eax
  _QWORD *v8; // r8
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 result; // rax

  v1 = gpHandleManager;
  v3 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v3);
  v5 = *((_QWORD *)v1 + 2);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, v4, 0);
  v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v1, v3);
  v8 = 0LL;
  v9 = *(_DWORD *)(v5 + 2056);
  v10 = v7;
  if ( v7 < v9 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
  {
    if ( v7 >= v9 )
      v11 = ((v7 - v9) >> 16) + 1;
    else
      v11 = 0;
    v12 = *(_QWORD *)(v5 + 8LL * v11 + 8);
    if ( v11 )
      v10 += ((1 - v11) << 16) - v9;
    if ( v10 < *(_DWORD *)(v12 + 20) )
      v8 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                      + 16LL * (unsigned __int8)v10
                      + 8);
  }
  *((_WORD *)Entry + 6) = WORD1(a1);
  result = a1;
  *v8 = a1;
  return result;
}
