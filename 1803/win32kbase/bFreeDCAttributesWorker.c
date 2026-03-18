/*
 * XREFs of bFreeDCAttributesWorker @ 0x1C0031100
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     HmgFreeDcAttr @ 0x1C0031308 (HmgFreeDcAttr.c)
 */

__int64 __fastcall bFreeDCAttributesWorker(int *a1)
{
  int *v1; // rbx
  int *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // r8
  int *v6; // rax
  int *v7; // rdx
  __int128 v8; // xmm1
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r13
  int v12; // r15d
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  __int64 v15; // r9
  unsigned int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // rdx
  unsigned __int16 v19; // r12
  unsigned int v20; // ecx
  __int64 v21; // r8
  int *v22; // rdx
  __int64 v23; // rax
  struct _ENTRY *Entry; // rax
  __int64 v26; // [rsp+68h] [rbp+10h]

  v1 = a1 + 138;
  v3 = (int *)*((_QWORD *)a1 + 10);
  v4 = 0;
  if ( v3 != v1 )
  {
    v5 = 3LL;
    v6 = v1;
    v7 = v3;
    do
    {
      *(_OWORD *)v6 = *(_OWORD *)v7;
      *((_OWORD *)v6 + 1) = *((_OWORD *)v7 + 1);
      *((_OWORD *)v6 + 2) = *((_OWORD *)v7 + 2);
      *((_OWORD *)v6 + 3) = *((_OWORD *)v7 + 3);
      *((_OWORD *)v6 + 4) = *((_OWORD *)v7 + 4);
      *((_OWORD *)v6 + 5) = *((_OWORD *)v7 + 5);
      *((_OWORD *)v6 + 6) = *((_OWORD *)v7 + 6);
      v6 += 32;
      v8 = *((_OWORD *)v7 + 7);
      v7 += 32;
      *((_OWORD *)v6 - 1) = v8;
      --v5;
    }
    while ( v5 );
    *(_OWORD *)v6 = *(_OWORD *)v7;
    *((_OWORD *)v6 + 1) = *((_OWORD *)v7 + 1);
    if ( v3 == a1 + 244 )
      v3 = (int *)*((_QWORD *)a1 + 121);
    HmgFreeDcAttr(v3);
    v9 = *a1;
    *((_QWORD *)a1 + 10) = v1;
    v10 = (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000;
    if ( v10 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v9,
                                    1)
             + 13) == ((unsigned __int16)v9 | (v9 >> 8) & 0xFF0000) >> 16 )
          v10 = (unsigned __int16)v10;
      }
      else
      {
        v10 = (unsigned __int16)v9;
      }
    }
    v11 = *((_QWORD *)gpHandleManager + 2);
    v12 = *(unsigned __int16 *)(v11 + 2);
    v13 = *(_DWORD *)(v11 + 2056);
    if ( v10 >= v13 + ((v12 + 0xFFFF) << 16) )
    {
      v17 = 0LL;
      v26 = 0LL;
    }
    else
    {
      if ( v10 >= v13 )
        v14 = ((v10 - v13) >> 16) + 1;
      else
        v14 = 0;
      v15 = *(_QWORD *)(v11 + 8LL * v14 + 8);
      if ( v14 )
        v16 = v10 + ((1 - v14) << 16) - v13;
      else
        v16 = v10;
      v17 = 0LL;
      v26 = 0LL;
      if ( v16 >= *(_DWORD *)(v15 + 20) )
        v18 = 0LL;
      else
        v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v16 >> 8))
                        + 16LL * (unsigned __int8)v16
                        + 8);
      if ( v18 )
      {
        v17 = *(_QWORD *)v15 + 24LL * v16;
        v26 = v17;
      }
      LOWORD(v12) = *(_WORD *)(v11 + 2);
    }
    v19 = v12;
    if ( v10 >= 0x10000 )
    {
      v19 = v12;
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v11, (unsigned __int16)v10, 1);
        v17 = v26;
        if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v10) )
        {
          v10 = (unsigned __int16)v10;
          v19 = v12;
        }
      }
      else
      {
        v10 = (unsigned __int16)v10;
      }
    }
    if ( v10 >= v13 + ((v19 + 0xFFFF) << 16) )
      goto LABEL_31;
    if ( v10 >= v13 )
      v20 = ((v10 - v13) >> 16) + 1;
    else
      v20 = 0;
    v21 = *(_QWORD *)(v11 + 8LL * v20 + 8);
    if ( v20 )
      v10 += ((1 - v20) << 16) - v13;
    if ( v10 >= *(_DWORD *)(v21 + 20) )
LABEL_31:
      v22 = 0LL;
    else
      v22 = *(int **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                    + 16LL * (unsigned __int8)v10
                    + 8);
    v23 = 0LL;
    if ( v22 == a1 )
      v23 = v17;
    *(_QWORD *)(v23 + 16) = 0LL;
    return 1;
  }
  return v4;
}
