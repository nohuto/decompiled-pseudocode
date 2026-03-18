/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02482B4
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0246E9C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C02461F4 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247D24 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
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
  D3DKMT_HANDLE hSource; // edi
  __int64 v11; // r15
  __int64 v12; // rax
  D3DKMT_HANDLE v13; // edi
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DXGALLOCATION *v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  void *v25; // rcx
  struct DXGDEVICE *v26; // rdi
  const struct tagRECT *v27; // r15
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  _QWORD *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  PVOID Object; // [rsp+58h] [rbp-D0h] BYREF
  PVOID v34[4]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v35[20]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-58h] BYREF

  v34[2] = this;
  v34[1] = a3;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( (a4->Flags.Value & 4) != 0 )
    hSource = a4->hSource;
  else
    hSource = a4->hDestination;
  v11 = *((_QWORD *)a3[2] + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 208));
  v12 = (hSource >> 6) & 0xFFFFFF;
  v13 = hSource >> 30;
  if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 248) )
    goto LABEL_10;
  v14 = *(_QWORD *)(v11 + 232);
  v15 = *(_DWORD *)(v14 + 16 * v12 + 8);
  if ( v13 != ((v15 >> 5) & 3) || (v15 & 0x2000) != 0 || (v15 & 0x1F) == 0 )
    goto LABEL_10;
  v16 = v15 & 0x1F;
  if ( (_BYTE)v16 != 5 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = 316LL;
    WdLogEvent5_WdError(v17);
LABEL_10:
    v18 = 0LL;
    goto LABEL_11;
  }
  v18 = *(struct DXGALLOCATION **)(v14 + 16LL * (unsigned int)v12);
LABEL_11:
  ExReleasePushLockSharedEx(v11 + 208, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 4) = v18;
  if ( !v18 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v20[3] = a3;
    v21 = a4->hSource;
LABEL_13:
    v20[4] = v21;
    v20[5] = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  if ( !a7 )
  {
    v23 = *(_QWORD *)(*((_QWORD *)a3[2] + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 1) + 16LL) + 16LL) != v23 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v20[3] = a3[2];
LABEL_19:
      v21 = *((_QWORD *)this + 4);
      goto LABEL_13;
    }
  }
  v24 = *(unsigned int *)(*((_QWORD *)v18 + 6) + 4LL);
  if ( (v24 & 4) == 0 && !a7 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v20[3] = a3;
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
    v30 = (_QWORD *)((char *)this + 528);
    memset((char *)this + 528, 0, 0x20uLL);
    *((LARGE_INTEGER *)this + 67) = KeQueryPerformanceCounter(0LL);
    v31 = MEMORY[0xFFFFF78000000320];
    *v30 = v31 * KeQueryTimeIncrement();
    return 0LL;
  }
  if ( *((_BYTE *)a3 + 433) )
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
  memset(v35, 0, sizeof(v35));
  DxgkpGetDodPrimaryInfo(a3[2], v18, (struct _D3DKMT_KMDOD_ESCAPE *)v35);
  if ( !v35[8] )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v20[3] = 118LL;
    goto LABEL_14;
  }
  v26 = a3[7];
  v27 = 0LL;
  if ( *(_DWORD *)v26 == -791674878 )
  {
    v25 = (void *)*((_QWORD *)v26 + 2);
    if ( v25 )
    {
      if ( *((_QWORD *)v26 + 3) )
      {
        v28 = ObReferenceObjectByHandle(v25, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        *((_QWORD *)this + 5) = Object;
        if ( v28 < 0 )
          return 3221225485LL;
        v29 = ObReferenceObjectByHandle(*((HANDLE *)v26 + 3), 2u, (POBJECT_TYPE)ExEventObjectType, 1, v34, 0LL);
        *((PVOID *)this + 6) = v34[0];
        if ( v29 < 0 )
          return 3221225485LL;
        if ( *((struct DXGDEVICE **)v26 + 4) == (struct DXGDEVICE *)((char *)v26 + 32) && *((int *)v26 + 10) < 0 )
        {
          v36 = *(_OWORD *)((char *)v26 + 44);
          v27 = (const struct tagRECT *)&v36;
          v34[3] = &v36;
        }
        result = PRESENTDODARG::SetPresentDodArg(
                   (BLTENTRY *)((char *)this + 72),
                   (struct DXGCONTEXT *)a3,
                   *(_DWORD *)(*((_QWORD *)this + 3) + 96LL),
                   *((struct DXGALLOCATION **)this + 4),
                   v35[8],
                   v35[10],
                   v27,
                   a4,
                   a5,
                   a6);
        if ( (int)result >= 0 )
          goto LABEL_42;
        goto LABEL_27;
      }
    }
  }
  v32 = WdLogNewEntry5_WdError(v25);
  *(_QWORD *)(v32 + 24) = 132LL;
  WdLogEvent5_WdError(v32);
  return 3221225485LL;
}
