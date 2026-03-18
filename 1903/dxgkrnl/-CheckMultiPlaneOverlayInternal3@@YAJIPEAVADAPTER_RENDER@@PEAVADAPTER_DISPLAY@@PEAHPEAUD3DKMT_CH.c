/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022C438
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022CBE0 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C027F630 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C01F032C (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C01F1E6C (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C022B720 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C022B830 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C022B8B8 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C022B93C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022BAC4 (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022BD40 (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022BFA8 (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C022F360 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        unsigned int a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v19; // rbx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void **v28; // r14
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGALLOCATION **v36; // r12
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v47; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v48; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v49; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **p_pPlaneAttributes; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v51; // r8
  __int64 v52; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v53; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned int v57; // eax
  void **v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  unsigned int v62; // edi
  __int64 v63; // rax
  signed __int64 v64; // r12
  __int64 v65; // r8
  __int64 v66; // rax
  struct _KTHREAD **v67; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v68; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v70; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v71; // [rsp+48h] [rbp-B8h] BYREF
  ADAPTER_DISPLAY *v72; // [rsp+50h] [rbp-B0h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v73; // [rsp+58h] [rbp-A8h]
  struct ADAPTER_RENDER *v74; // [rsp+60h] [rbp-A0h]
  unsigned int v75; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v76; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  char v78; // [rsp+80h] [rbp-80h] BYREF
  int v79; // [rsp+98h] [rbp-68h]
  PVOID v80; // [rsp+A0h] [rbp-60h] BYREF
  char v81; // [rsp+A8h] [rbp-58h] BYREF
  int v82; // [rsp+C0h] [rbp-40h]
  PVOID v83; // [rsp+C8h] [rbp-38h] BYREF
  char v84; // [rsp+D0h] [rbp-30h] BYREF
  int v85; // [rsp+E8h] [rbp-18h]
  PVOID v86; // [rsp+F0h] [rbp-10h] BYREF
  char v87; // [rsp+F8h] [rbp-8h] BYREF
  int v88; // [rsp+110h] [rbp+10h]
  PVOID v89; // [rsp+120h] [rbp+20h] BYREF
  char v90; // [rsp+128h] [rbp+28h] BYREF
  int v91; // [rsp+1ACh] [rbp+ACh]
  PVOID v92; // [rsp+1B0h] [rbp+B0h] BYREF
  char v93; // [rsp+1B8h] [rbp+B8h] BYREF
  int v94; // [rsp+218h] [rbp+118h]
  PVOID v95; // [rsp+220h] [rbp+120h] BYREF
  char v96; // [rsp+228h] [rbp+128h] BYREF
  int v97; // [rsp+330h] [rbp+230h]

  *a4 = 0;
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((unsigned int *)a3 + 20);
  v74 = a2;
  v75 = a1;
  v8 = v7 * *(_DWORD *)(v6 + 2392);
  v72 = a3;
  v92 = 0LL;
  v94 = 0;
  v71 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                                                            &v92,
                                                            v8);
  if ( v71 )
  {
    v86 = 0LL;
    v88 = 0;
    v73 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                               &v86,
                                                               v8);
    v95 = 0LL;
    v97 = 0;
    v19 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(
                                                     &v95,
                                                     v8);
    if ( v19 )
    {
      v83 = 0LL;
      v85 = 0;
      v28 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&v83, v8);
      if ( v28 )
      {
        v80 = 0LL;
        v82 = 0;
        v36 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                         &v80,
                                         v8);
        if ( v36 )
        {
          v89 = 0LL;
          v91 = 0;
          v70 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                                                                                    &v89,
                                                                                    v7);
          if ( v70 )
          {
            P = 0LL;
            v79 = 0;
            v47 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                                       &P,
                                                                                       v7);
            v48 = v71;
            v76 = v47;
            if ( v8 )
            {
              v49 = v73;
              p_pPlaneAttributes = &v71->pPlaneAttributes;
              v51 = v71;
              v52 = v8;
              do
              {
                *v49 = v51++;
                *p_pPlaneAttributes = v19;
                ++v49;
                ++v19;
                p_pPlaneAttributes += 4;
                --v52;
              }
              while ( v52 );
            }
            v53 = v70;
            if ( (_DWORD)v7 )
            {
              v54 = v70;
              v55 = v7;
              do
              {
                *v47++ = v54++;
                --v55;
              }
              while ( v55 );
            }
            LODWORD(v70) = 0;
            LODWORD(v71) = 0;
            v56 = *((_QWORD *)v74 + 2);
            if ( *(_QWORD *)(v56 + 888) && *(_BYTE *)(v56 + 2498) )
              v57 = -1;
            else
              v57 = v75;
            ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
              (struct _KTHREAD **)v72,
              v57,
              v8,
              v36,
              (unsigned int *)&v70,
              v48,
              (unsigned int *)&v71,
              v53);
            v60 = (unsigned int)v70;
            if ( (unsigned int)v70 > v8 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v59, v58);
              *(_QWORD *)(v61 + 24) = 9517LL;
              WdLogEvent5_WdAssertion(v61);
            }
            v62 = (unsigned int)v71;
            if ( (unsigned int)v71 > (unsigned int)v7 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v59, v58);
              *(_QWORD *)(v63 + 24) = 9518LL;
              WdLogEvent5_WdAssertion(v63);
            }
            if ( (_DWORD)v60 )
            {
              v58 = v28;
              v64 = (char *)v36 - (char *)v28;
              v65 = v60;
              do
              {
                *v58 = *(void **)((*(_QWORD **)((char *)v58 + v64))[6] + 16LL);
                ++v58;
                --v65;
              }
              while ( v65 );
            }
            v66 = *((_QWORD *)v74 + 2);
            if ( *(_QWORD *)(v66 + 888) && *(_BYTE *)(v66 + 2498) )
            {
              v67 = (struct _KTHREAD **)v72;
              v68 = v73;
              CallCheckMultiPlaneOverlaySupport3DDI(v60, (unsigned __int64)v73, v28, v62, v76, v72, a4, a5);
            }
            else
            {
              v67 = (struct _KTHREAD **)v72;
              v68 = v73;
              if ( (unsigned int)v60 <= *(_DWORD *)(v66 + 2392) )
              {
                if ( *(_QWORD *)(v66 + 856) )
                  CallCheckMultiPlaneOverlaySupport2DDI(
                    (unsigned int)v60,
                    (unsigned __int64)v73,
                    (const GUID *)v28,
                    v72,
                    a4,
                    a5);
                else
                  CallCheckMultiPlaneOverlaySupport1DDI(
                    (unsigned int)v60,
                    (unsigned __int64)v73,
                    (GUID *)v28,
                    v72,
                    a4,
                    a5);
              }
            }
            if ( *a4 == 1
              && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(v67, (__int64)v58)
              && !*(_BYTE *)(*((_QWORD *)v74 + 2) + 2500LL) )
            {
              *a4 = 0;
              a5->Value = a5->Value & 0xFFFFFFE0 | 0x10;
            }
            LogCheckMutiplaneOverlaySupport(0, *a4, v60, v68, v28, v62, v76, v74);
            v14 = 0;
            if ( P != &v78 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v79 = 0;
          }
          else
          {
            v14 = -1073741801;
            v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
            v44[3] = v7;
            v44[4] = -1073741801LL;
            v44[5] = PsGetCurrentProcess(v46, v45);
            WdLogEvent5_WdWarning(v44);
          }
          if ( v89 != &v90 && v89 )
            ExFreePoolWithTag(v89, 0);
          v89 = 0LL;
          v91 = 0;
        }
        else
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
          v38 = v8;
          v14 = -1073741801;
          v39 = v37;
          v37[3] = v38;
          v37[4] = -1073741801LL;
          v37[5] = PsGetCurrentProcess(v38, v40);
          WdLogEvent5_WdWarning(v39);
        }
        if ( v80 != &v81 && v80 )
          ExFreePoolWithTag(v80, 0);
        v80 = 0LL;
        v82 = 0;
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v30 = v8;
        v14 = -1073741801;
        v31 = v29;
        v29[3] = v30;
        v29[4] = -1073741801LL;
        v29[5] = PsGetCurrentProcess(v30, v32);
        WdLogEvent5_WdWarning(v31);
      }
      if ( v83 != &v84 && v83 )
        ExFreePoolWithTag(v83, 0);
      v83 = 0LL;
      v85 = 0;
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v20);
      v22 = v8;
      v14 = -1073741801;
      v23 = v21;
      v21[3] = v22;
      v21[4] = -1073741801LL;
      v21[5] = PsGetCurrentProcess(v22, v24);
      WdLogEvent5_WdWarning(v23);
    }
    if ( v95 != &v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( v86 != &v87 && v86 )
      ExFreePoolWithTag(v86, 0);
    v86 = 0LL;
    v88 = 0;
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13 = v8;
    v14 = -1073741801;
    v15 = v12;
    v12[3] = v13;
    v12[4] = -1073741801LL;
    v12[5] = PsGetCurrentProcess(v13, v16);
    WdLogEvent5_WdWarning(v15);
  }
  if ( v92 != &v93 && v92 )
    ExFreePoolWithTag(v92, 0);
  return v14;
}
