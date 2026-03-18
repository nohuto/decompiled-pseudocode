/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C027DCB4
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C027BA68 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027D6FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        BLTENTRY *this,
        struct BLTQUEUE *a2,
        struct DXGDEVICE **a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned __int8 a7)
{
  D3DKMT_HANDLE hSource; // ebx
  __int64 v11; // r15
  __int64 v12; // rax
  D3DKMT_HANDLE v13; // ebx
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DXGALLOCATION *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  void *v28; // rcx
  __int64 v29; // r8
  struct DXGDEVICE *v30; // rbx
  const struct tagRECT *v31; // r15
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  __int64 v34; // rax
  struct COREDEVICEACCESS *v35; // [rsp+50h] [rbp-D8h]
  PVOID Object; // [rsp+58h] [rbp-D0h] BYREF
  PVOID v37[4]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v38[20]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-58h] BYREF

  v37[2] = this;
  v37[1] = a3;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( (a4->Flags.Value & 4) != 0 )
    hSource = a4->hSource;
  else
    hSource = a4->hDestination;
  v11 = *((_QWORD *)a3[2] + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 184));
  v12 = (hSource >> 6) & 0xFFFFFF;
  v13 = hSource >> 30;
  if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 224) )
    goto LABEL_10;
  v14 = *(_QWORD *)(v11 + 208);
  v15 = *(_DWORD *)(v14 + 16 * v12 + 8);
  if ( v13 != ((v15 >> 5) & 3) || (v15 & 0x2000) != 0 || (v15 & 0x1F) == 0 )
    goto LABEL_10;
  v16 = v15 & 0x1F;
  if ( (_BYTE)v16 != 5 )
  {
    v17 = WdLogNewEntry5_WdError(v16, 2LL * (unsigned int)v12, v14);
    *(_QWORD *)(v17 + 24) = 267LL;
    WdLogEvent5_WdError(v17);
LABEL_10:
    v18 = 0LL;
    goto LABEL_11;
  }
  v18 = *(struct DXGALLOCATION **)(v14 + 16LL * (unsigned int)v12);
LABEL_11:
  ExReleasePushLockSharedEx(v11 + 184, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 4) = v18;
  if ( !v18 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
    v22[3] = a3;
    v23 = a4->hSource;
LABEL_13:
    v22[4] = v23;
    v22[5] = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  LOBYTE(v21) = a7;
  if ( !a7 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)v18 + 1) + 16LL);
    v25 = *(_QWORD *)(*((_QWORD *)a3[2] + 2) + 16LL);
    if ( *(_QWORD *)(v19 + 16) != v25 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v25, v19, v21);
      v22[3] = a3[2];
LABEL_19:
      v23 = *((_QWORD *)this + 4);
      goto LABEL_13;
    }
  }
  v26 = *(unsigned int *)(*((_QWORD *)v18 + 6) + 4LL);
  if ( (v26 & 4) == 0 && !a7 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v26, v19, v21);
    v22[3] = a3;
    goto LABEL_19;
  }
  *((_QWORD *)this + 65) = 0LL;
  if ( a7 )
  {
    *((_DWORD *)this + 130) = 1;
LABEL_42:
    *((_DWORD *)this + 16) = a4->Flags.0;
    *((_DWORD *)this + 14) = a4->FlipInterval;
    *((_DWORD *)this + 15) = a4->PresentCount;
    memset((char *)this + 528, 0, 0x20uLL);
    *((LARGE_INTEGER *)this + 67) = KeQueryPerformanceCounter(0LL);
    v35 = (struct COREDEVICEACCESS *)MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 66) = (_QWORD)v35 * KeQueryTimeIncrement();
    return 0LL;
  }
  if ( *((_BYTE *)a3 + 449) )
  {
    result = PRESENTDODARG::SetPresentDodArg(
               (BLTENTRY *)((char *)this + 72),
               (struct DXGCONTEXT *)a3,
               *(_DWORD *)(*((_QWORD *)this + 3) + 96LL),
               v18,
               0,
               0,
               0LL,
               a4,
               a5,
               a6);
    if ( (int)result >= 0 )
    {
      *((_DWORD *)this + 130) |= 1u;
      goto LABEL_42;
    }
LABEL_27:
    *((_QWORD *)this + 4) = 0LL;
    return result;
  }
  memset(v38, 0, sizeof(v38));
  DxgkpGetDodPrimaryInfo(a3[2], v18, (struct _D3DKMT_KMDOD_ESCAPE *)v38);
  if ( !v38[8] )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
    v22[3] = 131LL;
    goto LABEL_14;
  }
  v30 = a3[7];
  v39 = 0uLL;
  v31 = 0LL;
  if ( *(_DWORD *)v30 == -791674878 )
  {
    v28 = (void *)*((_QWORD *)v30 + 2);
    if ( v28 )
    {
      if ( *((_QWORD *)v30 + 3) )
      {
        v32 = ObReferenceObjectByHandle(v28, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        *((_QWORD *)this + 5) = Object;
        if ( v32 < 0 )
          return 3221225485LL;
        v33 = ObReferenceObjectByHandle(*((HANDLE *)v30 + 3), 2u, (POBJECT_TYPE)ExEventObjectType, 1, v37, 0LL);
        *((PVOID *)this + 6) = v37[0];
        if ( v33 < 0 )
          return 3221225485LL;
        if ( *((struct DXGDEVICE **)v30 + 4) == (struct DXGDEVICE *)((char *)v30 + 32) && *((int *)v30 + 10) < 0 )
        {
          v39 = *(_OWORD *)((char *)v30 + 44);
          v31 = (const struct tagRECT *)&v39;
          v37[3] = &v39;
        }
        result = PRESENTDODARG::SetPresentDodArg(
                   (BLTENTRY *)((char *)this + 72),
                   (struct DXGCONTEXT *)a3,
                   *(_DWORD *)(*((_QWORD *)this + 3) + 96LL),
                   *((struct DXGALLOCATION **)this + 4),
                   v38[8],
                   v38[10],
                   v31,
                   a4,
                   a5,
                   a6);
        if ( (int)result >= 0 )
          goto LABEL_42;
        goto LABEL_27;
      }
    }
  }
  v34 = WdLogNewEntry5_WdError(v28, v27, v29);
  *(_QWORD *)(v34 + 24) = 145LL;
  WdLogEvent5_WdError(v34);
  return 3221225485LL;
}
