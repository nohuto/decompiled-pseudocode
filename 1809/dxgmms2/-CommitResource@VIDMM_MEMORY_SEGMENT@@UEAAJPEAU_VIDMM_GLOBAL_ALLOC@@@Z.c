/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00706E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0010570 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0017874 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017AA4 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017FE8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C007095C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00B3FA0 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00B4064 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *v4; // rsi
  __int64 v5; // r14
  int v6; // ebp
  __int64 v7; // rax
  VIDMM_MEMORY_SEGMENT *v8; // rax
  VIDMM_MEMORY_SEGMENT **v9; // rdx
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // ecx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v16; // rcx
  VIDMM_CPU_HOST_APERTURE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PMDL v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  void *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  signed __int32 v29[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = 0LL;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v5 = *((_QWORD *)a2 + 13);
  if ( (*((_DWORD *)a2 + 21) & 0x20) == 0 )
  {
LABEL_4:
    v6 = VIDMM_MEMORY_SEGMENT::TransferToSegment((VIDMM_MEMORY_SEGMENT *)this, a2, v4, 0);
    goto LABEL_5;
  }
  v18 = this[61];
  if ( !v18 )
  {
    v25 = *(void **)(v5 + 16);
    v26 = *((_QWORD *)a2 + 27);
    if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 308LL) & 8) != 0 )
      v21 = VidMmiBuildMdlFromMdl(v25, *((_QWORD *)a2 + 2), *(struct _MDL **)(*((_QWORD *)a2 + 28) + 32LL), v26 / 4096);
    else
      v21 = VidMmiBuildMdlForContiguousMmIo(
              v25,
              *((_QWORD *)a2 + 2),
              (union _LARGE_INTEGER)(*(_QWORD *)(*((_QWORD *)a2 + 28) + 32LL) + v26));
LABEL_23:
    v4 = v21;
    if ( !v21 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v27 + 24) = 1232LL;
      WdLogEvent5_WdAssertion(v27);
      v6 = -1073741801;
      goto LABEL_29;
    }
    goto LABEL_4;
  }
  v6 = VIDMM_CPU_HOST_APERTURE::MapRange(v18, a2);
  if ( v6 >= 0 )
  {
    v21 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
            this[61],
            *(void **)(v5 + 16),
            (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 472),
            *((_QWORD *)a2 + 27),
            *((_QWORD *)a2 + 2));
    goto LABEL_23;
  }
  v24 = WdLogNewEntry5_WdAssertion(v20, v19);
  *(_QWORD *)(v24 + 24) = 1175LL;
  WdLogEvent5_WdAssertion(v24);
LABEL_5:
  if ( v6 >= 0 )
  {
    v7 = *((_QWORD *)a2 + 26);
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 19) = v7;
    v8 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
    *((_DWORD *)a2 + 32) = 2;
    *((_BYTE *)a2 + 97) = 1;
    v9 = (VIDMM_MEMORY_SEGMENT **)this[21];
    if ( *v9 != (VIDMM_MEMORY_SEGMENT *)(this + 20) )
      __fastfail(3u);
    *(_QWORD *)v8 = this + 20;
    *((_QWORD *)a2 + 49) = v9;
    *v9 = v8;
    this[21] = v8;
    v10 = *((_DWORD *)a2 + 18);
    if ( !v10
      || (((_DWORD)this[10] & 0x1000) != 0 ? (v11 = 0) : (v11 = *((_DWORD *)this + 4) + 1),
          (*((_DWORD *)a2 + 18) & 0x1F) == v11
       || (((_DWORD)this[10] & 0x1000) == 0 ? (v28 = *((_DWORD *)this + 4) + 1) : (v28 = 0), ((v10 >> 6) & 0x1F) == v28)) )
    {
      v12 = 0x800000;
    }
    else
    {
      v12 = 0;
    }
    *((_DWORD *)a2 + 19) = v12 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
    if ( v5 && *(_QWORD *)(v5 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v5, (__int64)this, *((_QWORD *)a2 + 2), 0);
    *((_QWORD *)this[1] + 5022) += *((_QWORD *)a2 + 2) >> 12;
    v13 = this[1];
    _InterlockedOr(v29, 0);
    ++*((_QWORD *)v13 + 5);
    v14 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v14 + *((_QWORD *)this[1] + 5023) + 1536) += *((_QWORD *)a2 + 2);
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                  + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 208LL))
                      + 48LL)
          + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
      *(_QWORD *)(v16 + 232) += *((_QWORD *)a2 + 2);
    }
    goto LABEL_18;
  }
LABEL_29:
  if ( *((_QWORD *)a2 + 56) )
    VIDMM_CPU_HOST_APERTURE::UnmapRange(this[61], a2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_18:
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40));
  return (unsigned int)v6;
}
