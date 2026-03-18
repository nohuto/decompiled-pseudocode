/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0029910
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     HmgCreate @ 0x1C005D050 (HmgCreate.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EC40 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z @ 0x1C0029A30 (-AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  GdiHandleManager *v2; // rbx
  GdiHandleEntryDirectory *v4; // rcx
  char v5; // r10
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // r11
  unsigned int v10; // r8d
  __int64 v11; // rcx
  GdiHandleEntryTable *v12; // r14
  __int64 v13; // r9
  __int64 v15; // rdx
  void *v16; // rax
  GdiHandleManager *v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = this;
  v2 = gpHandleManager;
  if ( *((_DWORD *)gpHandleManager + 1) < *((_DWORD *)gpHandleManager + 2) )
  {
    while ( 1 )
    {
      v4 = (GdiHandleEntryDirectory *)*((_QWORD *)v2 + 2);
      LODWORD(v17) = 0;
      if ( !GdiHandleEntryDirectory::AcquireEntryIndex(v4, (unsigned int *)&v17) )
        return 0;
      ++*((_DWORD *)v2 + 1);
      v5 = 0;
      v6 = *((_DWORD *)v2 + 1);
      if ( v6 > *(_DWORD *)v2 )
      {
        *(_DWORD *)v2 = v6;
        v5 = 1;
        gcMaxHmgr = v6;
      }
      v7 = *((_QWORD *)v2 + 2);
      v8 = (unsigned int)v17;
      v9 = (unsigned __int16)v17;
      v10 = *(_DWORD *)(v7 + 2056);
      if ( (unsigned __int16)v17 >= v10 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      {
        v13 = 0LL;
      }
      else
      {
        v11 = (((unsigned __int16)v17 - v10) >> 16) + 1;
        if ( (unsigned __int16)v17 < v10 )
          v11 = 0LL;
        v12 = *(GdiHandleEntryTable **)(v7 + 8 * v11 + 8);
        if ( (_DWORD)v11 )
          v9 = ((1 - (_DWORD)v11) << 16) - v10 + (unsigned __int16)v17;
        if ( (unsigned int)v9 < *((_DWORD *)v12 + 5) || GdiHandleEntryTable::GetEntryObject(v12, v9) )
          v13 = *(_QWORD *)v12 + 24 * v9;
      }
      if ( v8 < 0x10000 )
      {
        if ( v5 || *(_DWORD *)v2 > 0x10000u )
          *(_BYTE *)(v13 + 13) = 0;
        else
          v8 += (unsigned __int8)++*(_BYTE *)(v13 + 13) << 16;
LABEL_16:
        *a2 = v8;
        return 1;
      }
      if ( *(unsigned __int8 *)(v13 + 13) != HIWORD(v8) )
        goto LABEL_16;
      v15 = *((_QWORD *)v2 + 3);
      if ( v15 )
        goto LABEL_26;
      v16 = (void *)Win32AllocPool(0x40000LL, 0x636D6847u);
      *((_QWORD *)v2 + 3) = v16;
      if ( v16 )
        break;
LABEL_27:
      if ( *((_DWORD *)v2 + 1) >= *((_DWORD *)v2 + 2) )
        return 0;
    }
    memset(v16, 0, 0x40000uLL);
    v15 = *((_QWORD *)v2 + 3);
LABEL_26:
    *(_DWORD *)(v15 + 4LL * (unsigned __int16)v8) = v8;
    goto LABEL_27;
  }
  return 0;
}
