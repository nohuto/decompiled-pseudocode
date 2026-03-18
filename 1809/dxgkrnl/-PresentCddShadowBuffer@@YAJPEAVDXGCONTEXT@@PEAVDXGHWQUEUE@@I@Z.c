/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01574D0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0013870 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0013C68 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C001F6AC (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E544C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C011F6B4 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C012C940 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C012ECD8 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01C3E9C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0247850 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int CddShadowPitch; // eax
  DXGADAPTER **v15; // rcx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rbx
  unsigned int Width; // r14d
  unsigned int Height; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax
  int *v23; // rbx
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // r14d
  int v31; // r14d
  __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  unsigned int left; // r8d
  unsigned int right; // edx
  signed int v43; // r9d
  int v44; // ecx
  signed int top; // r10d
  unsigned int bottom; // ecx
  unsigned int v47; // eax
  unsigned int v48; // r11d
  unsigned int v49; // r13d
  unsigned __int8 *v50; // rsi
  int v51; // edi
  unsigned int v52; // r14d
  unsigned int v53; // r13d
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // r13
  _QWORD *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  struct DXGCONTEXT *v63; // rbx
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rdi
  _QWORD *v67; // rax
  unsigned int v68; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v69; // [rsp+54h] [rbp-ACh] BYREF
  int v70; // [rsp+58h] [rbp-A8h]
  unsigned int v71; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGCONTEXT *v72; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+70h] [rbp-90h]
  struct tagRECT v75; // [rsp+78h] [rbp-88h] BYREF
  struct DXGHWQUEUE *v76; // [rsp+88h] [rbp-78h]
  char v77[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v78; // [rsp+98h] [rbp-68h]
  char v79; // [rsp+A0h] [rbp-60h]
  struct _DXGKARG_PRESENT_DISPLAYONLY v80; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_LOCK v81; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v82[16]; // [rsp+120h] [rbp+20h] BYREF
  char v83[8]; // [rsp+130h] [rbp+30h] BYREF
  char v84[32]; // [rsp+138h] [rbp+38h] BYREF
  char v85[56]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v86[8]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v87[2112]; // [rsp+1D0h] [rbp+D0h] BYREF
  tagRECT v88; // [rsp+A10h] [rbp+910h] BYREF
  struct tagRECT v89; // [rsp+A20h] [rbp+920h] BYREF

  v3 = a3;
  v71 = a3;
  v69 = 0;
  v68 = 0;
  v76 = a2;
  v72 = a1;
  LODWORD(v73) = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 288);
  if ( (_DWORD)v73 )
  {
    v5 = *((_QWORD *)a1 + 2);
    v6 = *(_QWORD *)(v5 + 1728);
    *(_QWORD *)&v75.left = v6;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v82,
      (struct DXGDEVICE *)v5);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v86,
      &v72,
      1u);
    if ( !v86[0] )
    {
      v33 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v33 + 24) = 4686LL;
      WdLogEvent5_WdError(v33);
      LODWORD(v13) = -1073741801;
LABEL_26:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v86);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v82);
      return (unsigned int)v13;
    }
    v8 = *(_QWORD *)(v5 + 16);
    v79 = 0;
    v78 = *(_QWORD *)(v8 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v5, 1, v9, 0);
    v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83);
    v13 = v10;
    if ( v10 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
      v34[3] = v13;
      v34[4] = v5;
    }
    else
    {
      ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v6 + 2520), v3, &v69, &v68);
      if ( v69 && v68 )
      {
LABEL_6:
        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v6 + 2520), v3);
        v15 = *(DXGADAPTER ***)(v6 + 2520);
        v70 = CddShadowPitch;
        CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(v15, v3);
        Width = CddDisplayMode->Width;
        Height = CddDisplayMode->Height;
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v6 + 2520), v3, 1);
        *(_QWORD *)&v89.left = 0LL;
        *(_QWORD *)&v89.right = 0LL;
        memset(&v81, 0, sizeof(v81));
        v81.hAllocation = v68;
        v81.hDevice = *(_DWORD *)(v5 + 332);
        v74 = DXGDEVICE::Lock((PERESOURCE *)v5, &v81, (struct COREDEVICEACCESS *)v83);
        if ( v74 < 0 )
        {
          v38 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v38 + 24) = 4769LL;
          WdLogEvent5_WdError(v38);
          LODWORD(v13) = v74;
        }
        else
        {
          if ( v81.pData )
          {
            if ( (_DWORD)v73 != 1 )
              goto LABEL_22;
            if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) == 0 )
            {
              Width = CddDisplayMode->Height;
              v40 = 2;
              Height = CddDisplayMode->Width;
              if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
                v40 = 4;
              CurrentOrientation = v40;
            }
            v73 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal(4LL) + 145);
            if ( !v73 )
              goto LABEL_22;
            Global = DXGGLOBAL::GetGlobal(v21);
            v23 = (int *)((char *)Global + 1168);
            if ( !GetShadowBufferDirtyRect(&v88, *((_DWORD *)Global + 292), *((_DWORD *)Global + 293)) )
              goto LABEL_22;
            v24 = v23[3];
            if ( v24 == 20 )
            {
              if ( *v23 > Width || v23[1] > Height )
                goto LABEL_22;
              left = v88.left;
              v89 = v88;
              right = v88.right;
              if ( *v23 == Width )
              {
                v43 = v89.left;
              }
              else
              {
                v43 = v88.left + ((Width - *v23) >> 1);
                v89.left = v43;
                right = ((Width - *v23) >> 1) + v88.right;
                v89.right = right;
              }
              v44 = v23[1];
              top = v89.top;
              if ( v44 == Height )
              {
                bottom = v89.bottom;
              }
              else
              {
                top = ((Height - v44) >> 1) + v89.top;
                v89.top = top;
                bottom = ((Height - v23[1]) >> 1) + v89.bottom;
                v89.bottom = bottom;
              }
              if ( v43 >= 0
                && v43 <= (int)right
                && top >= 0
                && top <= (int)bottom
                && right <= Width
                && bottom <= Height
                && v88.left >= 0 )
              {
                v47 = v88.right;
                if ( v88.left <= v88.right )
                {
                  v48 = v88.top;
                  if ( v88.top >= 0 )
                  {
                    v49 = v88.bottom;
                    if ( v88.top <= v88.bottom && v88.right <= (unsigned int)*v23 && v88.bottom <= (unsigned int)v23[1] )
                    {
                      if ( v88.top < (unsigned int)v88.bottom )
                      {
                        v50 = v73;
                        v51 = v70;
                        do
                        {
                          v52 = left;
                          if ( left < v47 )
                          {
                            v53 = v88.right;
                            do
                            {
                              v54 = 3 * v52++;
                              v55 = v54 + v23[2] * v48;
                              v56 = (unsigned int)(4 * v43++);
                              *(_DWORD *)((char *)v81.pData + (unsigned int)(v51 * top) + v56) = v50[v55] | ((v50[(unsigned int)(v55 + 1)] | (v50[(unsigned int)(v55 + 2)] << 8)) << 8);
                            }
                            while ( v52 < v53 );
                            v43 = v89.left;
                            v49 = v88.bottom;
                            v47 = v88.right;
                            left = v88.left;
                          }
                          ++top;
                          ++v48;
                        }
                        while ( v48 < v49 );
                        LODWORD(v3) = v71;
                        v6 = *(_QWORD *)&v75.left;
                      }
                      goto LABEL_16;
                    }
                  }
                }
              }
              if ( byte_1C008DE50 )
              {
                DxgCreateLiveDumpWithWdLogs(
                  0x193u,
                  0x809uLL,
                  (unsigned int)(*v23 << 16) | (unsigned __int64)(unsigned __int16)v23[1],
                  (Width << 16) | (unsigned __int64)(unsigned __int16)Height,
                  0LL);
                byte_1C008DE50 = 0;
              }
              v28 = -1073741823;
            }
            else
            {
              if ( v24 != 22 )
                goto LABEL_22;
              v75.left = 0;
              v75.top = 0;
              v25 = v23[2];
              v26 = v23[1];
              v27 = *v23;
              v75.right = Width;
              v75.bottom = Height;
              v28 = DxgkpBlitA8R8R8G8(
                      v73,
                      v27,
                      v26,
                      v25,
                      CurrentOrientation,
                      (unsigned __int8 *)v81.pData,
                      v70,
                      &v75,
                      &v88,
                      &v89);
            }
            if ( v28 < 0 )
              goto LABEL_22;
LABEL_16:
            if ( *(_QWORD *)(v5 + 1728) == *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) )
            {
              memset(v87, 0, 0x5E0uLL);
              if ( v76 )
              {
                v71 = *((_DWORD *)v76 + 6);
                *(_QWORD *)v87 = &v71;
              }
              *(_DWORD *)&v87[96] |= 1u;
              *(struct tagRECT *)&v87[40] = v89;
              *(_DWORD *)&v87[72] = 1;
              *(_DWORD *)&v87[8] = *((_DWORD *)v72 + 6);
              *(_QWORD *)&v87[80] = &v88;
              *(_DWORD *)&v87[28] = v68;
              *(_DWORD *)&v87[32] = v69;
              *(struct tagRECT *)&v87[56] = v89;
              v88 = v89;
              v30 = DXGCONTEXT::PresentFromCdd(
                      v72,
                      (struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *)v87,
                      v3,
                      (struct COREDEVICEACCESS *)v83,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)v77,
                      &v72);
              if ( v30 < 0 )
              {
LABEL_79:
                v62 = WdLogNewEntry5_WdError(v29);
                *(_QWORD *)(v62 + 24) = v30;
                WdLogEvent5_WdError(v62);
LABEL_22:
                *(_QWORD *)&v88.left = 0LL;
                v88.left = *(_DWORD *)(v5 + 332);
                *(_QWORD *)&v88.right = &v68;
                v88.top = 1;
                v31 = DXGDEVICE::Unlock((DXGDEVICE *)v5, (const struct _D3DKMT_UNLOCK *)&v88, 0LL);
                if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v6) )
                {
                  if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v6 + 2520), v3) )
                  {
                    if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v6 + 2520), v3) )
                    {
                      if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v6 + 2520), v3) )
                      {
                        v63 = v72;
                        v64 = ADAPTER_DISPLAY::PresentCddPrimary(
                                *(ADAPTER_DISPLAY **)(v6 + 2520),
                                v72,
                                v3,
                                (struct COREDEVICEACCESS *)v83);
                        v66 = v64;
                        if ( v64 < 0 )
                        {
                          v67 = (_QWORD *)WdLogNewEntry5_WdError(v65);
                          v67[3] = v63;
                          v67[4] = v66;
                          v67[5] = 5047LL;
                          WdLogEvent5_WdError(v67);
                        }
                      }
                    }
                  }
                }
                LODWORD(v13) = v31;
                goto LABEL_24;
              }
              v29 = *(_QWORD *)(v6 + 4112);
              if ( (*(_DWORD *)v29 & 0x10) != 0 )
              {
                DXGDEVICE::FlushScheduler(*((_QWORD **)v72 + 2), 1u);
                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                               *(DXGADAPTER ***)(v6 + 2520),
                                               v3);
                if ( DisplayedPrimaryAllocation )
                {
                  memset(v87, 0, sizeof(v87));
                  v58 = *(_QWORD **)(v6 + 2528);
                  v59 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
                  *(_DWORD *)v87 = v3;
                  *(_QWORD *)&v87[16] = v59;
                  (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)(v58[68] + 8LL) + 216LL))(
                    v58[69],
                    *((_QWORD *)DisplayedPrimaryAllocation + 1),
                    &v87[4],
                    &v87[8]);
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v58[65] + 8LL) + 816LL))(
                    *(_QWORD *)(*(_QWORD *)(v5 + 16) + 528LL),
                    v87);
                }
              }
            }
            else
            {
              memset(&v80, 0, sizeof(v80));
              ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v6 + 2520), v3, 1);
              v80.Flags.Value = 0;
              v80.NumMoves = 0;
              v80.pMoves = 0LL;
              v80.pSource = v81.pData;
              v80.Pitch = v70;
              v80.pDirtyRect = &v89;
              v60 = *(_QWORD *)(v6 + 2520);
              v80.VidPnSourceId = v3;
              v80.BytesPerPixel = 4;
              v80.NumDirtyRects = 1;
              v29 = *(_QWORD *)(v60 + 264);
              if ( v29 && (unsigned int)v3 < *(_DWORD *)v29 && (v61 = *(_QWORD *)(v29 + 8)) != 0 )
                v30 = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v61 + 2704LL * (unsigned int)v3), &v80);
              else
                v30 = -1073741811;
            }
            if ( v30 >= 0 )
              goto LABEL_22;
            goto LABEL_79;
          }
          v39 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v39 + 24) = 4775LL;
          WdLogEvent5_WdError(v39);
          LODWORD(v13) = -1073741823;
        }
LABEL_24:
        COREACCESS::~COREACCESS((COREACCESS *)v85);
        COREACCESS::~COREACCESS((COREACCESS *)v84);
        if ( v79 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
        goto LABEL_26;
      }
      v35 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(DXGADAPTER ***)(v6 + 2520),
              (struct DXGDEVICE *)v5,
              v3,
              &v69,
              &v68,
              (struct COREDEVICEACCESS *)v83);
      v13 = v35;
      if ( v35 == -1073741637 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v37, v36);
        v13 = -1071775482LL;
      }
      else
      {
        if ( v35 >= 0 )
          goto LABEL_6;
        v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v37, v36);
      }
      v34[4] = v3;
      v34[3] = v6;
      v34[5] = v13;
    }
    WdLogEvent5_WdEvent(v34);
    goto LABEL_24;
  }
  return 0LL;
}
