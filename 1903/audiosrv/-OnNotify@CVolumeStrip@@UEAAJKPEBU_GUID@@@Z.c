/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800C9A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056510 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x1800C5504 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     WPP_SF_g @ 0x1800C8930 (WPP_SF_g.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800C9490 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJAEAVCL.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800C961C (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     WPP_SF__guid_ @ 0x1800CA330 (WPP_SF__guid_.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  char *v10; // rdi
  unsigned int v11; // esi
  char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r9
  GUID *v16; // rax
  int v17; // eax
  float *v18; // r14
  int v19; // edx
  CAudioSessionManager *v20; // rcx
  _OWORD *v21; // r12
  int v22[2]; // [rsp+20h] [rbp-38h] BYREF
  char *v23; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float *Src; // [rsp+70h] [rbp+18h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      (__int64)&WPP_1af60ca396c231183a59f5c311004dee_Traceguids,
      (char *)this - 8);
  }
  if ( !a3 )
    goto LABEL_9;
  result = *(_QWORD *)&a3->Data1 - PBM_INITIATED_ENDPOINT_VOLUME_CHANGE;
  if ( *(_QWORD *)&a3->Data1 == PBM_INITIATED_ENDPOINT_VOLUME_CHANGE )
    result = *(_QWORD *)a3->Data4 - 0x5936EC8617E85EAALL;
  if ( result )
  {
LABEL_9:
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(*((_QWORD *)this + 28) + 2 * v6) );
    v7 = 2 * v6 + 2;
    v8 = 4 * *(_DWORD *)(*((_QWORD *)this + 30) + 124LL);
    v9 = v7 + v8 + 56;
    v10 = (char *)operator new[](v8 + 28, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v10 )
    {
      v11 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)0x8007000ELL);
      return v11;
    }
    v12 = (char *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      memset_0(v12, 0, v9);
      *(_DWORD *)v13 = v9;
      v16 = &GUID_00000000_0000_0000_0000_000000000000;
      *((_DWORD *)v13 + 1) = 128;
      if ( a3 )
        v16 = a3;
      *(GUID *)(v13 + 24) = *v16;
      *((_DWORD *)v13 + 13) = v7;
      v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 31) + 72LL))(
              *((_QWORD *)this + 31),
              v13 + 40);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v18 = (float *)(v13 + 44);
        v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 30) + 112LL))(
                *((_QWORD *)this + 30),
                v13 + 44);
        v11 = v17;
        if ( v17 >= 0 )
        {
          v19 = *(_DWORD *)(*((_QWORD *)this + 30) + 124LL);
          *((_DWORD *)v13 + 12) = v19;
          Src = (float *)&v13[v7 + 56];
          CVolumeControlBase::FillLevels(*((CVolumeControlBase **)this + 30), v19, Src);
          v17 = StringCbCopyW(v13 + 56, v7, *((char **)this + 28));
          v11 = v17;
          if ( v17 >= 0 )
          {
            v20 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control )
              goto LABEL_43;
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x11u,
                (__int64)&WPP_1af60ca396c231183a59f5c311004dee_Traceguids,
                (char *)this - 8);
              v20 = WPP_GLOBAL_Control;
            }
            if ( v20 == (CAudioSessionManager *)&WPP_GLOBAL_Control )
            {
LABEL_43:
              v21 = v13 + 24;
            }
            else
            {
              v21 = v13 + 24;
              if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
              {
                WPP_SF__guid_(*((_QWORD *)v20 + 2), 18LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, v13 + 24);
                v20 = WPP_GLOBAL_Control;
              }
              if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
              {
                if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
                {
                  WPP_SF_S(
                    *((_QWORD *)v20 + 2),
                    0x13u,
                    (__int64)&WPP_1af60ca396c231183a59f5c311004dee_Traceguids,
                    (const wchar_t *)v13 + 28);
                  v20 = WPP_GLOBAL_Control;
                }
                if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
                {
                  if ( (*((_DWORD *)v20 + 7) & 0x10000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)v20 + 2),
                      0x14u,
                      (__int64)&WPP_1af60ca396c231183a59f5c311004dee_Traceguids,
                      *((_DWORD *)v13 + 10));
                    v20 = WPP_GLOBAL_Control;
                  }
                  if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)v20 + 7) & 0x10000) != 0
                    && *((_BYTE *)v20 + 25) >= 4u )
                  {
                    WPP_SF_g(
                      *((_QWORD *)v20 + 2),
                      0x15u,
                      (__int64)&WPP_1af60ca396c231183a59f5c311004dee_Traceguids,
                      *v18);
                  }
                }
              }
            }
            v23 = v13;
            *(_QWORD *)v22 = &CMasterVolumeNotification::`vftable';
            v17 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry(
                    (LPCRITICAL_SECTION)((char *)this + 16),
                    (void (__fastcall ***)(_QWORD, _QWORD))v22);
            v11 = v17;
            if ( v17 >= 0 )
            {
              *(_OWORD *)v10 = *v21;
              *((_DWORD *)v10 + 6) = *(_DWORD *)(*((_QWORD *)this + 30) + 124LL);
              *((_DWORD *)v10 + 4) = *((_DWORD *)v13 + 10);
              *((float *)v10 + 5) = *v18;
              memcpy_0(v10 + 28, Src, v8);
              v23 = v10;
              *(_QWORD *)v22 = &CInternalVolumeNotification::`vftable';
              v17 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry(
                      (LPCRITICAL_SECTION)this + 3,
                      (void (__fastcall ***)(_QWORD, __int64 *))v22);
              v11 = v17;
              if ( v17 >= 0 )
              {
                v11 = 0;
                goto LABEL_51;
              }
              v14 = 528LL;
            }
            else
            {
              v14 = 520LL;
            }
          }
          else
          {
            v14 = 513LL;
          }
        }
        else
        {
          v14 = 507LL;
        }
      }
      else
      {
        v14 = 506LL;
      }
      v15 = (unsigned int)v17;
    }
    else
    {
      v11 = -2147024882;
      v14 = 497LL;
      v15 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v15);
LABEL_51:
    if ( v13 )
      operator delete(v13, (const struct std::nothrow_t *)0x40);
    operator delete(v10, (const struct std::nothrow_t *)0x20);
    return v11;
  }
  return result;
}
