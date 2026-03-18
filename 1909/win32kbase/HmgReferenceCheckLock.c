/*
 * XREFs of HmgReferenceCheckLock @ 0x1C0093150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgReferenceCheckLock(unsigned int a1, char a2)
{
  GdiHandleManager *v2; // r14
  __int16 v4; // edi^2
  unsigned int v5; // ebp
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rsi
  struct _ENTRY *Entry; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  __int64 v14; // rax

  v2 = gpHandleManager;
  v4 = HIWORD(a1);
  v5 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v6 = 0LL;
  v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v5);
  v8 = *((_QWORD *)v2 + 2);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v8, v7, 0);
  if ( Entry )
  {
    if ( *((_BYTE *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    {
      v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v2, v5);
      v11 = v10;
      v12 = *(_DWORD *)(v8 + 2056);
      if ( v10 < v12 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      {
        if ( v10 >= v12 )
          v13 = ((v10 - v12) >> 16) + 1;
        else
          v13 = 0;
        v14 = *(_QWORD *)(v8 + 8LL * v13 + 8);
        if ( v13 )
          v11 += ((1 - v13) << 16) - v12;
        if ( v11 < *(_DWORD *)(v14 + 20) )
          return *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                           + 16LL * (unsigned __int8)v11
                           + 8);
      }
    }
  }
  return v6;
}
