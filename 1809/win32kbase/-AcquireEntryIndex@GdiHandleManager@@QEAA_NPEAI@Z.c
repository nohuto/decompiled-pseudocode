/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C00012E0
 * Callers:
 *     HmgAlloc @ 0x1C0001010 (HmgAlloc.c)
 *     HmgCreate @ 0x1C0005068 (HmgCreate.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C00013D0 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C007F13C (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  GdiHandleManager *v2; // rdi
  __int64 v4; // rsi
  GdiHandleEntryTable *v5; // rcx
  unsigned int v6; // ebx
  char v7; // si
  unsigned int v8; // eax
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  GdiHandleEntryTable *v14; // rbp
  GdiHandleEntryTable *v15; // rcx
  __int64 v16; // rdx
  void *v17; // rax
  GdiHandleManager *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = this;
  v2 = gpHandleManager;
  if ( *((_DWORD *)gpHandleManager + 1) < *((_DWORD *)gpHandleManager + 2) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)v2 + 2);
      if ( *(_BYTE *)v4 )
        return 0;
      v5 = *(GdiHandleEntryTable **)(v4 + 8);
      LODWORD(v18) = 0;
      if ( GdiHandleEntryTable::AcquireEntryIndex(v5, (unsigned int *)&v18) )
      {
        v6 = (unsigned int)v18;
      }
      else
      {
        LOWORD(v12) = *(_WORD *)(v4 + 2);
        v13 = 1;
        if ( (unsigned __int16)v12 <= 1u )
        {
LABEL_18:
          if ( (_WORD)v12 == 256 )
          {
            *(_BYTE *)v4 = 1;
            return 0;
          }
          *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
          v15 = *(GdiHandleEntryTable **)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8);
          if ( !v15 )
            return 0;
          GdiHandleEntryTable::AcquireEntryIndex(v15, (unsigned int *)&v18);
          v13 = *(unsigned __int16 *)(v4 + 2);
          *(_WORD *)(v4 + 2) = v13 + 1;
        }
        else
        {
          while ( 1 )
          {
            v14 = *(GdiHandleEntryTable **)(v4 + 8LL * v13 + 8);
            if ( GdiHandleEntryTable::AcquireEntryIndex(v14, (unsigned int *)&v18) )
              break;
            if ( *((_DWORD *)v14 + 4) != *((_DWORD *)v14 + 2) )
              return 0;
            v12 = *(unsigned __int16 *)(v4 + 2);
            if ( ++v13 >= v12 )
              goto LABEL_18;
          }
        }
        v6 = (_DWORD)v18 + *(_DWORD *)(v4 + 2056) + ((v13 + 0xFFFF) << 16);
      }
      ++*((_DWORD *)v2 + 1);
      v7 = 0;
      v8 = *((_DWORD *)v2 + 1);
      if ( v8 > *(_DWORD *)v2 )
      {
        *(_DWORD *)v2 = v8;
        v7 = 1;
        gcMaxHmgr = v8;
      }
      v9 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)v6);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v9, 1);
      if ( v6 < 0x10000 )
      {
        if ( v7 || *(_DWORD *)v2 > 0x10000u )
          *((_BYTE *)Entry + 13) = 0;
        else
          v6 += (unsigned __int8)++*((_BYTE *)Entry + 13) << 16;
LABEL_11:
        *a2 = v6;
        return 1;
      }
      if ( *((unsigned __int8 *)Entry + 13) != HIWORD(v6) )
        goto LABEL_11;
      v16 = *((_QWORD *)v2 + 3);
      if ( v16 )
        goto LABEL_26;
      v17 = (void *)Win32AllocPool(0x40000LL, 1668114503LL);
      *((_QWORD *)v2 + 3) = v17;
      if ( v17 )
        break;
LABEL_27:
      if ( *((_DWORD *)v2 + 1) >= *((_DWORD *)v2 + 2) )
        return 0;
    }
    memset(v17, 0, 0x40000uLL);
    v16 = *((_QWORD *)v2 + 3);
LABEL_26:
    *(_DWORD *)(v16 + 4LL * (unsigned __int16)v6) = v6;
    goto LABEL_27;
  }
  return 0;
}
