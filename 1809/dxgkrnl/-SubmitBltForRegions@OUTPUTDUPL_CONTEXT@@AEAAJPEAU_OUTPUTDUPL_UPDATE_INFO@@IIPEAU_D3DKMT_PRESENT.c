/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C024576C
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C0244EA0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     McTemplateK0pqppqq @ 0x1C003FC48 (McTemplateK0pqppqq.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223420 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
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
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  RECT *i; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  const GUID *v22; // r8
  unsigned int v23; // ebx
  struct DXGCONTEXT **v24; // [rsp+20h] [rbp-58h]
  struct tagRECT *v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]

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
                                 *((AUTOEXPANDALLOCATION **)a2 + 4),
                                 v13 + 16 * MoveRectCount,
                                 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      v16 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v16 + 24) = 1870LL;
      WdLogEvent5_WdLowResource(v16);
      return 3221225495LL;
    }
    memmove(Buffer, a5->pDirtyRects, v13);
    v17 = 0LL;
    for ( i = &pDirtyRects[a5->DirtyRectCount]; (unsigned int)v17 < a5->MoveRectCount; ++i )
    {
      v19 = v17;
      v17 = (unsigned int)(v17 + 1);
      *i = a5->pMoveRects[v19].DestRect;
    }
  }
  else
  {
    pDirtyRects = (struct tagRECT *)a5->pDirtyRects;
  }
  v20 = DXGCONTEXT::Blt(
          *((DXGCONTEXT **)a2 + 1),
          v8,
          v6,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL),
          *((struct DXGCONTEXT ***)a2 + 5),
          0LL,
          v11,
          pDirtyRects,
          0LL);
  v23 = v20;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v26) = v20;
    LODWORD(v25) = v11;
    LODWORD(v24) = *((_DWORD *)this + 11);
    McTemplateK0pqppqq((unsigned int)v24, v21, v22, this, v24, v8, v6, v25, v26);
  }
  return v23;
}
