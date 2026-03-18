/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C027B348
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C027AA7C (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     McTemplateK0pqppqq @ 0x1C0046A14 (McTemplateK0pqppqq.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014F718 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PARAMS@@@Z @ 0x1C02581C0 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PAR.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  __int64 v6; // r12
  __int64 v8; // r13
  UINT MoveRectCount; // edx
  UINT v11; // r15d
  struct tagRECT *pDirtyRects; // rsi
  UINT v13; // edi
  struct tagRECT *Buffer; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  RECT *i; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdx
  const GUID *v25; // r8
  unsigned int v26; // ebx
  struct DXGCONTEXT **v27; // [rsp+20h] [rbp-58h]
  struct tagRECT *v28; // [rsp+38h] [rbp-40h]
  __int64 v29; // [rsp+40h] [rbp-38h]

  v6 = a4;
  v8 = a3;
  if ( !a5 )
    return 0LL;
  MoveRectCount = a5->MoveRectCount;
  v11 = a5->DirtyRectCount + MoveRectCount;
  if ( MoveRectCount )
  {
    v13 = 16 * a5->DirtyRectCount;
    Buffer = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(
                                 *((AUTOEXPANDALLOCATION **)a2 + 6),
                                 v13 + 16 * MoveRectCount,
                                 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      v19 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
      *(_QWORD *)(v19 + 24) = 1870LL;
      WdLogEvent5_WdLowResource(v19);
      return 3221225495LL;
    }
    memmove(Buffer, a5->pDirtyRects, v13);
    v20 = 0LL;
    for ( i = &pDirtyRects[a5->DirtyRectCount]; (unsigned int)v20 < a5->MoveRectCount; ++i )
    {
      v22 = v20;
      v20 = (unsigned int)(v20 + 1);
      *i = a5->pMoveRects[v22].DestRect;
    }
  }
  else
  {
    pDirtyRects = (struct tagRECT *)a5->pDirtyRects;
  }
  v23 = DXGCONTEXT::Blt(
          *((DXGCONTEXT **)a2 + 1),
          v8,
          v6,
          *((_DWORD *)a2 + 8),
          *((struct DXGCONTEXT ***)a2 + 8),
          0LL,
          v11,
          pDirtyRects,
          0LL,
          *((const struct DXGK_PRESENT_PARAMS **)a2 + 7));
  v26 = v23;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v29) = v23;
    LODWORD(v28) = v11;
    LODWORD(v27) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq((unsigned int)v27, v24, v25, this, v27, v8, v6, v28, v29);
  }
  return v26;
}
