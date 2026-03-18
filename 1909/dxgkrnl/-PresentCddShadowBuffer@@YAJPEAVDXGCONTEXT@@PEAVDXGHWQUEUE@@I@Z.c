/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0172810 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001610 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0001DE4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003BD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A950 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001AAB8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C001FE58 (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C52F0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00CAFAC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1460 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00ED9A4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0134AC0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013DBD8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C013FCB0 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C014172C (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01F3410 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C027D850 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int CddShadowPitch; // eax
  DXGADAPTER **v16; // rcx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rbx
  unsigned int Width; // r14d
  unsigned int Height; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  int *v27; // rbx
  int v28; // eax
  int v29; // r9d
  int v30; // r8d
  int v31; // edx
  int v32; // eax
  __int64 v33; // rdx
  unsigned int *v34; // rcx
  __int64 v35; // r8
  int v36; // r14d
  int v37; // r14d
  __int64 v39; // rax
  _QWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  unsigned int left; // r8d
  unsigned int right; // edx
  signed int v48; // r9d
  int v49; // ecx
  signed int top; // r10d
  unsigned int bottom; // ecx
  unsigned int v52; // eax
  unsigned int v53; // r11d
  unsigned int v54; // r13d
  unsigned __int8 *v55; // rsi
  int v56; // edi
  unsigned int v57; // r14d
  unsigned int v58; // r13d
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // r13
  _QWORD *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  struct DXGCONTEXT *v68; // rbx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdi
  _QWORD *v74; // rax
  unsigned int v75; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v76; // [rsp+54h] [rbp-ACh] BYREF
  int v77; // [rsp+58h] [rbp-A8h]
  unsigned int v78; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGCONTEXT *v79; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+70h] [rbp-90h]
  struct tagRECT v82; // [rsp+78h] [rbp-88h] BYREF
  struct DXGHWQUEUE *v83; // [rsp+88h] [rbp-78h]
  char v84[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v85; // [rsp+98h] [rbp-68h]
  char v86; // [rsp+A0h] [rbp-60h]
  struct _DXGKARG_PRESENT_DISPLAYONLY v87; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_LOCK v88; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v89[16]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v90[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v91[2112]; // [rsp+170h] [rbp+70h] BYREF
  tagRECT v92; // [rsp+9B0h] [rbp+8B0h] BYREF
  struct tagRECT v93; // [rsp+9C0h] [rbp+8C0h] BYREF
  char v94[8]; // [rsp+9D0h] [rbp+8D0h] BYREF
  char v95[64]; // [rsp+9D8h] [rbp+8D8h] BYREF
  char v96[88]; // [rsp+A18h] [rbp+918h] BYREF

  v3 = a3;
  v78 = a3;
  v76 = 0;
  v75 = 0;
  v83 = a2;
  v79 = a1;
  LODWORD(v80) = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 280);
  if ( (_DWORD)v80 )
  {
    v5 = *((_QWORD *)a1 + 2);
    v6 = *(_QWORD *)(v5 + 1728);
    *(_QWORD *)&v82.left = v6;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v89,
      (struct DXGDEVICE *)v5);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v90,
      &v79,
      1u);
    if ( !v90[0] )
    {
      v39 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v39 + 24) = 4702LL;
      WdLogEvent5_WdError(v39);
      LODWORD(v14) = -1073741801;
LABEL_26:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v90);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v89);
      return (unsigned int)v14;
    }
    v10 = *(_QWORD *)(v5 + 16);
    v86 = 0;
    v85 = *(_QWORD *)(v10 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, v5, 1, v11, 0);
    v12 = COREDEVICEACCESS::AcquireShared((__int64)v94, 0xFFFFFFFF, 0LL);
    v14 = v12;
    if ( v12 < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v13);
      v40[3] = v14;
      v40[4] = v5;
    }
    else
    {
      ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v6 + 2552), (unsigned int)v3, &v76, &v75);
      if ( v76 && v75 )
      {
LABEL_6:
        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v6 + 2552), v3);
        v16 = *(DXGADAPTER ***)(v6 + 2552);
        v77 = CddShadowPitch;
        CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(v16, v3);
        Width = CddDisplayMode->Width;
        Height = CddDisplayMode->Height;
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *(_QWORD *)(v6 + 2552),
                                             (unsigned int)v3,
                                             1LL);
        *(_QWORD *)&v93.left = 0LL;
        *(_QWORD *)&v93.right = 0LL;
        memset(&v88, 0, sizeof(v88));
        v88.hAllocation = v75;
        v88.hDevice = *(_DWORD *)(v5 + 332);
        v81 = DXGDEVICE::Lock((PERESOURCE *)v5, &v88, (struct COREDEVICEACCESS *)v94);
        if ( v81 < 0 )
        {
          v43 = WdLogNewEntry5_WdError(v22, v21, v23);
          *(_QWORD *)(v43 + 24) = 4785LL;
          WdLogEvent5_WdError(v43);
          LODWORD(v14) = v81;
        }
        else
        {
          if ( v88.pData )
          {
            if ( (_DWORD)v80 != 1 )
              goto LABEL_22;
            if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) == 0 )
            {
              Width = CddDisplayMode->Height;
              v45 = 2;
              Height = CddDisplayMode->Width;
              if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
                v45 = 4;
              CurrentOrientation = v45;
            }
            v80 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal(4LL, v21) + 141);
            if ( !v80 )
              goto LABEL_22;
            *(_QWORD *)&v92.left = 0LL;
            *(_QWORD *)&v92.right = 0LL;
            Global = DXGGLOBAL::GetGlobal(v25, v24);
            v27 = (int *)((char *)Global + 1136);
            if ( !GetShadowBufferDirtyRect(&v92, *((unsigned int *)Global + 284), *((_DWORD *)Global + 285)) )
              goto LABEL_22;
            v28 = v27[3];
            if ( v28 == 20 )
            {
              if ( *v27 > Width || v27[1] > Height )
                goto LABEL_22;
              left = v92.left;
              v93 = v92;
              right = v92.right;
              if ( *v27 == Width )
              {
                v48 = v93.left;
              }
              else
              {
                v48 = v92.left + ((Width - *v27) >> 1);
                v93.left = v48;
                right = ((Width - *v27) >> 1) + v92.right;
                v93.right = right;
              }
              v49 = v27[1];
              top = v93.top;
              if ( v49 == Height )
              {
                bottom = v93.bottom;
              }
              else
              {
                top = ((Height - v49) >> 1) + v93.top;
                v93.top = top;
                bottom = ((Height - v27[1]) >> 1) + v93.bottom;
                v93.bottom = bottom;
              }
              if ( v48 >= 0
                && v48 <= (int)right
                && top >= 0
                && top <= (int)bottom
                && right <= Width
                && bottom <= Height
                && v92.left >= 0 )
              {
                v52 = v92.right;
                if ( v92.left <= v92.right )
                {
                  v53 = v92.top;
                  if ( v92.top >= 0 )
                  {
                    v54 = v92.bottom;
                    if ( v92.top <= v92.bottom && v92.right <= (unsigned int)*v27 && v92.bottom <= (unsigned int)v27[1] )
                    {
                      if ( v92.top < (unsigned int)v92.bottom )
                      {
                        v55 = v80;
                        v56 = v77;
                        do
                        {
                          v57 = left;
                          if ( left < v52 )
                          {
                            v58 = v92.right;
                            do
                            {
                              v59 = 3 * v57++;
                              v60 = v59 + v27[2] * v53;
                              v61 = (unsigned int)(4 * v48++);
                              *(_DWORD *)((char *)v88.pData + (unsigned int)(v56 * top) + v61) = v55[v60] | ((v55[(unsigned int)(v60 + 1)] | (v55[(unsigned int)(v60 + 2)] << 8)) << 8);
                            }
                            while ( v57 < v58 );
                            v48 = v93.left;
                            v54 = v92.bottom;
                            v52 = v92.right;
                            left = v92.left;
                          }
                          ++top;
                          ++v53;
                        }
                        while ( v53 < v54 );
                        LODWORD(v3) = v78;
                        v6 = *(_QWORD *)&v82.left;
                      }
                      goto LABEL_16;
                    }
                  }
                }
              }
              if ( byte_1C00A1E57 )
              {
                DxgCreateLiveDumpWithWdLogs(
                  0x193u,
                  0x809uLL,
                  (unsigned int)(*v27 << 16) | (unsigned __int64)(unsigned __int16)v27[1],
                  (Width << 16) | (unsigned __int64)(unsigned __int16)Height,
                  0LL);
                byte_1C00A1E57 = 0;
              }
              v32 = -1073741823;
            }
            else
            {
              if ( v28 != 22 )
                goto LABEL_22;
              v82.left = 0;
              v82.top = 0;
              v29 = v27[2];
              v30 = v27[1];
              v31 = *v27;
              v82.right = Width;
              v82.bottom = Height;
              v32 = DxgkpBlitA8R8R8G8(
                      v80,
                      v31,
                      v30,
                      v29,
                      CurrentOrientation,
                      (unsigned __int8 *)v88.pData,
                      v77,
                      &v82,
                      &v92,
                      &v93);
            }
            if ( v32 < 0 )
              goto LABEL_22;
LABEL_16:
            if ( *(_QWORD *)(v5 + 1728) == *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) )
            {
              memset(v91, 0, 0x5E0uLL);
              if ( v83 )
              {
                v78 = *((_DWORD *)v83 + 6);
                *(_QWORD *)v91 = &v78;
              }
              *(_DWORD *)&v91[96] |= 1u;
              *(struct tagRECT *)&v91[40] = v93;
              *(_DWORD *)&v91[72] = 1;
              *(_DWORD *)&v91[8] = *((_DWORD *)v79 + 6);
              *(_QWORD *)&v91[80] = &v92;
              *(_DWORD *)&v91[28] = v75;
              *(_DWORD *)&v91[32] = v76;
              *(struct tagRECT *)&v91[56] = v93;
              v92 = v93;
              v36 = DXGCONTEXT::PresentFromCdd(
                      v79,
                      (struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *)v91,
                      v3,
                      (struct COREDEVICEACCESS *)v94,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)v84,
                      &v79);
              if ( v36 < 0 )
              {
LABEL_79:
                v67 = WdLogNewEntry5_WdError(v34, v33, v35);
                *(_QWORD *)(v67 + 24) = v36;
                WdLogEvent5_WdError(v67);
LABEL_22:
                v92.left = *(_DWORD *)(v5 + 332);
                v92.top = 1;
                *(_QWORD *)&v92.right = &v75;
                v37 = DXGDEVICE::Unlock((DXGDEVICE *)v5, (const struct _D3DKMT_UNLOCK *)&v92, 0);
                if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v6) )
                {
                  if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v6 + 2552), v3) )
                  {
                    if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v6 + 2552), v3) )
                    {
                      if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v6 + 2552), v3) )
                      {
                        v68 = v79;
                        v69 = ADAPTER_DISPLAY::PresentCddPrimary(
                                *(ADAPTER_DISPLAY **)(v6 + 2552),
                                v79,
                                v3,
                                (struct COREDEVICEACCESS *)v94);
                        v73 = v69;
                        if ( v69 < 0 )
                        {
                          v74 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v72);
                          v74[3] = v68;
                          v74[4] = v73;
                          v74[5] = 5063LL;
                          WdLogEvent5_WdError(v74);
                        }
                      }
                    }
                  }
                }
                LODWORD(v14) = v37;
                goto LABEL_24;
              }
              v34 = *(unsigned int **)(v6 + 2456);
              v33 = *v34;
              if ( (v33 & 0x10) != 0 )
              {
                DXGDEVICE::FlushScheduler(*((_QWORD **)v79 + 2), 1u);
                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                               *(DXGADAPTER ***)(v6 + 2552),
                                               v3);
                if ( DisplayedPrimaryAllocation )
                {
                  memset(v91, 0, sizeof(v91));
                  v63 = *(_QWORD **)(v6 + 2560);
                  v64 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
                  *(_DWORD *)v91 = v3;
                  *(_QWORD *)&v91[16] = v64;
                  (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *, _QWORD))(*(_QWORD *)(v63[68] + 8LL) + 216LL))(
                    v63[69],
                    *((_QWORD *)DisplayedPrimaryAllocation + 1),
                    &v91[4],
                    &v91[8],
                    0LL);
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v63[65] + 8LL) + 816LL))(
                    *(_QWORD *)(*(_QWORD *)(v5 + 16) + 528LL),
                    v91);
                }
              }
            }
            else
            {
              v65 = *(_QWORD *)(v6 + 2552);
              *(&v87.VidPnSourceId + 1) = 0;
              *(&v87.NumDirtyRects + 1) = 0;
              v87.pfnPresentDisplayOnlyProgress = 0LL;
              ADAPTER_DISPLAY::GetCurrentOrientation(v65, (unsigned int)v3, 1LL);
              v87.Flags.Value = 0;
              v87.NumMoves = 0;
              v87.pMoves = 0LL;
              v87.pSource = v88.pData;
              v87.Pitch = v77;
              v87.pDirtyRect = &v93;
              v66 = *(_QWORD *)(v6 + 2552);
              v87.VidPnSourceId = v3;
              v87.BytesPerPixel = 4;
              v87.NumDirtyRects = 1;
              v34 = *(unsigned int **)(v66 + 368);
              if ( v34 && (unsigned int)v3 < *v34 && (v33 = *((_QWORD *)v34 + 1)) != 0 )
                v36 = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v33 + 2760LL * (unsigned int)v3), &v87);
              else
                v36 = -1073741811;
            }
            if ( v36 >= 0 )
              goto LABEL_22;
            goto LABEL_79;
          }
          v44 = WdLogNewEntry5_WdError(v22, v21, v23);
          *(_QWORD *)(v44 + 24) = 4791LL;
          WdLogEvent5_WdError(v44);
          LODWORD(v14) = -1073741823;
        }
LABEL_24:
        COREACCESS::~COREACCESS((COREACCESS *)v96);
        COREACCESS::~COREACCESS((COREACCESS *)v95);
        if ( v86 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
        goto LABEL_26;
      }
      v41 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(DXGADAPTER ***)(v6 + 2552),
              (struct DXGDEVICE *)v5,
              v3,
              &v76,
              &v75,
              (struct COREDEVICEACCESS *)v94);
      v14 = v41;
      if ( v41 == -1073741637 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v42);
        v14 = -1071775482LL;
      }
      else
      {
        if ( v41 >= 0 )
          goto LABEL_6;
        v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v42);
      }
      v40[4] = v3;
      v40[3] = v6;
      v40[5] = v14;
    }
    WdLogEvent5_WdEvent(v40);
    goto LABEL_24;
  }
  return 0LL;
}
