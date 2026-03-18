/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02951F4
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C0294E20 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C022DD44 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022DF00 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PARAMS@@@Z @ 0x1C0257B40 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PAR.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02950A8 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(
        VIDPNSOURCEINFO *this,
        struct DXGALLOCATION *a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGCONTEXT *v9; // rcx
  struct DXGCONTEXT *i; // rax
  struct DXGCONTEXT *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  char *v17; // rcx
  __int64 v18; // r15
  const GUID *v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // edx
  UINT Height; // eax
  int v27; // ecx
  int v28; // edx
  signed int Width; // r11d
  signed int v30; // r12d
  unsigned int v31; // r15d
  unsigned int v32; // ecx
  unsigned int v33; // r13d
  unsigned int v34; // eax
  LONG v35; // r9d
  LONG v36; // r10d
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // ecx
  int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // r8d
  __int64 v48; // rax
  int v49; // ecx
  unsigned int v50; // ecx
  unsigned int *v51; // rbx
  VIDPNSOURCEINFO *v52; // [rsp+20h] [rbp-E0h]
  unsigned int v53; // [rsp+50h] [rbp-B0h]
  unsigned int v54[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+6Ch] [rbp-94h]
  struct DXGCONTEXT *v59; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v60; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v61; // [rsp+88h] [rbp-78h] BYREF
  struct DXGALLOCATION *v62; // [rsp+B8h] [rbp-48h]
  char v63[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-38h]
  char v65; // [rsp+D0h] [rbp-30h]
  struct _D3DKMDT_STAGINGSURFACEDATA v66; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  PERESOURCE *v68; // [rsp+120h] [rbp+20h] BYREF
  char v69[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v70[120]; // [rsp+168h] [rbp+68h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  LOBYTE(v4) = 0;
  v62 = a2;
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 104)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, a2);
    *(_QWORD *)(v8 + 24) = 5583LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (struct DXGCONTEXT *)(v3 + 360);
  for ( i = *(struct DXGCONTEXT **)(v3 + 360); ; i = *(struct DXGCONTEXT **)i )
  {
    v11 = 0LL;
    if ( i != v9 )
      v11 = i;
    if ( !v11 )
      break;
    if ( *((_BYTE *)v11 + 450) )
      goto LABEL_11;
  }
  v11 = 0LL;
LABEL_11:
  v59 = v11;
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v9, a2, a3);
    *(_QWORD *)(v12 + 24) = v3;
    WdLogEvent5_WdError(v12);
    return 3221225860LL;
  }
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v11 + 456));
  v14 = *(_QWORD *)(v3 + 16);
  v65 = 0;
  v64 = *(_QWORD *)(v14 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v68, v3, 1, v15, 0);
  LODWORD(v16) = COREDEVICEACCESS::AcquireShared((__int64)&v68, 0xFFFFFFFF, 0LL);
  if ( (int)v16 < 0 )
  {
    *((_QWORD *)v11 + 58) = 0LL;
    v17 = (char *)v11 + 456;
    goto LABEL_72;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  *(_QWORD *)v54 = 0LL;
  v18 = 0LL;
  memset(&v61, 0, sizeof(v61));
  v61.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v20 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v11 + 2) + 16LL), &v61, v19);
  v16 = v20;
  v4 = 2LL;
  if ( v20 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = v16;
    WdLogEvent5_WdError(v24);
LABEL_17:
    *((_DWORD *)this + 12) = 1;
    goto LABEL_65;
  }
  v25 = *((_DWORD *)this + 7);
  if ( (v25 & 0x20) != 0 )
  {
    v53 = 1;
  }
  else
  {
    Height = v61.Height;
    if ( v61.Width > v61.Height )
      Height = v61.Width;
    v53 = 2 * Height;
  }
  v27 = *((_DWORD *)this + 7);
  if ( v61.Format != D3DDDIFMT_A8R8G8B8
    && v61.Format != D3DDDIFMT_X8R8G8B8
    && v61.Format != D3DDDIFMT_A8B8G8R8
    && v61.Format != D3DDDIFMT_X8B8G8R8 )
  {
    v27 = v25 | 0x40;
    *((_DWORD *)this + 12) = 1;
    *((_DWORD *)this + 7) = v25 | 0x40;
  }
  v28 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v28 & 0xC000) != 0 )
  {
    *((_DWORD *)this + 7) = v27 | 0x80;
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 12) )
    goto LABEL_65;
  if ( (v27 & 0x1000) == 0 && (v28 & 0x2000) != 0 )
    *((_DWORD *)this + 7) = v27 | 0x2000;
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v3 + 40) + 56LL), &ApcState);
  v58 = 1;
  v66.Width = 512;
  *(_QWORD *)&v66.Height = 512LL;
  do
  {
    LODWORD(v16) = DXGDEVICE::CreateStagingSurface2((DXGDEVICE *)v3, &v66, &v68, &v54[v18], 0LL);
    if ( (int)v16 < 0 )
      break;
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < 2 );
  Width = v61.Width;
  v30 = v61.Height;
  v31 = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)&v60.left = 0LL;
  v32 = (unsigned int)(Width + 511) >> 9;
  v33 = v32 * ((unsigned int)(v30 + 511) >> 9);
  *(_QWORD *)&v60.right = 0LL;
  v57 = v32;
  v34 = v33 + 1;
  if ( v33 == -1 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( v31 < v33 )
    {
      v35 = (v31 % v32) << 9;
      v36 = (v31 / v32) << 9;
      v60.left = v35;
      v60.top = v36;
      if ( v35 + 512 < Width )
        Width = v35 + 512;
      v60.right = Width;
      if ( v36 + 512 < v30 )
        v30 = v36 + 512;
      v37 = v54[v31 & 1];
      v38 = 16LL * (v31 & 1);
      v60.bottom = v30;
      *(_DWORD *)&v70[v38 + 92] = 0;
      *(_DWORD *)&v70[v38 + 96] = Width - v35;
      *(_DWORD *)&v70[v38 + 100] = v30 - v36;
      *(_DWORD *)&v70[v38 + 88] = 0;
      v39 = DXGCONTEXT::Blt(
              v11,
              *((_DWORD *)v62 + 4),
              v37,
              0,
              &v59,
              &v60,
              1u,
              (struct tagRECT *)&v70[v38 + 88],
              (struct COREDEVICEACCESS *)&v68,
              0LL);
      v11 = v59;
      LODWORD(v16) = v39;
      if ( v39 < 0 )
        goto LABEL_56;
      v30 = v61.Height;
      v34 = v33 + 1;
      Width = v61.Width;
    }
    if ( !v31 )
      goto LABEL_51;
    v52 = (VIDPNSOURCEINFO *)&v70[16 * (((_BYTE)v31 - 1) & 1) + 88];
    v40 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
            v52,
            (PERESOURCE *)v3,
            v54[((_BYTE)v31 - 1) & 1],
            v66.Pitch,
            (const struct tagRECT *)v52,
            (struct COREDEVICEACCESS *)&v68,
            &v56,
            &v55);
    v16 = v40;
    if ( v40 < 0 )
      break;
    v44 = v55;
    v4 = 2LL;
    if ( v55 == v56 )
    {
      *((_DWORD *)this + 7) &= 0xFFFFFFE7;
      goto LABEL_57;
    }
    v45 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 13) += v56;
    v46 = v44 + v45;
    *((_DWORD *)this + 14) = v46;
    if ( v31 >= 2 )
    {
      v47 = v53;
      if ( v46 >= v53 )
      {
        *((_DWORD *)this + 7) &= 0xFFFFFFE7;
        goto LABEL_58;
      }
    }
    v30 = v61.Height;
    v34 = v33 + 1;
    Width = v61.Width;
LABEL_51:
    if ( ++v31 >= v34 )
      goto LABEL_56;
    v32 = v57;
  }
  v48 = WdLogNewEntry5_WdError(v42, v41, v43);
  *(_QWORD *)(v48 + 24) = v16;
  WdLogEvent5_WdError(v48);
LABEL_56:
  v4 = 2LL;
LABEL_57:
  v47 = v53;
LABEL_58:
  v49 = *((_DWORD *)this + 7);
  if ( (int)v16 < 0 )
  {
    v50 = v49 & 0xFFFFFFE7 | 0x10;
    goto LABEL_63;
  }
  if ( (v49 & 0x18) != 0 && *((_DWORD *)this + 14) < v47 )
  {
    v50 = v49 & 0xFFFFFFE7 | 8;
LABEL_63:
    *((_DWORD *)this + 7) = v50;
  }
  LODWORD(v18) = v58;
LABEL_65:
  v51 = v54;
  do
  {
    if ( *v51 )
      DXGDEVICE::DestroyStagingSurface((DXGDEVICE *)v3, *v51, 0, &v68);
    ++v51;
    --v4;
  }
  while ( v4 );
  if ( (_DWORD)v18 )
    KeUnstackDetachProcess(&ApcState);
  v17 = (char *)v11 + 456;
  *((_QWORD *)v11 + 58) = 0LL;
LABEL_72:
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v70);
  COREACCESS::~COREACCESS((COREACCESS *)v69);
  if ( v65 != (_BYTE)v4 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
  return (unsigned int)v16;
}
