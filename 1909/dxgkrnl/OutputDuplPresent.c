/*
 * XREFs of OutputDuplPresent @ 0x1C0276950
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C025C590 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00041EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A950 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001AAB8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0274734 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0274834 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct _KTHREAD **a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rbx
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  DXGCONTEXTBYHANDLE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGDEVICE **v19; // rbx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  ULONG BroadcastContextCount; // r14d
  __int64 v27; // rax
  unsigned int v28; // r14d
  _BYTE *PoolWithTag; // rax
  __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // rax
  struct _KTHREAD *v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGADAPTER *v47; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v49[2]; // [rsp+40h] [rbp-69h] BYREF
  PVOID P; // [rsp+50h] [rbp-59h]
  _BYTE v51[32]; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-31h]
  _BYTE v53[16]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v54[24]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v55[6]; // [rsp+A8h] [rbp-1h] BYREF
  char v56; // [rsp+D8h] [rbp+2Fh]
  struct DXGCONTEXT *v57; // [rsp+110h] [rbp+67h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v47 = 0LL;
  if ( (*(_BYTE *)&Value & 8) == 0 )
    goto LABEL_8;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49, a1->hIndirectContext, a2, &v57, 0);
  if ( v57 )
  {
    v12 = (struct DXGDEVICE *)*((_QWORD *)v57 + 2);
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v47);
    v14 = OutputDuplPreIndirectPresent(v12, a1->VidPnSourceId, v13, &v48);
    if ( v14 < 0 )
    {
      v8 = v14;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49);
LABEL_8:
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v53, a1->hContext, a2, &v57, 0);
    v19 = (struct DXGDEVICE **)v57;
    if ( !v57 )
    {
      v8 = -1073741811;
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
      v20[3] = -1073741811LL;
      v20[4] = PsGetCurrentProcess(v22, v21);
      v20[5] = a1->hContext;
      WdLogEvent5_WdWarning(v20);
LABEL_46:
      v15 = (DXGCONTEXTBYHANDLE *)v53;
      goto LABEL_47;
    }
    if ( !v47 )
      DXGADAPTER_REFERENCE::Assign(&v47, *(struct DXGADAPTER **)(*((_QWORD *)v57 + 2) + 1728LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v19[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      v8 = -1073741811;
      *(_QWORD *)(v27 + 24) = v19;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
LABEL_44:
      if ( v49[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
      goto LABEL_46;
    }
    v28 = BroadcastContextCount + 1;
    P = 0LL;
    v52 = 0;
    if ( v28 <= 4 )
    {
      PoolWithTag = v51;
    }
    else
    {
      v23 = 0xFFFFFFFFFFFFFFFFuLL % v28;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v28 < 8 )
        goto LABEL_39;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v28, 0x4B677844u);
    }
    P = PoolWithTag;
    v52 = v28;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v28);
      if ( P )
      {
        *(_QWORD *)P = v19;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54, a2);
        v31 = 0;
        if ( !a1->BroadcastContextCount )
        {
LABEL_31:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v55,
            P,
            v52);
          if ( v56 )
          {
            if ( v55[0] )
            {
              v44 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              *(_QWORD *)(v44 + 24) = 2788LL;
              WdLogEvent5_WdWarning(v44);
              v8 = -1073741811;
            }
            else
            {
              v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              *(_QWORD *)(v41 + 24) = 2783LL;
              WdLogEvent5_WdWarning(v41);
              v8 = -1073741801;
            }
          }
          else
          {
            v8 = OutputDuplPresentInternal(v47, (struct DXGCONTEXT *)v19, a1, (struct DXGCONTEXT **)P);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v55);
LABEL_40:
          if ( P != v51 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v52 = 0;
          goto LABEL_44;
        }
        while ( 1 )
        {
          v32 = (a1->BroadcastContext[v31] >> 6) & 0xFFFFFF;
          if ( (unsigned int)v32 < *((_DWORD *)a2 + 56) )
          {
            v33 = a2[26];
            v30 = *((unsigned int *)v33 + 4 * v32 + 2);
            if ( ((a1->BroadcastContext[v31] >> 25) & 0x60) == (*((_BYTE *)v33 + 16 * v32 + 8) & 0x60)
              && (v30 & 0x2000) == 0
              && (v30 & 0x1F) != 0 )
            {
              v30 &= 0x1Fu;
              if ( (_BYTE)v30 == 7 )
              {
                v35 = *((_QWORD *)v33 + 2 * (unsigned int)v32);
                goto LABEL_28;
              }
              v34 = WdLogNewEntry5_WdError(v30, (a1->BroadcastContext[v31] >> 25) & 0x60, 2LL * (unsigned int)v32);
              *(_QWORD *)(v34 + 24) = 267LL;
              WdLogEvent5_WdError(v34);
            }
          }
          v35 = 0LL;
LABEL_28:
          v36 = v31 + 1;
          *((_QWORD *)P + v36) = v35;
          v37 = *((_QWORD *)P + v36);
          if ( !v37 || *(struct DXGDEVICE **)(v37 + 16) != v19[2] )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v30, v37, v36);
            v42[3] = v19;
            v42[4] = a1->BroadcastContext[v31];
            v43 = v31;
            v8 = -1073741811;
            v42[5] = v43;
            v42[6] = -1073741811LL;
            WdLogEvent5_WdError(v42);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
            goto LABEL_40;
          }
          ++v31;
          if ( (unsigned int)v36 >= a1->BroadcastContextCount )
            goto LABEL_31;
        }
      }
    }
LABEL_39:
    v45 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v45 + 24) = 2734LL;
    WdLogEvent5_WdWarning(v45);
    v8 = -1073741801;
    goto LABEL_40;
  }
  v8 = -1073741811;
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
  v9[3] = -1073741811LL;
  v9[4] = PsGetCurrentProcess(v11, v10);
  v9[5] = a1->hIndirectContext;
  WdLogEvent5_WdWarning(v9);
LABEL_6:
  v15 = (DXGCONTEXTBYHANDLE *)v49;
LABEL_47:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v15);
  DXGADAPTER_REFERENCE::Assign(&v47, 0LL);
  return v8;
}
