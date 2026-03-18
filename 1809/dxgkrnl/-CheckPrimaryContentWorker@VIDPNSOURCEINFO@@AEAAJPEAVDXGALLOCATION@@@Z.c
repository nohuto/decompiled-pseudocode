/*
 * XREFs of ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C
 * Callers:
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C025EE38 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGUSERCRIT@@QEAAXXZ @ 0x1C001322C (-Release@DXGUSERCRIT@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C01FDAA0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FDC5C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223420 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C025EFE0 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContentWorker(
        VIDPNSOURCEINFO *this,
        struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGCONTEXT *v9; // rcx
  struct DXGCONTEXT *i; // rax
  struct DXGCONTEXT *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  char *v17; // rcx
  __int64 v18; // r15
  const GUID *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edx
  UINT Height; // eax
  int v25; // ecx
  int v26; // edx
  signed int Width; // r11d
  unsigned int v28; // r15d
  signed int v29; // r12d
  unsigned int v30; // ecx
  unsigned int v31; // r13d
  unsigned int v32; // eax
  LONG v33; // r9d
  LONG v34; // r10d
  unsigned int v35; // r8d
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // ecx
  int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // r8d
  __int64 v44; // rax
  int v45; // ecx
  unsigned int v46; // ecx
  unsigned int *v47; // rbx
  struct tagRECT *v48; // [rsp+20h] [rbp-E0h]
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  unsigned int v50[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h]
  struct DXGCONTEXT *v55; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v56; // [rsp+78h] [rbp-88h] BYREF
  char v57[8]; // [rsp+88h] [rbp-78h] BYREF
  struct DXGPROCESS *Current; // [rsp+90h] [rbp-70h]
  char v59; // [rsp+98h] [rbp-68h]
  struct _DXGKARG_DESCRIBEALLOCATION v60; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGALLOCATION *v61; // [rsp+D0h] [rbp-30h]
  char v62[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-20h]
  char v64; // [rsp+E8h] [rbp-18h]
  PERESOURCE *v65; // [rsp+F0h] [rbp-10h] BYREF
  char v66[32]; // [rsp+F8h] [rbp-8h] BYREF
  char v67[56]; // [rsp+118h] [rbp+18h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v68; // [rsp+150h] [rbp+50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v70[32]; // [rsp+190h] [rbp+90h] BYREF

  v4 = *((_QWORD *)a2 + 1);
  v61 = a2;
  if ( !*(_DWORD *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 5555LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (struct DXGCONTEXT *)(v4 + 360);
  for ( i = *(struct DXGCONTEXT **)(v4 + 360); ; i = *(struct DXGCONTEXT **)i )
  {
    v11 = 0LL;
    if ( i != v9 )
      v11 = i;
    if ( !v11 )
      break;
    if ( *((_BYTE *)v11 + 434) )
      goto LABEL_11;
  }
  v11 = 0LL;
LABEL_11:
  v55 = v11;
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = v4;
    WdLogEvent5_WdError(v12);
    return 3221225860LL;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v65, v4, 0, a4, 0);
  DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v11 + 440));
  Current = DXGPROCESS::GetCurrent();
  v59 = 0;
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v57, 1u);
  v14 = *(_QWORD *)(v4 + 16);
  v64 = 0;
  v63 = *(_QWORD *)(v14 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  v15 = 2LL;
  LODWORD(v16) = COREDEVICEACCESS::AcquireExclusive((__int64)&v65, 2LL);
  if ( (int)v16 < 0 )
  {
    DXGUSERCRIT::Release((DXGUSERCRIT *)v57);
    *((_QWORD *)v11 + 56) = 0LL;
    v17 = (char *)v11 + 440;
    goto LABEL_72;
  }
  v18 = 0LL;
  *(_QWORD *)v50 = 0LL;
  memset(&v60, 0, sizeof(v60));
  v60.hAllocation = *(HANDLE *)(*((_QWORD *)a2 + 6) + 16LL);
  v20 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v11 + 2) + 16LL), &v60, v19);
  v16 = v20;
  if ( v20 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v22 + 24) = v16;
    WdLogEvent5_WdError(v22);
LABEL_17:
    *((_DWORD *)this + 11) = 1;
    goto LABEL_65;
  }
  v23 = *((_DWORD *)this + 6);
  if ( (v23 & 0x20) != 0 )
  {
    v49 = 1;
  }
  else
  {
    Height = v60.Height;
    if ( v60.Width > v60.Height )
      Height = v60.Width;
    v49 = 2 * Height;
  }
  v25 = *((_DWORD *)this + 6);
  if ( v60.Format != D3DDDIFMT_A8R8G8B8
    && v60.Format != D3DDDIFMT_X8R8G8B8
    && v60.Format != D3DDDIFMT_A8B8G8R8
    && v60.Format != D3DDDIFMT_X8B8G8R8 )
  {
    v25 = v23 | 0x40;
    *((_DWORD *)this + 11) = 1;
    *((_DWORD *)this + 6) = v23 | 0x40;
  }
  v26 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v26 & 0xC000) != 0 )
  {
    *((_DWORD *)this + 6) = v25 | 0x80;
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 11) )
    goto LABEL_65;
  if ( (v25 & 0x1000) == 0 && (v26 & 0x2000) != 0 )
    *((_DWORD *)this + 6) = v25 | 0x2000;
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v4 + 40) + 56LL), &ApcState);
  v54 = 1;
  v68.Width = 512;
  *(_QWORD *)&v68.Height = 512LL;
  do
  {
    LODWORD(v16) = DXGDEVICE::CreateStagingSurface2((DXGDEVICE *)v4, &v68, &v65, &v50[v18], 0LL);
    if ( (int)v16 < 0 )
      break;
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < 2 );
  Width = v60.Width;
  v28 = 0;
  v29 = v60.Height;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  v30 = (unsigned int)(Width + 511) >> 9;
  v31 = v30 * ((unsigned int)(v29 + 511) >> 9);
  v53 = v30;
  v32 = v31 + 1;
  if ( v31 == -1 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( v28 < v31 )
    {
      v33 = (v28 % v30) << 9;
      v34 = (v28 / v30) << 9;
      v56.left = v33;
      v56.top = v34;
      if ( v33 + 512 < Width )
        Width = v33 + 512;
      v56.right = Width;
      if ( v34 + 512 < v29 )
        v29 = v34 + 512;
      v35 = v50[v28 & 1];
      v36 = 16LL * (v28 & 1);
      v56.bottom = v29;
      *(_DWORD *)&v70[v36 + 4] = 0;
      *(_DWORD *)&v70[v36] = 0;
      *(_DWORD *)&v70[v36 + 8] = Width - v33;
      *(_DWORD *)&v70[v36 + 12] = v29 - v34;
      v37 = DXGCONTEXT::Blt(
              v11,
              *((_DWORD *)v61 + 4),
              v35,
              0,
              &v55,
              &v56,
              1u,
              (struct tagRECT *)&v70[v36],
              (struct COREDEVICEACCESS *)&v65);
      v11 = v55;
      LODWORD(v16) = v37;
      if ( v37 < 0 )
        goto LABEL_56;
      v29 = v60.Height;
      v32 = v31 + 1;
      Width = v60.Width;
    }
    if ( !v28 )
      goto LABEL_51;
    v48 = (struct tagRECT *)&v70[16 * (((_BYTE)v28 - 1) & 1)];
    v38 = VIDPNSOURCEINFO::CheckPrimaryContentTile(
            (VIDPNSOURCEINFO *)v48,
            (PERESOURCE *)v4,
            v50[((_BYTE)v28 - 1) & 1],
            v68.Pitch,
            v48,
            (struct COREDEVICEACCESS *)&v65,
            &v52,
            &v51);
    v16 = v38;
    if ( v38 < 0 )
      break;
    v40 = v51;
    v15 = 2LL;
    if ( v51 == v52 )
    {
      *((_DWORD *)this + 6) &= 0xFFFFFFE7;
      goto LABEL_57;
    }
    v41 = *((_DWORD *)this + 13);
    *((_DWORD *)this + 12) += v52;
    v42 = v40 + v41;
    *((_DWORD *)this + 13) = v42;
    if ( v28 >= 2 )
    {
      v43 = v49;
      if ( v42 >= v49 )
      {
        *((_DWORD *)this + 6) &= 0xFFFFFFE7;
        goto LABEL_58;
      }
    }
    v29 = v60.Height;
    v32 = v31 + 1;
    Width = v60.Width;
LABEL_51:
    if ( ++v28 >= v32 )
      goto LABEL_56;
    v30 = v53;
  }
  v44 = WdLogNewEntry5_WdError(v39);
  *(_QWORD *)(v44 + 24) = v16;
  WdLogEvent5_WdError(v44);
LABEL_56:
  v15 = 2LL;
LABEL_57:
  v43 = v49;
LABEL_58:
  v45 = *((_DWORD *)this + 6);
  if ( (int)v16 < 0 )
  {
    v46 = v45 & 0xFFFFFFE7 | 0x10;
    goto LABEL_63;
  }
  if ( (v45 & 0x18) != 0 && *((_DWORD *)this + 13) < v43 )
  {
    v46 = v45 & 0xFFFFFFE7 | 8;
LABEL_63:
    *((_DWORD *)this + 6) = v46;
  }
  LODWORD(v18) = v54;
LABEL_65:
  v47 = v50;
  do
  {
    if ( *v47 )
      DXGDEVICE::DestroyStagingSurface((DXGDEVICE *)v4, *v47, 0, &v65);
    ++v47;
    --v15;
  }
  while ( v15 );
  if ( (_DWORD)v18 )
    KeUnstackDetachProcess(&ApcState);
  DXGUSERCRIT::Release((DXGUSERCRIT *)v57);
  v17 = (char *)v11 + 440;
  *((_QWORD *)v11 + 56) = 0LL;
LABEL_72:
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( v64 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  if ( v59 )
    DXGUSERCRIT::Release((DXGUSERCRIT *)v57);
  COREACCESS::~COREACCESS((COREACCESS *)v67);
  COREACCESS::~COREACCESS((COREACCESS *)v66);
  return (unsigned int)v16;
}
