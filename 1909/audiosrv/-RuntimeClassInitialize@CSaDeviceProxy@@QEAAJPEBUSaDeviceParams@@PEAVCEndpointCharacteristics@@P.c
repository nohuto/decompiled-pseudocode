/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@@Z @ 0x180039EB0
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180039810 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180014DE0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18003AE78 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800EDBCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_Sddd @ 0x1800F15FC (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        CSaDeviceProxy *this,
        IMalloc *a2,
        struct CEndpointCharacteristics *a3,
        struct IDeviceGraphObjectsStore *a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned int a6,
        struct SaDeviceResourceParams *a7)
{
  struct IDeviceGraphObjectsStore *v11; // rcx
  unsigned __int128 v12; // rax
  __int64 v13; // r15
  SaDeviceParams *v14; // rbx
  struct IMallocVtbl *v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // r9
  int v19; // r12d
  int v20; // r10d
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  char *v23; // rsi
  __int16 v24; // cx
  unsigned __int64 v25; // r14
  LPMALLOC v26; // r14
  struct IMallocVtbl *v27; // rax
  __int64 Release_low; // rdi
  LPVOID v29; // rsi
  size_t v30; // r14
  struct IMallocVtbl *v31; // rax
  __int64 v32; // rdi
  LPVOID v33; // rsi
  size_t v34; // rbx
  __int64 v35; // rdx
  enum _AUDCLNT_SHAREMODE v36; // r15d
  int v37; // eax
  struct IAudioDeviceGraph *v38; // rcx
  struct IAudioDeviceGraph *v39; // rbx
  IMalloc *v40; // rax
  IMalloc *v41; // rsi
  struct SaDeviceResourceParams *v42; // r14
  int v43; // edi
  __int64 *v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // r15
  struct IAudioDeviceGraph *v47; // rcx
  struct IMallocVtbl *lpVtbl; // r8
  DWORD LastError; // ebx
  const struct _GUID *v51; // [rsp+58h] [rbp-59h]
  LPMALLOC ppMalloc[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v53; // [rsp+80h] [rbp-31h]
  struct _GUID v54; // [rsp+90h] [rbp-21h] BYREF
  struct _GUID v55; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]
  struct IAudioDeviceGraph *v57; // [rsp+100h] [rbp+4Fh] BYREF
  LPMALLOC v58; // [rsp+108h] [rbp+57h] BYREF
  struct CEndpointCharacteristics *v59; // [rsp+110h] [rbp+5Fh]
  LPVOID pv; // [rsp+118h] [rbp+67h] BYREF

  v59 = a3;
  v58 = a2;
  v53 = -2LL;
  v11 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)this + 14);
  if ( v11 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)a4 + 8LL))(a4);
      v11 = (struct IDeviceGraphObjectsStore *)*((_QWORD *)this + 14);
    }
    *((_QWORD *)this + 14) = a4;
    if ( v11 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a3 + 2) + 40LL))(*((_QWORD *)a3 + 2), &pv);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    lpVtbl = a2[2].lpVtbl;
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      WORD1(lpVtbl->QueryInterface),
      (_DWORD)lpVtbl,
      (_DWORD)pv,
      HIDWORD(lpVtbl->QueryInterface),
      WORD1(lpVtbl->QueryInterface),
      HIWORD(lpVtbl->AddRef));
  }
  *(_QWORD *)&v12 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( (_QWORD)v12 )
    memset_0((void *)v12, 0, 0x60uLL);
  else
    v13 = 0LL;
  v14 = (SaDeviceParams *)v13;
  *(_QWORD *)&v54.Data1 = v13;
  v15 = a2->lpVtbl;
  v16 = -1LL;
  do
    ++v16;
  while ( *((_WORD *)&v15->QueryInterface + v16) );
  *(_QWORD *)v13 = 0LL;
  v17 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    v19 = -2147024362;
  }
  else
  {
    v12 = v17 * (unsigned __int128)2uLL;
    if ( !is_mul_ok(v17, 2uLL) )
    {
      v19 = -2147024362;
      goto LABEL_27;
    }
    *(_QWORD *)&v12 = CoTaskMemAlloc(2 * v17);
    v18 = v12;
    *(_QWORD *)v13 = v12;
    if ( (_QWORD)v12 )
    {
      v19 = 0;
      if ( v17 > 0x7FFFFFFF )
      {
        if ( v16 == -1LL )
          goto LABEL_27;
      }
      else
      {
        if ( v16 < 0x7FFFFFFF )
        {
          if ( !v15 )
          {
            v15 = (struct IMallocVtbl *)&unk_180161DC4;
            v16 = 0LL;
          }
          if ( v17 )
          {
            *(_QWORD *)&v12 = v17;
            *((_QWORD *)&v12 + 1) = v18;
            v20 = 0;
            v21 = 0LL;
            v22 = v16 - v17;
            v23 = (char *)v15 - v18;
            while ( v22 + (_QWORD)v12 )
            {
              v24 = *(_WORD *)&v23[*((_QWORD *)&v12 + 1)];
              if ( !v24 )
                break;
              **((_WORD **)&v12 + 1) = v24;
              *((_QWORD *)&v12 + 1) += 2LL;
              ++v21;
              *(_QWORD *)&v12 = v12 - 1;
              if ( !(_QWORD)v12 )
              {
                *((_QWORD *)&v12 + 1) -= 2LL;
                --v21;
                v20 = -2147024774;
                break;
              }
            }
            **((_WORD **)&v12 + 1) = 0;
            v25 = v17 - v21;
            if ( v20 >= 0 && v25 > 1 && 2 * v25 > 2 )
              memset_0((void *)(v18 + 2 * (v21 + 1)), 0, 2 * v25 - 2);
          }
LABEL_27:
          if ( v19 < 0 )
            goto LABEL_39;
          v26 = v58;
          v27 = v58[2].lpVtbl;
          if ( v27 )
          {
            Release_low = LOWORD(v27->Release);
            v29 = CoTaskMemAlloc(Release_low + 18);
            *(_QWORD *)(v13 + 16) = v29;
            if ( !v29 )
            {
LABEL_70:
              v19 = -2147024882;
              goto LABEL_39;
            }
            v30 = 0LL;
            if ( CoGetMalloc(1u, ppMalloc) >= 0 )
            {
              v30 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc[0]->lpVtbl->GetSize)(ppMalloc[0], v29);
              ((void (__fastcall *)(LPMALLOC))ppMalloc[0]->lpVtbl->Release)(ppMalloc[0]);
            }
            memset_0(*(void **)(v13 + 16), 0, v30);
            v19 = 0;
            v26 = v58;
            memcpy_0(*(void **)(v13 + 16), v58[2].lpVtbl, Release_low + 18);
          }
          v31 = v26[3].lpVtbl;
          if ( !v31 )
          {
LABEL_38:
            *(_OWORD *)(v13 + 64) = *(_OWORD *)&v26[8].lpVtbl;
            *(_OWORD *)(v13 + 48) = *(_OWORD *)&v26[6].lpVtbl;
            *(_DWORD *)(v13 + 8) = v26[1].lpVtbl;
            *(IMalloc *)(v13 + 32) = v26[4];
            *(IMalloc *)(v13 + 40) = v26[5];
            *(_OWORD *)(v13 + 80) = *(_OWORD *)&v26[10].lpVtbl;
            v14 = 0LL;
            *((_QWORD *)this + 6) = v13;
            goto LABEL_39;
          }
          v32 = LOWORD(v31->Release);
          v33 = CoTaskMemAlloc(v32 + 18);
          *(_QWORD *)(v13 + 24) = v33;
          if ( v33 )
          {
            v34 = 0LL;
            if ( CoGetMalloc(1u, &v58) >= 0 )
            {
              v34 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))v58->lpVtbl->GetSize)(v58, v33);
              ((void (__fastcall *)(LPMALLOC))v58->lpVtbl->Release)(v58);
            }
            memset_0(*(void **)(v13 + 24), 0, v34);
            v19 = 0;
            memcpy_0(*(void **)(v13 + 24), v26[3].lpVtbl, v32 + 18);
            goto LABEL_38;
          }
          goto LABEL_70;
        }
        if ( v16 == -1LL )
          goto LABEL_27;
      }
      *(_WORD *)v12 = 0;
      goto LABEL_27;
    }
    v19 = -2147024882;
  }
LABEL_39:
  if ( v14 )
    SaDeviceParams::`scalar deleting destructor'(v14, DWORD2(v12));
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x807,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v19);
  }
  else
  {
    v57 = 0LL;
    v35 = *((_QWORD *)this + 6);
    v54 = *(struct _GUID *)(v35 + 80);
    *(_OWORD *)ppMalloc = *(_OWORD *)(v35 + 64);
    v55 = *(struct _GUID *)(v35 + 48);
    v36 = a5;
    v37 = CreateSaDevice(
            v59,
            a5,
            a6,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(v35 + 8),
            &v55,
            (struct _GUID *)ppMalloc,
            *(_QWORD *)(v35 + 32),
            *(_QWORD *)(v35 + 40),
            *(struct tWAVEFORMATEX **)(v35 + 16),
            *(const struct tWAVEFORMATEX **)(v35 + 24),
            &v54,
            v51,
            &v57);
    v19 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x80C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v37);
    }
    else
    {
      v38 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 10);
      v39 = v57;
      if ( v38 != v57 )
      {
        if ( v57 )
        {
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v57 + 8LL))(v57);
          v38 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 10);
        }
        *((_QWORD *)this + 10) = v39;
        if ( v38 )
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v40 = (IMalloc *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v41 = v40;
      v58 = v40;
      v42 = a7;
      if ( v40 )
      {
        v43 = *((_DWORD *)a7 + 2);
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v40, 0, 0);
        v59 = (struct CEndpointCharacteristics *)&v41[5];
        v19 = 0;
        v41[5].lpVtbl = 0LL;
        v41[6].lpVtbl = 0LL;
        v41[5].lpVtbl = (struct IMallocVtbl *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
        LODWORD(v41[7].lpVtbl) = v43;
      }
      else
      {
        v19 = 0;
        v41 = 0LL;
      }
      *((_QWORD *)this + 7) = v41;
      if ( v41 )
      {
        *((_BYTE *)this + 72) = v36 == AUDCLNT_SHAREMODE_EXCLUSIVE;
        v44 = (__int64 *)((char *)this + 64);
        if ( (CSaDeviceProxy *)((char *)this + 64) != v42 )
        {
          v45 = *(_QWORD *)v42;
          v46 = *v44;
          if ( *v44 )
          {
            LastError = GetLastError();
            (*(void (__fastcall **)(struct IAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
              g_AudioResourceManager,
              v46);
            SetLastError(LastError);
          }
          *v44 = v45;
          *(_QWORD *)v42 = 0LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x811,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)0x8007000ELL);
        v19 = -2147024882;
      }
    }
    v47 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(struct IAudioDeviceGraph *, _QWORD))(*(_QWORD *)v47 + 16LL))(v47, *(_QWORD *)v47);
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v19;
}
