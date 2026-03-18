/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C027A31C
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0279D80 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C02720CC (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0278554 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C0278B40 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C027ABE8 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  __int64 v6; // rsi
  int v10; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _D3DKMT_PRESENT_RGNS *v15; // r12
  int DirtyRectCount; // eax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int128 v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rbx
  void *Buffer; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  struct _D3DKMT_PRESENT_RGNS v47; // [rsp+30h] [rbp-50h] BYREF
  int *v48; // [rsp+50h] [rbp-30h]
  GUID v49; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v50; // [rsp+68h] [rbp-18h] BYREF

  LODWORD(v6) = 0;
  *(_QWORD *)v49.Data4 = a3;
  v48 = a6;
  v10 = 1;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_DWORD *)a2;
  *(LARGE_INTEGER *)&v49.Data1 = PerformanceCounter;
  if ( v12 )
  {
    if ( (unsigned int)(v12 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v37 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v37;
      if ( *(_DWORD *)a2 == 2 )
      {
        v38 = *((_QWORD *)a2 + 3);
        v39 = (unsigned int)(*(_DWORD *)(v38 + 8) * *(_DWORD *)(v38 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((AUTOEXPANDALLOCATION **)a4 + 11),
                   *(_DWORD *)(v38 + 8) * *(_DWORD *)(v38 + 12),
                   0);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(*((_QWORD *)a2 + 3) + 24LL), (unsigned int)v39);
          v45 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v45;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v45 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v45 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          v46 = WdLogNewEntry5_WdLowResource(v42, v41, v43, v44);
          *(_QWORD *)(v46 + 24) = v39;
          *(_QWORD *)(v46 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogEvent5_WdLowResource(v46);
          LODWORD(v6) = -1073741801;
        }
      }
    }
    return (unsigned int)v6;
  }
  memset(&v47, 0, sizeof(v47));
  *(_QWORD *)&v50.left = 0LL;
  *(_QWORD *)&v50.right = 0LL;
  if ( *((_DWORD *)this + 10) != 1 || *((_DWORD *)this + 70) == 1 || (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    v17 = WdLogNewEntry5_WdEvent(v14);
    *(_QWORD *)(v17 + 24) = *((int *)this + 70);
    *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 10);
    WdLogEvent5_WdEvent(v17);
    LODWORD(v6) = GetAllocationSize(*(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL), *((unsigned int *)a2 + 7), &v50);
    if ( (int)v6 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v14, v13, v18);
      *(_QWORD *)(v19 + 24) = 1682LL;
LABEL_10:
      WdLogEvent5_WdError(v19);
      return 3221225473LL;
    }
    *(&v47.DirtyRectCount + 1) = 0;
    *((_DWORD *)this + 70) = 0;
    v15 = &v47;
    v47.pDirtyRects = &v50;
    DirtyRectCount = 1;
    v47.DirtyRectCount = 1;
    *(_OWORD *)&v47.MoveRectCount = 0LL;
  }
  else
  {
    v15 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    DirtyRectCount = v15->DirtyRectCount;
  }
  if ( DirtyRectCount || v15->MoveRectCount )
    v10 = 0;
  if ( !*(_QWORD *)v49.Data4 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v33 + 24) = 1771LL;
      WdLogEvent5_WdAssertion(v33);
    }
    if ( !v10 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v15,
                            &v49,
                            *((_DWORD *)a2 + 6) & 1,
                            v48) )
      {
        v19 = WdLogNewEntry5_WdError(v35, v34, v36);
        *(_QWORD *)(v19 + 24) = 1783LL;
        goto LABEL_10;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v6) = 259;
    goto LABEL_34;
  }
  if ( !v10
    && !(unsigned int)DDAMetaData::CombineNewMetaData(
                        *((DDAMetaData **)a4 + 1),
                        v15,
                        &v49,
                        *((_DWORD *)a2 + 6) & 1,
                        v48) )
  {
    v19 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v19 + 24) = 1715LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
  {
    v24 = *((_QWORD *)a4 + 1);
    *(&v47.DirtyRectCount + 1) = 0;
    *(&v47.MoveRectCount + 1) = 0;
    v47.DirtyRectCount = *(_DWORD *)(v24 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((AUTOEXPANDALLOCATION **)v24, v47.DirtyRectCount);
    v26 = *((_QWORD *)a4 + 1);
    v47.pDirtyRects = DirtyRectData;
    v47.MoveRectCount = *(_DWORD *)(v26 + 44);
    v27 = *((unsigned int *)this + 11);
    v47.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v26 + 48);
    v28 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
            this,
            a2,
            *((_DWORD *)a2 + 7),
            *(_DWORD *)(*((_QWORD *)this + v27 + 6) + 92LL),
            &v47);
    goto LABEL_21;
  }
  if ( v10 )
  {
LABEL_34:
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v6;
  }
  v28 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *((_DWORD *)a2 + 7),
          *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
          v15);
LABEL_21:
  v6 = v28;
  if ( v28 >= 0 )
  {
    *((_DWORD *)a4 + 4) = 2;
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v6;
    WdLogEvent5_WdError(v32);
  }
  return (unsigned int)v6;
}
