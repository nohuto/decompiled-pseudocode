/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ @ 0x1C000116C (-AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001620 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0001BBC (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001D10 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003AD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0003B50 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0035D60 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4540 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E0E20 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6FA0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01209A8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013A2C8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C013B910 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C013D2DC (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01F2DA0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C020CFE8 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247404 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C027D0F0 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  int PairingAdapters; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  DXGADAPTER *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rbx
  __int64 v16; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  struct SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  SESSION_VIEW *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct DISPLAY_SOURCE *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rdi
  DXGGLOBAL *Global; // rax
  struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *v37; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGDEVICE *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  D3DKMT_HANDLE v53; // ecx
  ADAPTER_DISPLAY *v54; // rsi
  struct tagRECT v55; // xmm6
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  bool v59; // zf
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned int v64; // r12d
  unsigned int v65; // esi
  ADAPTER_DISPLAY *v66; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v67; // r15d
  __int64 v68; // rcx
  struct tagRECT *v69; // rdi
  struct tagRECT *v70; // rbx
  int CddShadowPitch; // eax
  struct tagRECT *v72; // r8
  DXGCONTEXT *v73; // rsi
  D3DKMT_HANDLE v74; // eax
  UINT v75; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  int v77; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v78; // eax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  struct DXGDEVICE *v85; // rcx
  struct DXGGLOBAL *v86; // rax
  char *v87; // rbx
  int v89; // eax
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rcx
  _QWORD *v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  SIZE_T v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  struct DXGGLOBAL *v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  LONG right; // ecx
  unsigned int i; // edx
  __int64 v120; // rcx
  __int64 hAllocation; // rcx
  void *pData; // rax
  LONG v123; // eax
  __int64 v124; // rdx
  __int64 VidPnSourceId; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  _QWORD *v128; // rax
  UINT v129; // eax
  int v130; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v131; // r8d
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  LONG v138; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v139; // ecx
  unsigned int v140; // r15d
  int v141; // r12d
  int v142; // r13d
  __int64 v143; // rsi
  struct tagRECT *v144; // rbx
  int v145; // edi
  int v146; // eax
  struct DXGCONTEXT *v147; // rbx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  _QWORD *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // rbx
  __int64 v156; // rax
  __int64 v157; // rdi
  struct DXGDEVICE *v158; // rbx
  __int64 v159; // rax
  __int64 v160; // r9
  __int64 v161; // rbx
  __int64 v162; // rax
  __int64 v163; // r9
  struct DXGCONTEXT *v164; // rbx
  __int64 v165; // rdi
  __int64 v166; // rax
  __int64 v167; // r9
  char v168; // [rsp+58h] [rbp-B0h]
  char v169; // [rsp+59h] [rbp-AFh]
  char v170; // [rsp+5Ah] [rbp-AEh] BYREF
  int v171; // [rsp+5Ch] [rbp-ACh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v172[2]; // [rsp+60h] [rbp-A8h]
  struct tagRECT *v173; // [rsp+68h] [rbp-A0h]
  struct DXGCONTEXT *v174; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v175; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v176; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v177; // [rsp+80h] [rbp-88h]
  ADAPTER_DISPLAY *v178; // [rsp+88h] [rbp-80h]
  int v179; // [rsp+90h] [rbp-78h]
  int v180; // [rsp+94h] [rbp-74h]
  DXGDEVICE *v181; // [rsp+98h] [rbp-70h]
  struct DXGDEVICE *v182; // [rsp+A0h] [rbp-68h]
  struct tagRECT v183; // [rsp+A8h] [rbp-60h] BYREF
  struct DXGHWQUEUE *v184; // [rsp+C0h] [rbp-48h]
  int v185; // [rsp+C8h] [rbp-40h] BYREF
  _D3DKMT_UNLOCK v186; // [rsp+D0h] [rbp-38h] BYREF
  struct DXGHWQUEUE *v187; // [rsp+E0h] [rbp-28h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E8h] [rbp-20h]
  DXGADAPTER *v189; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v190; // [rsp+F8h] [rbp-10h]
  struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *PresentToHwQueueParams; // [rsp+100h] [rbp-8h]
  struct tagRECT v192; // [rsp+108h] [rbp+0h] BYREF
  SESSION_VIEW *v193; // [rsp+118h] [rbp+10h]
  struct _LUID v194; // [rsp+120h] [rbp+18h] BYREF
  ADAPTER_RENDER **v195; // [rsp+128h] [rbp+20h]
  char v196[8]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v197; // [rsp+138h] [rbp+30h]
  char v198; // [rsp+140h] [rbp+38h]
  _DXGKARG_PRESENT_DISPLAYONLY v199; // [rsp+148h] [rbp+40h] BYREF
  _D3DKMT_LOCK v200; // [rsp+188h] [rbp+80h] BYREF
  char v201[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v202; // [rsp+1C0h] [rbp+B8h]
  char v203; // [rsp+1C8h] [rbp+C0h]
  char v204[8]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v205; // [rsp+1D8h] [rbp+D0h]
  char v206; // [rsp+1E0h] [rbp+D8h]
  char v207[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v208; // [rsp+1F0h] [rbp+E8h]
  char v209; // [rsp+1F8h] [rbp+F0h]
  _QWORD v210[2]; // [rsp+200h] [rbp+F8h] BYREF
  _QWORD v211[2]; // [rsp+210h] [rbp+108h] BYREF
  _QWORD v212[2]; // [rsp+220h] [rbp+118h] BYREF
  unsigned __int64 v213; // [rsp+230h] [rbp+128h] BYREF
  _BYTE v214[16]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v215[8]; // [rsp+248h] [rbp+140h] BYREF
  char v216[8]; // [rsp+288h] [rbp+180h] BYREF
  char v217[64]; // [rsp+290h] [rbp+188h] BYREF
  char v218[88]; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v219[8]; // [rsp+328h] [rbp+220h] BYREF
  char v220[64]; // [rsp+330h] [rbp+228h] BYREF
  char v221[88]; // [rsp+370h] [rbp+268h] BYREF
  char v222[8]; // [rsp+3C8h] [rbp+2C0h] BYREF
  char v223[64]; // [rsp+3D0h] [rbp+2C8h] BYREF
  char v224[88]; // [rsp+410h] [rbp+308h] BYREF
  char v225[8]; // [rsp+468h] [rbp+360h] BYREF
  char v226[64]; // [rsp+470h] [rbp+368h] BYREF
  char v227[88]; // [rsp+4B0h] [rbp+3A8h] BYREF
  _BYTE v228[64]; // [rsp+508h] [rbp+400h] BYREF

  v169 = 0;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 > 3u )
    {
      v95 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v95 + 24) = *(int *)a1;
      *(_QWORD *)(v95 + 32) = -1073741811LL;
      WdLogEvent5_WdEvent(v95);
      return 3221225485LL;
    }
    PairingAdapters = DxgkpGetPairingAdapters(
                        *((struct DXGADAPTER **)a1 + 1),
                        *((_DWORD *)a1 + 4),
                        0LL,
                        0LL,
                        &v189,
                        &v213,
                        0);
    v9 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v96 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
      v96[3] = *((_QWORD *)a1 + 1);
      v96[4] = *((unsigned int *)a1 + 4);
      v96[5] = v9;
      WdLogEvent5_WdError(v96);
      return (unsigned int)v9;
    }
    v10 = v189;
    if ( !v189 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v97 + 24) = 1006LL;
      WdLogEvent5_WdAssertion(v97);
    }
    v194 = *(struct _LUID *)((char *)v10 + 276);
    DXGADAPTER::ReleaseReferenceNoTracking(v10);
    v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12, v11) + 74);
    if ( v15 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v170 = 0;
      v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v170, 0);
      v23 = v19;
      if ( v19 < 0 )
      {
        v98 = WdLogNewEntry5_WdError(v21, v20, v22);
        *(_QWORD *)(v98 + 24) = v23;
        WdLogEvent5_WdError(v98);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                  SessionDataForSpecifiedSession,
                                  &v194,
                                  *((_DWORD *)a1 + 4));
        v193 = SessionViewFromSource;
        v28 = SessionViewFromSource;
        if ( SessionViewFromSource )
        {
          v29 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6));
          if ( *((_DWORD *)a1 + 8) == (_DWORD)v29 )
          {
            v29 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7));
            if ( *((_DWORD *)a1 + 9) == (_DWORD)v29 )
            {
              v30 = *((unsigned int *)a1 + 19);
              if ( (unsigned int)v30 > 4 )
              {
                v104 = 16 * v30;
                if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
                  v104 = -1LL;
                v173 = (struct tagRECT *)operator new[](v104, 0x4B677844u, PagedPool);
                if ( !v173 )
                {
                  v109 = WdLogNewEntry5_WdLowResource(v106, v105, v107, v108);
                  LODWORD(v9) = -1073741801;
                  *(_QWORD *)(v109 + 24) = *((unsigned int *)a1 + 19);
                  *(_QWORD *)(v109 + 32) = -1073741801LL;
                  WdLogEvent5_WdLowResource(v109);
LABEL_70:
                  if ( v170 )
                    DxgkReleaseSessionModeChangeLock();
                  return (unsigned int)v9;
                }
              }
              else
              {
                v173 = (struct tagRECT *)v228;
              }
              PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v28);
              v31 = PrimaryDisplaySource;
              if ( PrimaryDisplaySource )
              {
                while ( 1 )
                {
                  v182 = 0LL;
                  v174 = 0LL;
                  v184 = 0LL;
                  v175 = 0;
                  v176 = 0;
                  v168 = 0;
                  memset(&v200, 0, sizeof(v200));
                  *(_QWORD *)&v186.hDevice = 0LL;
                  v186.phAllocations = 0LL;
                  v178 = (ADAPTER_DISPLAY *)*((_QWORD *)v31 + 1);
                  v34 = *((_QWORD *)v178 + 2);
                  v190 = v34;
                  v189 = (DXGADAPTER *)v34;
                  if ( !v34 )
                  {
                    v110 = WdLogNewEntry5_WdAssertion(v33, v32);
                    *(_QWORD *)(v110 + 24) = 1105LL;
                    WdLogEvent5_WdAssertion(v110);
                  }
                  if ( !*(_QWORD *)(v34 + 2552) )
                  {
                    v111 = WdLogNewEntry5_WdAssertion(v33, v32);
                    *(_QWORD *)(v111 + 24) = 1106LL;
                    WdLogEvent5_WdAssertion(v111);
                  }
                  v35 = *((unsigned int *)v31 + 4);
                  v177 = *((_DWORD *)v31 + 4);
                  Global = DXGGLOBAL::GetGlobal(v33, v32);
                  PresentToHwQueueParams = DXGGLOBAL::AllocatePresentToHwQueueParams(Global);
                  v37 = PresentToHwQueueParams;
                  if ( !PresentToHwQueueParams )
                  {
                    LODWORD(v9) = -1073741801;
                    goto LABEL_70;
                  }
                  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                           (struct _LUID *)(v34 + 276),
                                                           0);
                  v23 = CddDeviceAndContextForCurrentSession;
                  if ( CddDeviceAndContextForCurrentSession < 0 )
                  {
                    v112 = WdLogNewEntry5_WdError(v40, v39, v41);
                    *(_QWORD *)(v112 + 24) = v34;
                    *(_QWORD *)(v112 + 32) = v23;
                    WdLogEvent5_WdError(v112);
                    v115 = DXGGLOBAL::GetGlobal(v114, v113);
                    v87 = (char *)v115 + 864;
                    ++*((_DWORD *)v115 + 223);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v115 + 54) >= *((_WORD *)v115 + 440) )
                      goto LABEL_90;
                    goto LABEL_63;
                  }
                  v42 = v182;
                  v181 = v182;
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
                    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v214,
                    v182);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
                    (__int64)v215,
                    &v174,
                    1u);
                  v195 = (ADAPTER_RENDER **)((char *)v42 + 16);
                  v43 = *((_QWORD *)v42 + 2);
                  v198 = 0;
                  v197 = *(_QWORD *)(v43 + 16);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v216, (__int64)v42, 1, v44, 0);
                  v187 = v184;
                  if ( !v215[0] )
                  {
                    LODWORD(v23) = -1073741801;
                    v116 = WdLogNewEntry5_WdLowResource(v46, v45, v47, v48);
                    *(_QWORD *)(v116 + 24) = -1073741801LL;
                    WdLogEvent5_WdLowResource(v116);
                    goto LABEL_53;
                  }
                  v49 = COREDEVICEACCESS::AcquireShared((__int64)v216, 0xFFFFFFFF, 0LL);
                  v23 = v49;
                  if ( v49 < 0 )
                  {
                    v117 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50, v52);
                    v117[3] = v42;
                    v117[4] = v23;
                    goto LABEL_142;
                  }
                  ADAPTER_DISPLAY::GetCddAllocationHandles(v178, v35, &v175, &v176);
                  v171 = v175;
                  if ( !v175 || (v53 = v176, (v172[1] = v176) == D3DKMDT_VPPR_UNINITIALIZED) )
                  {
                    v89 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                            v178,
                            v42,
                            v35,
                            &v175,
                            &v176,
                            (struct COREDEVICEACCESS *)v216);
                    v23 = v89;
                    if ( v89 == -1073741637 )
                    {
                      LODWORD(v23) = -1071775482;
                      v90 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v90[5] = -1071775482LL;
LABEL_75:
                      v90[4] = v35;
                      v90[3] = v34;
                      WdLogEvent5_WdEvent(v90);
                      goto LABEL_53;
                    }
                    if ( v89 < 0 )
                    {
                      v90 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v90[5] = v23;
                      goto LABEL_75;
                    }
                    v53 = v176;
                    v171 = v175;
                    v172[1] = v176;
                  }
                  v54 = v178;
                  v200.hDevice = *((_DWORD *)v42 + 83);
                  v200.hAllocation = v53;
                  v186.hDevice = *((_DWORD *)v42 + 83);
                  v186.phAllocations = &v200.hAllocation;
                  v186.NumAllocations = 1;
                  ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v178, v35);
                  v55 = *ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v54, v35);
                  v183 = v55;
                  if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v54, (unsigned int)v35, 1LL) - 2) & 0xFFFFFFFD) == 0 )
                  {
                    right = v183.right;
                    v183.right = v183.bottom;
                    v183.bottom = right;
                    v55 = v183;
                  }
                  CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v54, (unsigned int)v35, 0LL);
                  v59 = *(_DWORD *)a1 == 1;
                  v172[0] = CurrentOrientation;
                  if ( !v59 )
                    break;
                  if ( *(_QWORD *)(v34 + 2560) || !ADAPTER_DISPLAY::IsIdenticalMode((DXGADAPTER **)v54, v35) )
                  {
                    v60 = DXGDEVICE::Lock(v42, &v200, (struct COREDEVICEACCESS *)v216);
                    v23 = v60;
                    if ( v60 < 0 )
                    {
                      v117 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61, v63);
                      v117[3] = v34;
                      v117[4] = v35;
                      hAllocation = v200.hAllocation;
                      v117[6] = v23;
                      goto LABEL_141;
                    }
                    v179 = 0;
                    v168 = 1;
                    if ( *((_DWORD *)a1 + 19) )
                    {
                      v64 = v179;
                      v65 = v35;
                      v66 = v178;
                      v67 = v172[0];
                      do
                      {
                        v68 = v64;
                        v69 = &v173[v68];
                        v70 = (struct tagRECT *)(v68 * 16 + *((_QWORD *)a1 + 10));
                        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v66, v65);
                        DxgkpBlitA8R8R8G8(
                          *((unsigned __int8 **)a1 + 3),
                          *((_DWORD *)a1 + 8),
                          *((_DWORD *)a1 + 9),
                          *((_DWORD *)a1 + 10),
                          v67,
                          (unsigned __int8 *)v200.pData,
                          CddShadowPitch,
                          &v183,
                          v70,
                          v69);
                        ++v64;
                      }
                      while ( v64 < *((_DWORD *)a1 + 19) );
                      v55 = v183;
                      v34 = v190;
                      v37 = PresentToHwQueueParams;
                      LODWORD(v35) = v65;
                      v42 = v181;
                    }
                    if ( *(_QWORD *)(v34 + 2560) )
                    {
                      DXGDEVICE::Unlock(v42, &v186, 0);
                      v168 = 0;
                    }
                    v54 = v178;
LABEL_38:
                    v72 = v173;
                    goto LABEL_39;
                  }
                  v72 = v173;
                  for ( i = 0; i < *((_DWORD *)a1 + 19); v72[v120] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v120) )
                    v120 = i++;
LABEL_39:
                  if ( !*(_QWORD *)(v34 + 2560) )
                  {
                    memset(&v199, 0, sizeof(v199));
                    pData = v200.pData;
                    v199.VidPnSourceId = v35;
                    if ( !v168 )
                      pData = (void *)*((_QWORD *)a1 + 3);
                    v199.pSource = pData;
                    v199.BytesPerPixel = 4;
                    v123 = ADAPTER_DISPLAY::GetCddShadowPitch(v54, v35);
                    v199.Flags.Value = 0;
                    v199.Pitch = v123;
                    VidPnSourceId = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v54, (unsigned int)v35, 1LL) != 1;
                    v199.NumMoves = 0;
                    v199.pMoves = 0LL;
                    v199.Flags.Value = VidPnSourceId | v199.Flags.Value & 0xFFFFFFFE;
                    v199.NumDirtyRects = *((_DWORD *)a1 + 19);
                    v199.pDirtyRect = v173;
                    v127 = *((_QWORD *)v54 + 46);
                    if ( v127
                      && (VidPnSourceId = v199.VidPnSourceId, v199.VidPnSourceId < *(_DWORD *)v127)
                      && (v124 = *(_QWORD *)(v127 + 8)) != 0 )
                    {
                      LODWORD(v23) = BLTQUEUE::PresentDisplayOnly(
                                       (BLTQUEUE *)(v124 + 2760LL * v199.VidPnSourceId),
                                       &v199);
                    }
                    else
                    {
                      LODWORD(v23) = -1073741811;
                    }
                    if ( (int)v23 < 0 )
                    {
                      v128 = (_QWORD *)WdLogNewEntry5_WdError(VidPnSourceId, v124, v126);
                      v128[3] = v34;
                      v128[4] = (int)v23;
                      v128[5] = 1394LL;
LABEL_115:
                      WdLogEvent5_WdError(v128);
                      goto LABEL_52;
                    }
                    goto LABEL_48;
                  }
                  if ( v187 )
                  {
                    v185 = *((_DWORD *)v187 + 6);
                    v37->hHwQueues = (D3DKMT_HANDLE *)&v185;
                  }
                  v73 = v174;
                  v74 = *((_DWORD *)v174 + 6);
                  v37->PrivatePresentData.hWindow = 0LL;
                  v37->PrivatePresentData.hDevice = v74;
                  v75 = *((_DWORD *)a1 + 19);
                  v37->PrivatePresentData.BroadcastContextCount = 0;
                  v37->PrivatePresentData.SubRectCnt = v75;
                  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v37->PrivatePresentData.Flags.Value;
                  v37->PrivatePresentData.pSrcSubRects = v72;
                  v77 = *(_DWORD *)a1;
                  if ( !*(_DWORD *)a1 )
                  {
                    v37->PrivatePresentData.Flags.Value = *(_DWORD *)&Value | 2;
                    v129 = *((_DWORD *)a1 + 5);
                    v37->PrivatePresentData.hSource = 0;
                    v37->PrivatePresentData.Color = v129;
                    v78 = v171;
                    goto LABEL_46;
                  }
                  v37->PrivatePresentData.Flags.Value = *(_DWORD *)&Value | 1;
                  if ( v77 == 1 )
                  {
                    v37->PrivatePresentData.hSource = v172[1];
                    v78 = v171;
LABEL_45:
                    v37->PrivatePresentData.SrcRect = v55;
LABEL_46:
                    v37->PrivatePresentData.hDestination = v78;
                    v37->PrivatePresentData.DstRect = v55;
                    goto LABEL_47;
                  }
                  v130 = v171;
                  v37->PrivatePresentData.hSource = v171;
                  if ( v77 == 2 )
                  {
                    v78 = v172[1];
                    goto LABEL_45;
                  }
                  v131 = v172[0];
                  v37->PrivatePresentData.hDestination = v130;
                  DxgkpConvertRects(
                    *((_DWORD *)a1 + 8),
                    *((_DWORD *)a1 + 9),
                    v131,
                    &v183,
                    2u,
                    (struct tagRECT *)((char *)a1 + 44),
                    (struct tagRECT *)((char *)a1 + 44));
                  v37->PrivatePresentData.SrcRect = *(RECT *)((char *)a1 + 44);
                  v37->PrivatePresentData.DstRect = *(RECT *)((char *)a1 + 60);
LABEL_47:
                  v79 = DXGCONTEXT::PresentFromCdd(
                          v73,
                          v37,
                          v35,
                          (struct COREDEVICEACCESS *)v216,
                          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v196,
                          &v174);
                  v23 = v79;
                  if ( v79 < 0 )
                  {
                    if ( v79 == -1071775482 )
                    {
                      v132 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v132[3] = v174;
                      v132[4] = -1071775482LL;
                      v132[5] = 1487LL;
                      WdLogEvent5_WdEvent(v132);
                    }
                    else if ( v79 != -1071774910 )
                    {
                      v133 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80, v82);
                      v133[3] = v174;
                      v133[4] = v23;
                      v133[5] = 1494LL;
                      WdLogEvent5_WdError(v133);
                    }
                    goto LABEL_51;
                  }
LABEL_48:
                  if ( *(_DWORD *)a1 == 2 )
                  {
                    v42 = v181;
                    v134 = DXGDEVICE::Lock(v181, &v200, (struct COREDEVICEACCESS *)v216);
                    v23 = v134;
                    v180 = v134;
                    if ( v134 < 0 )
                    {
                      v128 = (_QWORD *)WdLogNewEntry5_WdError(v136, v135, v137);
                      v128[3] = v34;
                      v128[4] = (unsigned int)v35;
                      v128[5] = v200.hAllocation;
                      v128[6] = v23;
                      goto LABEL_115;
                    }
                    v138 = *((_DWORD *)a1 + 8);
                    v192.left = 0;
                    v192.top = 0;
                    v192.right = v138;
                    v192.bottom = *((_DWORD *)a1 + 9);
                    v168 = 1;
                    if ( v172[0] != D3DKMDT_VPPR_IDENTITY )
                    {
                      if ( v172[0] == D3DKMDT_VPPR_ROTATE90 )
                      {
                        v172[0] = D3DKMDT_VPPR_ROTATE270;
                      }
                      else if ( v172[0] == D3DKMDT_VPPR_ROTATE270 )
                      {
                        v172[0] = D3DKMDT_VPPR_ROTATE90;
                      }
                    }
                    v139 = D3DKMDT_VPPR_UNINITIALIZED;
                    v172[1] = D3DKMDT_VPPR_UNINITIALIZED;
                    if ( *((_DWORD *)a1 + 19) )
                    {
                      v140 = v177;
                      v179 = v183.bottom - v183.top;
                      v141 = v183.bottom - v183.top;
                      v171 = v183.right - v183.left;
                      v142 = v183.right - v183.left;
                      v143 = 4LL * v183.left;
                      do
                      {
                        v144 = &v173[v139];
                        v145 = ADAPTER_DISPLAY::GetCddShadowPitch(v178, v140);
                        v146 = ADAPTER_DISPLAY::GetCddShadowPitch(v178, v140);
                        DxgkpBlitA8R8R8G8(
                          (unsigned __int8 *)v200.pData + (unsigned int)(v183.top * v146) + v143,
                          v142,
                          v141,
                          v145,
                          v172[0],
                          *((unsigned __int8 **)a1 + 3),
                          *((_DWORD *)a1 + 10),
                          &v192,
                          v144,
                          v144);
                        v139 = v172[1] + 1;
                        v172[1] = v139;
                      }
                      while ( (unsigned int)v139 < *((_DWORD *)a1 + 19) );
                      LODWORD(v23) = v180;
                      v34 = v190;
                      v37 = PresentToHwQueueParams;
                      LODWORD(v35) = v177;
                    }
                  }
                  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v34) )
                  {
                    if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v34 + 2552), v35) )
                    {
                      if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v34 + 2552), v35) )
                      {
                        if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v34 + 2552), v35) )
                        {
                          v147 = v174;
                          v180 = ADAPTER_DISPLAY::PresentCddPrimary(
                                   *(ADAPTER_DISPLAY **)(v34 + 2552),
                                   v174,
                                   v35,
                                   (struct COREDEVICEACCESS *)v216);
                          if ( v180 < 0 )
                          {
                            v151 = (_QWORD *)WdLogNewEntry5_WdError(v149, v148, v150);
                            v151[4] = v180;
                            v151[3] = v147;
                            v151[5] = 1586LL;
                            WdLogEvent5_WdError(v151);
                          }
                        }
                      }
                    }
                  }
                  v169 = 1;
LABEL_51:
                  v42 = v181;
LABEL_52:
                  if ( v168 )
                  {
                    DXGDEVICE::Unlock(v42, &v186, 0);
                    if ( (int)v23 < 0 )
                    {
                      v117 = (_QWORD *)WdLogNewEntry5_WdError(v153, v152, v154);
                      v117[4] = (unsigned int)v35;
                      hAllocation = (int)v23;
                      v117[3] = v34;
LABEL_141:
                      v117[5] = hAllocation;
LABEL_142:
                      WdLogEvent5_WdError(v117);
                    }
                  }
LABEL_53:
                  COREACCESS::~COREACCESS((COREACCESS *)v218);
                  COREACCESS::~COREACCESS((COREACCESS *)v217);
                  if ( v198 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v215);
                  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v214);
                  if ( v187 )
                  {
                    v155 = _InterlockedDecrement64((volatile signed __int64 *)v187 + 9);
                    if ( v155 < 0 )
                    {
                      v156 = WdLogNewEntry5_WdAssertion(v84, v83);
                      *(_QWORD *)(v156 + 24) = 101LL;
                      WdLogEvent5_WdAssertion(v156);
                    }
                    if ( !v155 )
                    {
                      v157 = *((_QWORD *)v184 + 2);
                      v158 = *(struct DXGDEVICE **)(v157 + 16);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v210,
                        v158);
                      v159 = *((_QWORD *)v158 + 2);
                      v209 = 0;
                      v208 = *(_QWORD *)(v159 + 16);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v207);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v219, (__int64)v158, 2, v160, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v219);
                      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v158 + 2) + 16LL) + 176LL) != 4 )
                        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v157, v184, (struct COREDEVICEACCESS *)v219);
                      COREACCESS::~COREACCESS((COREACCESS *)v221);
                      COREACCESS::~COREACCESS((COREACCESS *)v220);
                      if ( v209 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v207);
                      if ( v210[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v210);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v157 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      {
                        v161 = *(_QWORD *)(v157 + 16);
                        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v211,
                          (struct DXGDEVICE *)v161);
                        v162 = *(_QWORD *)(v157 + 16);
                        v203 = 0;
                        v202 = *(_QWORD *)(*(_QWORD *)(v162 + 16) + 16LL);
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v201);
                        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v222, v161, 2, v163, 0);
                        COREDEVICEACCESS::AcquireSharedUncheck((__int64)v222);
                        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v161 + 16) + 16LL) + 176LL) != 4 )
                          DXGDEVICE::DestroyContext(
                            (DXGDEVICE *)v161,
                            (struct DXGCONTEXT *)v157,
                            (struct COREDEVICEACCESS *)v222);
                        COREACCESS::~COREACCESS((COREACCESS *)v224);
                        COREACCESS::~COREACCESS((COREACCESS *)v223);
                        if ( v203 )
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v201);
                        if ( v211[0] )
                          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v211);
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v161 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          ADAPTER_RENDER::DestroyDeviceNoLocks(
                            *(ADAPTER_RENDER **)(v161 + 16),
                            (struct DXGDEVICE *)v161);
                      }
                    }
                    v85 = v182;
                  }
                  else
                  {
                    v85 = v181;
                  }
                  if ( v174 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v174 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      v164 = v174;
                      v165 = *((_QWORD *)v174 + 2);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v212,
                        (struct DXGDEVICE *)v165);
                      v166 = *((_QWORD *)v164 + 2);
                      v206 = 0;
                      v205 = *(_QWORD *)(*(_QWORD *)(v166 + 16) + 16LL);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v204);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v225, v165, 2, v167, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v225);
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v165 + 16) + 16LL) + 176LL) != 4 )
                        DXGDEVICE::DestroyContext((DXGDEVICE *)v165, v174, (struct COREDEVICEACCESS *)v225);
                      COREACCESS::~COREACCESS((COREACCESS *)v227);
                      COREACCESS::~COREACCESS((COREACCESS *)v226);
                      if ( v206 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v204);
                      if ( v212[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v212);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v165 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v165 + 16), (struct DXGDEVICE *)v165);
                    }
                    v85 = v182;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*v195, v182);
                  v86 = DXGGLOBAL::GetGlobal((__int64)v85, v83);
                  v87 = (char *)v86 + 864;
                  ++*((_DWORD *)v86 + 223);
                  if ( ExQueryDepthSList((PSLIST_HEADER)v86 + 54) >= *((_WORD *)v86 + 440) )
                  {
LABEL_90:
                    ++*((_DWORD *)v87 + 8);
                    (*((void (__fastcall **)(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *, char *))v87 + 7))(v37, v87);
                    goto LABEL_64;
                  }
LABEL_63:
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v87, (PSLIST_ENTRY)v37);
LABEL_64:
                  PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v193, PrimaryDisplaySource);
                  v31 = PrimaryDisplaySource;
                  if ( !PrimaryDisplaySource )
                  {
                    v4 = v169;
                    goto LABEL_66;
                  }
                }
                if ( !*(_QWORD *)(v34 + 2560) )
                {
                  LODWORD(v23) = -1073741637;
                  v117 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)CurrentOrientation, v57, v58);
                  v117[3] = v34;
                  v117[4] = *(int *)a1;
                  v117[5] = -1073741637LL;
                  goto LABEL_142;
                }
                DxgkpConvertRects(
                  *((_DWORD *)a1 + 8),
                  *((_DWORD *)a1 + 9),
                  CurrentOrientation,
                  &v183,
                  *((_DWORD *)a1 + 19),
                  *((struct tagRECT **)a1 + 10),
                  v173);
                goto LABEL_38;
              }
LABEL_66:
              if ( v173 != (struct tagRECT *)v228 )
                operator delete[](v173);
              LODWORD(v9) = 0;
              if ( !v4 )
                LODWORD(v9) = v23;
              goto LABEL_70;
            }
          }
          v103 = WdLogNewEntry5_WdError(v29, v25, v27);
          *(_QWORD *)(v103 + 24) = -1073741811LL;
        }
        else
        {
          v99 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
          v100 = *((unsigned int *)a1 + 4);
          v101 = v99;
          v99[3] = v100;
          v99[4] = v10;
          v99[5] = (unsigned int)PsGetCurrentProcessSessionId(v100, v102);
          v103 = (__int64)v101;
          v101[6] = -1073741811LL;
        }
        WdLogEvent5_WdError(v103);
        LODWORD(v23) = -1073741811;
      }
      LODWORD(v9) = v23;
      goto LABEL_70;
    }
    v92 = WdLogNewEntry5_WdError(v14, v13, v16);
    *(_QWORD *)(v92 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v94, v93);
    v91 = v92;
    *(_QWORD *)(v92 + 32) = -1073741811LL;
  }
  else
  {
    v91 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v91 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v91);
  return 3221225485LL;
}
