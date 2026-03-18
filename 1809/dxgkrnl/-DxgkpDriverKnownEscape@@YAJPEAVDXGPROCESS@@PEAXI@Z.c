/*
 * XREFs of ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C020CFC8
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkpDriverKnownEscape(struct DXGPROCESS *a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int Ptr_high; // ecx
  unsigned int v20; // esi
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  struct _EX_RUNDOWN_REF *v31; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned int)a3 < 4 )
  {
    v5 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v5 + 24) = 765LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  v7 = (unsigned int)*a2;
  if ( !(_DWORD)v7 )
  {
    if ( (unsigned int)a3 < 8 )
    {
      v5 = WdLogNewEntry5_WdWarning(v7, a2, a3);
      *(_QWORD *)(v5 + 24) = 774LL;
      goto LABEL_3;
    }
    v20 = a2[1];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 208));
    v21 = (v20 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)a1 + 62) )
    {
      v22 = *((_QWORD *)a1 + 29);
      v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
      if ( ((v20 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
      {
        v24 = v23 & 0x1F;
        if ( (_BYTE)v24 == 5 )
        {
          v26 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * (unsigned int)v21);
          goto LABEL_32;
        }
        v25 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v25 + 24) = 316LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
LABEL_32:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v26);
    ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v31 )
    {
      v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = 781LL;
      WdLogEvent5_WdWarning(v30);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      return 3221225485LL;
    }
    if ( (v31[9].Count & 0x40000) != 0 )
      a2[1] = v31[12].Count;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
    return 0LL;
  }
  if ( (_DWORD)v7 != 1 )
  {
    v5 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v5 + 24) = 811LL;
    goto LABEL_3;
  }
  if ( (unsigned int)a3 < 8 )
  {
    v5 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v5 + 24) = 794LL;
    goto LABEL_3;
  }
  v8 = a2[1];
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 208));
  v9 = (v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)a1 + 62) )
  {
    v10 = *((_QWORD *)a1 + 29);
    v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
    if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
    {
      v12 = v11 & 0x1F;
      if ( (_BYTE)v12 == 4 )
      {
        v14 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
        goto LABEL_17;
      }
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = 316LL;
      WdLogEvent5_WdError(v13);
    }
  }
  v14 = 0LL;
LABEL_17:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v31, v14);
  ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v31 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = 801LL;
    WdLogEvent5_WdWarning(v18);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
    return 3221225485LL;
  }
  Ptr_high = HIDWORD(v31[2].Ptr);
  if ( Ptr_high )
    a2[1] = Ptr_high;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
  return 0LL;
}
