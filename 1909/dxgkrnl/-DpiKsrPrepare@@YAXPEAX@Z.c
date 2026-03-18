/*
 * XREFs of ?DpiKsrPrepare@@YAXPEAX@Z @ 0x1C02A9088
 * Callers:
 *     DpiKsrCallback @ 0x1C02A96E0 (DpiKsrCallback.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02A88CC (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpSaveMemoryForHotUpdateCB @ 0x1C02A9430 (DpSaveMemoryForHotUpdateCB.c)
 */

void __fastcall DpiKsrPrepare(_BYTE *a1)
{
  struct _MDL *v1; // rdi
  int v2; // eax
  PMDL PagesForMdl; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _DWORD *MappedSystemVa; // rsi
  int updated; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  PVOID v14[5]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v15[7]; // [rsp+58h] [rbp+1Fh] BYREF

  a1[1264] = 1;
  v1 = 0LL;
  memset(v14, 0, sizeof(v14));
  DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, v14);
  if ( SLODWORD(v14[4]) >= 0 )
  {
    v2 = (int)v14[1];
    if ( LODWORD(v14[1]) )
    {
      LODWORD(v14[1]) += 29;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v2 + 4124) & 0xFFFFF000, MmCached, 0x24u);
      v1 = PagesForMdl;
      if ( !PagesForMdl
        || ((PagesForMdl->MdlFlags & 5) == 0
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = PagesForMdl->MappedSystemVa),
            (v14[2] = MappedSystemVa) == 0LL) )
      {
        v7 = WdLogNewEntry5_WdError(v5, v4, v6);
        *(_QWORD *)(v7 + 24) = -1073741670LL;
LABEL_12:
        WdLogEvent5_WdError(v7);
        goto LABEL_13;
      }
      MappedSystemVa[1] = HIDWORD(v14[0]);
      *MappedSystemVa = v14[1];
      HIDWORD(v14[0]) = 0;
      v14[3] = (char *)MappedSystemVa + 29;
      v14[2] = (char *)MappedSystemVa + 29;
      DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, v14);
      if ( __PAIR64__(HIDWORD(v14[0]), (unsigned int)v14[1]) == *(_QWORD *)MappedSystemVa )
      {
        memset(v15, 0, sizeof(v15));
        v15[2] = v1;
        updated = DpSaveMemoryForHotUpdateCB(0LL, v15);
        v13 = updated;
        if ( updated < 0 )
        {
          v7 = WdLogNewEntry5_WdError(v11, v10, v12);
          *(_QWORD *)(v7 + 24) = v13;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_13:
  if ( v14[2] )
    MmUnmapLockedPages(v14[2], v1);
  if ( SLODWORD(v14[4]) < 0 )
  {
    MmFreePagesFromMdl(v1);
    ExFreePoolWithTag(v1, 0);
  }
}
