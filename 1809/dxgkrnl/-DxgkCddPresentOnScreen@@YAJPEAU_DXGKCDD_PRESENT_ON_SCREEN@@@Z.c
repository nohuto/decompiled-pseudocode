/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ @ 0x1C00012F8 (-AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0004070 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0013870 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0013C68 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0030580 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E544C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C012C940 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C012ECD8 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01C3E9C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C01DDF48 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02138C8 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0247850 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1)
{
  char v2; // r15
  int PairingAdapters; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  DXGADAPTER *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v16; // rcx
  SESSION_VIEW *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DISPLAY_SOURCE *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rdi
  DXGGLOBAL *Global; // rax
  struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *v25; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v27; // rcx
  struct DXGDEVICE *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  D3DKMT_HANDLE v34; // ecx
  ADAPTER_DISPLAY *v35; // rsi
  struct tagRECT v36; // xmm6
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  bool v38; // zf
  int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // r12d
  unsigned int v42; // esi
  ADAPTER_DISPLAY *v43; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v44; // r15d
  __int64 v45; // rcx
  struct tagRECT *v46; // rdi
  struct tagRECT *v47; // rbx
  int CddShadowPitch; // eax
  struct tagRECT *v49; // r8
  DXGCONTEXT *v50; // rsi
  D3DKMT_HANDLE v51; // eax
  UINT v52; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  int v54; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v55; // eax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  struct DXGDEVICE *v59; // rcx
  struct DXGGLOBAL *v60; // rax
  char *v61; // rbx
  int v63; // eax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rbx
  __int64 v75; // rcx
  SIZE_T v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  struct DXGGLOBAL *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  LONG right; // ecx
  unsigned int i; // edx
  __int64 v88; // rcx
  __int64 hAllocation; // rcx
  void *pData; // rax
  LONG v91; // eax
  __int64 VidPnSourceId; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  _QWORD *v95; // rax
  UINT v96; // eax
  int v97; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v98; // r8d
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  int v101; // eax
  __int64 v102; // rcx
  LONG v103; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v104; // ecx
  unsigned int v105; // r15d
  int v106; // r12d
  int v107; // r13d
  __int64 v108; // rsi
  struct tagRECT *v109; // rbx
  int v110; // edi
  int v111; // eax
  struct DXGCONTEXT *v112; // rbx
  __int64 v113; // rcx
  _QWORD *v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rdi
  struct DXGDEVICE *v119; // rbx
  __int64 v120; // rax
  __int64 v121; // r9
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // r9
  struct DXGCONTEXT *v125; // rbx
  __int64 v126; // rdi
  __int64 v127; // rax
  __int64 v128; // r9
  char v129; // [rsp+58h] [rbp-B0h]
  char v130; // [rsp+59h] [rbp-AFh]
  char v131; // [rsp+5Ah] [rbp-AEh] BYREF
  int v132; // [rsp+5Ch] [rbp-ACh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v133[2]; // [rsp+60h] [rbp-A8h]
  struct tagRECT *v134; // [rsp+68h] [rbp-A0h]
  struct DXGCONTEXT *v135; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v136; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v137; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v138; // [rsp+80h] [rbp-88h]
  ADAPTER_DISPLAY *v139; // [rsp+88h] [rbp-80h]
  int v140; // [rsp+90h] [rbp-78h]
  int v141; // [rsp+94h] [rbp-74h]
  DXGDEVICE *v142; // [rsp+98h] [rbp-70h]
  struct DXGDEVICE *v143; // [rsp+A0h] [rbp-68h]
  struct tagRECT v144; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+C0h] [rbp-48h]
  int v146; // [rsp+C8h] [rbp-40h] BYREF
  _D3DKMT_UNLOCK v147; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v148; // [rsp+E0h] [rbp-28h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E8h] [rbp-20h]
  DXGADAPTER *v150; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v151; // [rsp+F8h] [rbp-10h]
  struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *PresentToHwQueueParams; // [rsp+100h] [rbp-8h]
  struct tagRECT v153; // [rsp+108h] [rbp+0h] BYREF
  SESSION_VIEW *v154; // [rsp+118h] [rbp+10h]
  struct _LUID v155; // [rsp+120h] [rbp+18h] BYREF
  ADAPTER_RENDER **v156; // [rsp+128h] [rbp+20h]
  char v157[8]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v158; // [rsp+138h] [rbp+30h]
  char v159; // [rsp+140h] [rbp+38h]
  _DXGKARG_PRESENT_DISPLAYONLY v160; // [rsp+148h] [rbp+40h] BYREF
  _D3DKMT_LOCK v161; // [rsp+188h] [rbp+80h] BYREF
  char v162[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v163; // [rsp+1C0h] [rbp+B8h]
  char v164; // [rsp+1C8h] [rbp+C0h]
  char v165[8]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v166; // [rsp+1D8h] [rbp+D0h]
  char v167; // [rsp+1E0h] [rbp+D8h]
  char v168[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v169; // [rsp+1F0h] [rbp+E8h]
  char v170; // [rsp+1F8h] [rbp+F0h]
  _QWORD v171[2]; // [rsp+200h] [rbp+F8h] BYREF
  _QWORD v172[2]; // [rsp+210h] [rbp+108h] BYREF
  _QWORD v173[2]; // [rsp+220h] [rbp+118h] BYREF
  unsigned __int64 v174; // [rsp+230h] [rbp+128h] BYREF
  _BYTE v175[16]; // [rsp+238h] [rbp+130h] BYREF
  char v176[8]; // [rsp+248h] [rbp+140h] BYREF
  char v177[32]; // [rsp+250h] [rbp+148h] BYREF
  char v178[56]; // [rsp+270h] [rbp+168h] BYREF
  char v179[8]; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v180[32]; // [rsp+2B0h] [rbp+1A8h] BYREF
  char v181[56]; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v182[8]; // [rsp+308h] [rbp+200h] BYREF
  char v183[32]; // [rsp+310h] [rbp+208h] BYREF
  char v184[56]; // [rsp+330h] [rbp+228h] BYREF
  char v185[8]; // [rsp+368h] [rbp+260h] BYREF
  char v186[32]; // [rsp+370h] [rbp+268h] BYREF
  char v187[56]; // [rsp+390h] [rbp+288h] BYREF
  _QWORD v188[8]; // [rsp+3C8h] [rbp+2C0h] BYREF
  _BYTE v189[64]; // [rsp+408h] [rbp+300h] BYREF

  v130 = 0;
  v2 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 > 3u )
    {
      v68 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v68 + 24) = *(int *)a1;
      *(_QWORD *)(v68 + 32) = -1073741811LL;
      WdLogEvent5_WdEvent(v68);
      return 3221225485LL;
    }
    PairingAdapters = DxgkpGetPairingAdapters(
                        *((struct DXGADAPTER **)a1 + 1),
                        *((_DWORD *)a1 + 4),
                        0LL,
                        0LL,
                        &v150,
                        &v174);
    v5 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v4);
      v69[3] = *((_QWORD *)a1 + 1);
      v69[4] = *((unsigned int *)a1 + 4);
      v69[5] = v5;
      WdLogEvent5_WdError(v69);
      return (unsigned int)v5;
    }
    v6 = v150;
    if ( !v150 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v70 + 24) = 1006LL;
      WdLogEvent5_WdAssertion(v70);
    }
    v155 = *(struct _LUID *)((char *)v6 + 276);
    DXGADAPTER::ReleaseReference(v6);
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7) + 77);
    if ( v9 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v131 = 0;
      v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v131, 0);
      v14 = v12;
      if ( v12 < 0 )
      {
        v71 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v71 + 24) = v14;
        WdLogEvent5_WdError(v71);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                  SessionDataForSpecifiedSession,
                                  &v155,
                                  *((_DWORD *)a1 + 4));
        v154 = SessionViewFromSource;
        v17 = SessionViewFromSource;
        if ( SessionViewFromSource )
        {
          v18 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6));
          if ( *((_DWORD *)a1 + 8) == (_DWORD)v18 )
          {
            v18 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7));
            if ( *((_DWORD *)a1 + 9) == (_DWORD)v18 )
            {
              v19 = *((unsigned int *)a1 + 19);
              if ( (unsigned int)v19 > 4 )
              {
                v76 = 16 * v19;
                if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
                  v76 = -1LL;
                v134 = (struct tagRECT *)operator new(v76, 0x4B677844u, PagedPool);
                if ( !v134 )
                {
                  v78 = WdLogNewEntry5_WdLowResource(v77);
                  LODWORD(v5) = -1073741801;
                  *(_QWORD *)(v78 + 24) = *((unsigned int *)a1 + 19);
                  *(_QWORD *)(v78 + 32) = -1073741801LL;
                  WdLogEvent5_WdLowResource(v78);
LABEL_70:
                  if ( v131 )
                    DxgkReleaseSessionModeChangeLock();
                  return (unsigned int)v5;
                }
              }
              else
              {
                v134 = (struct tagRECT *)v189;
              }
              PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v17);
              v20 = PrimaryDisplaySource;
              if ( PrimaryDisplaySource )
              {
                while ( 1 )
                {
                  v143 = 0LL;
                  v135 = 0LL;
                  P = 0LL;
                  v136 = 0;
                  v137 = 0;
                  v129 = 0;
                  memset(&v161, 0, sizeof(v161));
                  *(_QWORD *)&v147.hDevice = 0LL;
                  v147.phAllocations = 0LL;
                  v139 = (ADAPTER_DISPLAY *)*((_QWORD *)v20 + 1);
                  v22 = *((_QWORD *)v139 + 2);
                  v151 = v22;
                  v150 = (DXGADAPTER *)v22;
                  if ( !v22 )
                  {
                    v79 = WdLogNewEntry5_WdAssertion(v21);
                    *(_QWORD *)(v79 + 24) = 1105LL;
                    WdLogEvent5_WdAssertion(v79);
                  }
                  if ( !*(_QWORD *)(v22 + 2520) )
                  {
                    v80 = WdLogNewEntry5_WdAssertion(v21);
                    *(_QWORD *)(v80 + 24) = 1106LL;
                    WdLogEvent5_WdAssertion(v80);
                  }
                  v23 = *((unsigned int *)v20 + 4);
                  v138 = *((_DWORD *)v20 + 4);
                  Global = DXGGLOBAL::GetGlobal(v21);
                  PresentToHwQueueParams = DXGGLOBAL::AllocatePresentToHwQueueParams(Global);
                  v25 = PresentToHwQueueParams;
                  if ( !PresentToHwQueueParams )
                  {
                    LODWORD(v5) = -1073741801;
                    goto LABEL_70;
                  }
                  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v22 + 276));
                  v14 = CddDeviceAndContextForCurrentSession;
                  if ( CddDeviceAndContextForCurrentSession < 0 )
                  {
                    v81 = WdLogNewEntry5_WdError(v27);
                    *(_QWORD *)(v81 + 24) = v22;
                    *(_QWORD *)(v81 + 32) = v14;
                    WdLogEvent5_WdError(v81);
                    v83 = DXGGLOBAL::GetGlobal(v82);
                    v61 = (char *)v83 + 896;
                    ++*((_DWORD *)v83 + 231);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v83 + 56) >= *((_WORD *)v83 + 456) )
                      goto LABEL_90;
                    goto LABEL_63;
                  }
                  v28 = v143;
                  v142 = v143;
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
                    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v175,
                    v143);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
                    (__int64)v188,
                    &v135,
                    1u);
                  v156 = (ADAPTER_RENDER **)((char *)v28 + 16);
                  v29 = *((_QWORD *)v28 + 2);
                  v159 = 0;
                  v158 = *(_QWORD *)(v29 + 16);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v176, (__int64)v28, 1, v30, 0);
                  v148 = P;
                  if ( !v188[0] )
                  {
                    LODWORD(v14) = -1073741801;
                    v84 = WdLogNewEntry5_WdLowResource(v31);
                    *(_QWORD *)(v84 + 24) = -1073741801LL;
                    WdLogEvent5_WdLowResource(v84);
                    goto LABEL_53;
                  }
                  v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v176);
                  v14 = v32;
                  if ( v32 < 0 )
                  {
                    v85 = (_QWORD *)WdLogNewEntry5_WdError(v33);
                    v85[3] = v28;
                    v85[4] = v14;
                    goto LABEL_142;
                  }
                  ADAPTER_DISPLAY::GetCddAllocationHandles(v139, v23, &v136, &v137);
                  v132 = v136;
                  if ( !v136 || (v34 = v137, (v133[1] = v137) == D3DKMDT_VPPR_UNINITIALIZED) )
                  {
                    v63 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                            v139,
                            v28,
                            v23,
                            &v136,
                            &v137,
                            (struct COREDEVICEACCESS *)v176);
                    v14 = v63;
                    if ( v63 == -1073741637 )
                    {
                      LODWORD(v14) = -1071775482;
                      v64 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v64[5] = -1071775482LL;
LABEL_75:
                      v64[4] = v23;
                      v64[3] = v22;
                      WdLogEvent5_WdEvent(v64);
                      goto LABEL_53;
                    }
                    if ( v63 < 0 )
                    {
                      v64 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v64[5] = v14;
                      goto LABEL_75;
                    }
                    v34 = v137;
                    v132 = v136;
                    v133[1] = v137;
                  }
                  v35 = v139;
                  v161.hDevice = *((_DWORD *)v28 + 83);
                  v161.hAllocation = v34;
                  v147.hDevice = *((_DWORD *)v28 + 83);
                  v147.phAllocations = &v161.hAllocation;
                  v147.NumAllocations = 1;
                  ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v139, v23);
                  v36 = *ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v35, v23);
                  v144 = v36;
                  if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v35, (unsigned int)v23, 1LL) - 2) & 0xFFFFFFFD) == 0 )
                  {
                    right = v144.right;
                    v144.right = v144.bottom;
                    v144.bottom = right;
                    v36 = v144;
                  }
                  CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v35, (unsigned int)v23, 0LL);
                  v38 = *(_DWORD *)a1 == 1;
                  v133[0] = CurrentOrientation;
                  if ( !v38 )
                    break;
                  if ( *(_QWORD *)(v22 + 2528) || !ADAPTER_DISPLAY::IsIdenticalMode((DXGADAPTER **)v35, v23) )
                  {
                    v39 = DXGDEVICE::Lock(v28, &v161, (struct COREDEVICEACCESS *)v176);
                    v14 = v39;
                    if ( v39 < 0 )
                    {
                      v85 = (_QWORD *)WdLogNewEntry5_WdError(v40);
                      v85[3] = v22;
                      v85[4] = v23;
                      hAllocation = v161.hAllocation;
                      v85[6] = v14;
                      goto LABEL_141;
                    }
                    v140 = 0;
                    v129 = 1;
                    if ( *((_DWORD *)a1 + 19) )
                    {
                      v41 = v140;
                      v42 = v23;
                      v43 = v139;
                      v44 = v133[0];
                      do
                      {
                        v45 = v41;
                        v46 = &v134[v45];
                        v47 = (struct tagRECT *)(v45 * 16 + *((_QWORD *)a1 + 10));
                        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v43, v42);
                        DxgkpBlitA8R8R8G8(
                          *((unsigned __int8 **)a1 + 3),
                          *((_DWORD *)a1 + 8),
                          *((_DWORD *)a1 + 9),
                          *((_DWORD *)a1 + 10),
                          v44,
                          (unsigned __int8 *)v161.pData,
                          CddShadowPitch,
                          &v144,
                          v47,
                          v46);
                        ++v41;
                      }
                      while ( v41 < *((_DWORD *)a1 + 19) );
                      v36 = v144;
                      v22 = v151;
                      v25 = PresentToHwQueueParams;
                      LODWORD(v23) = v42;
                      v28 = v142;
                    }
                    if ( *(_QWORD *)(v22 + 2528) )
                    {
                      DXGDEVICE::Unlock(v28, &v147, 0);
                      v129 = 0;
                    }
                    v35 = v139;
LABEL_38:
                    v49 = v134;
                    goto LABEL_39;
                  }
                  v49 = v134;
                  for ( i = 0; i < *((_DWORD *)a1 + 19); v49[v88] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v88) )
                    v88 = i++;
LABEL_39:
                  if ( !*(_QWORD *)(v22 + 2528) )
                  {
                    memset(&v160, 0, sizeof(v160));
                    pData = v161.pData;
                    v160.VidPnSourceId = v23;
                    if ( !v129 )
                      pData = (void *)*((_QWORD *)a1 + 3);
                    v160.pSource = pData;
                    v160.BytesPerPixel = 4;
                    v91 = ADAPTER_DISPLAY::GetCddShadowPitch(v35, v23);
                    v160.Flags.Value = 0;
                    v160.Pitch = v91;
                    VidPnSourceId = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v35, (unsigned int)v23, 1LL) != 1;
                    v160.NumMoves = 0;
                    v160.pMoves = 0LL;
                    v160.Flags.Value = VidPnSourceId | v160.Flags.Value & 0xFFFFFFFE;
                    v160.NumDirtyRects = *((_DWORD *)a1 + 19);
                    v160.pDirtyRect = v134;
                    v93 = *((_QWORD *)v35 + 33);
                    if ( v93
                      && (VidPnSourceId = v160.VidPnSourceId, v160.VidPnSourceId < *(_DWORD *)v93)
                      && (v94 = *(_QWORD *)(v93 + 8)) != 0 )
                    {
                      LODWORD(v14) = BLTQUEUE::PresentDisplayOnly(
                                       (BLTQUEUE *)(v94 + 2704LL * v160.VidPnSourceId),
                                       &v160);
                    }
                    else
                    {
                      LODWORD(v14) = -1073741811;
                    }
                    if ( (int)v14 < 0 )
                    {
                      v95 = (_QWORD *)WdLogNewEntry5_WdError(VidPnSourceId);
                      v95[3] = v22;
                      v95[4] = (int)v14;
                      v95[5] = 1394LL;
LABEL_115:
                      WdLogEvent5_WdError(v95);
                      goto LABEL_52;
                    }
                    goto LABEL_48;
                  }
                  if ( v148 )
                  {
                    v146 = *((_DWORD *)v148 + 6);
                    v25->hHwQueues = (D3DKMT_HANDLE *)&v146;
                  }
                  v50 = v135;
                  v51 = *((_DWORD *)v135 + 6);
                  v25->PrivatePresentData.hWindow = 0LL;
                  v25->PrivatePresentData.hDevice = v51;
                  v52 = *((_DWORD *)a1 + 19);
                  v25->PrivatePresentData.BroadcastContextCount = 0;
                  v25->PrivatePresentData.SubRectCnt = v52;
                  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v25->PrivatePresentData.Flags.Value;
                  v25->PrivatePresentData.pSrcSubRects = v49;
                  v54 = *(_DWORD *)a1;
                  if ( !*(_DWORD *)a1 )
                  {
                    v25->PrivatePresentData.Flags.Value = *(_DWORD *)&Value | 2;
                    v96 = *((_DWORD *)a1 + 5);
                    v25->PrivatePresentData.hSource = 0;
                    v25->PrivatePresentData.Color = v96;
                    v55 = v132;
                    goto LABEL_46;
                  }
                  v25->PrivatePresentData.Flags.Value = *(_DWORD *)&Value | 1;
                  if ( v54 == 1 )
                  {
                    v25->PrivatePresentData.hSource = v133[1];
                    v55 = v132;
LABEL_45:
                    v25->PrivatePresentData.SrcRect = v36;
LABEL_46:
                    v25->PrivatePresentData.hDestination = v55;
                    v25->PrivatePresentData.DstRect = v36;
                    goto LABEL_47;
                  }
                  v97 = v132;
                  v25->PrivatePresentData.hSource = v132;
                  if ( v54 == 2 )
                  {
                    v55 = v133[1];
                    goto LABEL_45;
                  }
                  v98 = v133[0];
                  v25->PrivatePresentData.hDestination = v97;
                  DxgkpConvertRects(
                    *((_DWORD *)a1 + 8),
                    *((_DWORD *)a1 + 9),
                    v98,
                    &v144,
                    2u,
                    (struct tagRECT *)((char *)a1 + 44),
                    (struct tagRECT *)((char *)a1 + 44));
                  v25->PrivatePresentData.SrcRect = *(RECT *)((char *)a1 + 44);
                  v25->PrivatePresentData.DstRect = *(RECT *)((char *)a1 + 60);
LABEL_47:
                  v56 = DXGCONTEXT::PresentFromCdd(
                          v50,
                          v25,
                          v23,
                          (struct COREDEVICEACCESS *)v176,
                          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v157,
                          &v135);
                  v14 = v56;
                  if ( v56 < 0 )
                  {
                    if ( v56 == -1071775482 )
                    {
                      v99 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v99[3] = v135;
                      v99[4] = -1071775482LL;
                      v99[5] = 1487LL;
                      WdLogEvent5_WdEvent(v99);
                    }
                    else if ( v56 != -1071774910 )
                    {
                      v100 = (_QWORD *)WdLogNewEntry5_WdError(v57);
                      v100[3] = v135;
                      v100[4] = v14;
                      v100[5] = 1494LL;
                      WdLogEvent5_WdError(v100);
                    }
                    goto LABEL_51;
                  }
LABEL_48:
                  if ( *(_DWORD *)a1 == 2 )
                  {
                    v28 = v142;
                    v101 = DXGDEVICE::Lock(v142, &v161, (struct COREDEVICEACCESS *)v176);
                    v14 = v101;
                    v141 = v101;
                    if ( v101 < 0 )
                    {
                      v95 = (_QWORD *)WdLogNewEntry5_WdError(v102);
                      v95[3] = v22;
                      v95[4] = (unsigned int)v23;
                      v95[5] = v161.hAllocation;
                      v95[6] = v14;
                      goto LABEL_115;
                    }
                    v103 = *((_DWORD *)a1 + 8);
                    v153.left = 0;
                    v153.top = 0;
                    v153.right = v103;
                    v153.bottom = *((_DWORD *)a1 + 9);
                    v129 = 1;
                    if ( v133[0] != D3DKMDT_VPPR_IDENTITY )
                    {
                      if ( v133[0] == D3DKMDT_VPPR_ROTATE90 )
                      {
                        v133[0] = D3DKMDT_VPPR_ROTATE270;
                      }
                      else if ( v133[0] == D3DKMDT_VPPR_ROTATE270 )
                      {
                        v133[0] = D3DKMDT_VPPR_ROTATE90;
                      }
                    }
                    v104 = D3DKMDT_VPPR_UNINITIALIZED;
                    v133[1] = D3DKMDT_VPPR_UNINITIALIZED;
                    if ( *((_DWORD *)a1 + 19) )
                    {
                      v105 = v138;
                      v140 = v144.bottom - v144.top;
                      v106 = v144.bottom - v144.top;
                      v132 = v144.right - v144.left;
                      v107 = v144.right - v144.left;
                      v108 = 4LL * v144.left;
                      do
                      {
                        v109 = &v134[v104];
                        v110 = ADAPTER_DISPLAY::GetCddShadowPitch(v139, v105);
                        v111 = ADAPTER_DISPLAY::GetCddShadowPitch(v139, v105);
                        DxgkpBlitA8R8R8G8(
                          (unsigned __int8 *)v161.pData + (unsigned int)(v144.top * v111) + v108,
                          v107,
                          v106,
                          v110,
                          v133[0],
                          *((unsigned __int8 **)a1 + 3),
                          *((_DWORD *)a1 + 10),
                          &v153,
                          v109,
                          v109);
                        v104 = v133[1] + 1;
                        v133[1] = v104;
                      }
                      while ( (unsigned int)v104 < *((_DWORD *)a1 + 19) );
                      LODWORD(v14) = v141;
                      v22 = v151;
                      v25 = PresentToHwQueueParams;
                      LODWORD(v23) = v138;
                    }
                  }
                  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v22) )
                  {
                    if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v22 + 2520), v23) )
                    {
                      if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v22 + 2520), v23) )
                      {
                        if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v22 + 2520), v23) )
                        {
                          v112 = v135;
                          v141 = ADAPTER_DISPLAY::PresentCddPrimary(
                                   *(ADAPTER_DISPLAY **)(v22 + 2520),
                                   v135,
                                   v23,
                                   (struct COREDEVICEACCESS *)v176);
                          if ( v141 < 0 )
                          {
                            v114 = (_QWORD *)WdLogNewEntry5_WdError(v113);
                            v114[4] = v141;
                            v114[3] = v112;
                            v114[5] = 1586LL;
                            WdLogEvent5_WdError(v114);
                          }
                        }
                      }
                    }
                  }
                  v130 = 1;
LABEL_51:
                  v28 = v142;
LABEL_52:
                  if ( v129 )
                  {
                    DXGDEVICE::Unlock(v28, &v147, 0);
                    if ( (int)v14 < 0 )
                    {
                      v85 = (_QWORD *)WdLogNewEntry5_WdError(v115);
                      v85[4] = (unsigned int)v23;
                      hAllocation = (int)v14;
                      v85[3] = v22;
LABEL_141:
                      v85[5] = hAllocation;
LABEL_142:
                      WdLogEvent5_WdError(v85);
                    }
                  }
LABEL_53:
                  COREACCESS::~COREACCESS((COREACCESS *)v178);
                  COREACCESS::~COREACCESS((COREACCESS *)v177);
                  if ( v159 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v188);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v175);
                  if ( v148 )
                  {
                    v116 = _InterlockedDecrement64((volatile signed __int64 *)v148 + 9);
                    if ( v116 < 0 )
                    {
                      v117 = WdLogNewEntry5_WdAssertion(v58);
                      *(_QWORD *)(v117 + 24) = 96LL;
                      WdLogEvent5_WdAssertion(v117);
                    }
                    if ( !v116 )
                    {
                      v118 = *((_QWORD *)P + 2);
                      v119 = *(struct DXGDEVICE **)(v118 + 16);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v171,
                        v119);
                      v120 = *((_QWORD *)v119 + 2);
                      v170 = 0;
                      v169 = *(_QWORD *)(v120 + 16);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v179, (__int64)v119, 2, v121, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v179);
                      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v119 + 2) + 16LL) + 176LL) != 4 )
                        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v118, P, (struct COREDEVICEACCESS *)v179);
                      COREACCESS::~COREACCESS((COREACCESS *)v181);
                      COREACCESS::~COREACCESS((COREACCESS *)v180);
                      if ( v170 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                      if ( v171[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v171);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v118 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      {
                        v122 = *(_QWORD *)(v118 + 16);
                        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v172,
                          (struct DXGDEVICE *)v122);
                        v123 = *(_QWORD *)(v118 + 16);
                        v164 = 0;
                        v163 = *(_QWORD *)(*(_QWORD *)(v123 + 16) + 16LL);
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v162);
                        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v182, v122, 2, v124, 0);
                        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v182);
                        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v122 + 16) + 16LL) + 176LL) != 4 )
                          DXGDEVICE::DestroyContext(
                            (DXGDEVICE *)v122,
                            (struct DXGCONTEXT *)v118,
                            (struct COREDEVICEACCESS *)v182);
                        COREACCESS::~COREACCESS((COREACCESS *)v184);
                        COREACCESS::~COREACCESS((COREACCESS *)v183);
                        if ( v164 )
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v162);
                        if ( v172[0] )
                          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v172);
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v122 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          ADAPTER_RENDER::DestroyDeviceNoLocks(
                            *(ADAPTER_RENDER **)(v122 + 16),
                            (struct DXGDEVICE *)v122);
                      }
                    }
                    v59 = v143;
                  }
                  else
                  {
                    v59 = v142;
                  }
                  if ( v135 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      v125 = v135;
                      v126 = *((_QWORD *)v135 + 2);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v173,
                        (struct DXGDEVICE *)v126);
                      v127 = *((_QWORD *)v125 + 2);
                      v167 = 0;
                      v166 = *(_QWORD *)(*(_QWORD *)(v127 + 16) + 16LL);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v165);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v185, v126, 2, v128, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v185);
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v126 + 16) + 16LL) + 176LL) != 4 )
                        DXGDEVICE::DestroyContext((DXGDEVICE *)v126, v135, (struct COREDEVICEACCESS *)v185);
                      COREACCESS::~COREACCESS((COREACCESS *)v187);
                      COREACCESS::~COREACCESS((COREACCESS *)v186);
                      if ( v167 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v165);
                      if ( v173[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v173);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v126 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v126 + 16), (struct DXGDEVICE *)v126);
                    }
                    v59 = v143;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*v156, v143);
                  v60 = DXGGLOBAL::GetGlobal((__int64)v59);
                  v61 = (char *)v60 + 896;
                  ++*((_DWORD *)v60 + 231);
                  if ( ExQueryDepthSList((PSLIST_HEADER)v60 + 56) >= *((_WORD *)v60 + 456) )
                  {
LABEL_90:
                    ++*((_DWORD *)v61 + 8);
                    (*((void (__fastcall **)(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *, char *))v61 + 7))(v25, v61);
                    goto LABEL_64;
                  }
LABEL_63:
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v61, (PSLIST_ENTRY)v25);
LABEL_64:
                  PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v154, PrimaryDisplaySource);
                  v20 = PrimaryDisplaySource;
                  if ( !PrimaryDisplaySource )
                  {
                    v2 = v130;
                    goto LABEL_66;
                  }
                }
                if ( !*(_QWORD *)(v22 + 2528) )
                {
                  LODWORD(v14) = -1073741637;
                  v85 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)CurrentOrientation);
                  v85[3] = v22;
                  v85[4] = *(int *)a1;
                  v85[5] = -1073741637LL;
                  goto LABEL_142;
                }
                DxgkpConvertRects(
                  *((_DWORD *)a1 + 8),
                  *((_DWORD *)a1 + 9),
                  CurrentOrientation,
                  &v144,
                  *((_DWORD *)a1 + 19),
                  *((struct tagRECT **)a1 + 10),
                  v134);
                goto LABEL_38;
              }
LABEL_66:
              if ( v134 != (struct tagRECT *)v189 )
                operator delete[](v134);
              LODWORD(v5) = 0;
              if ( !v2 )
                LODWORD(v5) = v14;
              goto LABEL_70;
            }
          }
          v75 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v75 + 24) = -1073741811LL;
        }
        else
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdError(v16);
          v73 = *((unsigned int *)a1 + 4);
          v74 = v72;
          v72[3] = v73;
          v72[4] = v6;
          v72[5] = (unsigned int)PsGetCurrentProcessSessionId(v73);
          v75 = (__int64)v74;
          v74[6] = -1073741811LL;
        }
        WdLogEvent5_WdError(v75);
        LODWORD(v14) = -1073741811;
      }
      LODWORD(v5) = v14;
      goto LABEL_70;
    }
    v66 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v66 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v67);
    v65 = v66;
    *(_QWORD *)(v66 + 32) = -1073741811LL;
  }
  else
  {
    v65 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v65 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v65);
  return 3221225485LL;
}
