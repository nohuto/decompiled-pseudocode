/*
 * XREFs of ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800815AC
 * Callers:
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800814A4 (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x180024614 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x180081910 (-UnbindWindow@CHolographicSlate@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicSlate::Initialize(
        CHolographicSlate *this,
        HWND a2,
        struct CVisual *a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // r14
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // eax
  HANDLE hObject[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+70h] [rbp+8h] BYREF

  hObject[0] = 0LL;
  v5 = (_QWORD *)((char *)this + 24);
  v26 = 0;
  v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 3);
  v11 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v10 + 216LL))(
          v10,
          &GUID_adbab0af_769d_40da_a180_540472cbcc34,
          v5);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a4);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v14 = a5;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, a5);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 56LL))(*v5, (unsigned int)a2);
        v12 = v16;
        if ( v16 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
          v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 26)
                                                                    + 224LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                  *v5,
                  hObject);
          v12 = v17;
          if ( v17 >= 0 )
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                                                                     + 128LL))(
                    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                    hObject[0],
                    15LL,
                    &v26);
            v12 = v18;
            if ( v18 >= 0 )
            {
              v20 = CResource::WrapExistingResource(
                      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                      v19,
                      v26,
                      (__int64 *)this + 4);
              v12 = v20;
              if ( v20 >= 0 )
              {
                v21 = *((_QWORD *)a3 + 2);
                if ( v21 )
                  v22 = *(unsigned int *)(*(_QWORD *)(v21 + 16) + 24LL);
                else
                  v22 = 0LL;
                v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL)
                                                                         + 1120LL))(
                        *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
                        *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
                        v22);
                v12 = v23;
                if ( v23 >= 0 )
                {
                  *((_QWORD *)this + 5) = a3;
                  _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
                  *((_DWORD *)this + 12) = 0;
                  *((_DWORD *)this + 13) = 0;
                  *((_QWORD *)this + 2) = a2;
                  *((_DWORD *)this + 14) = a4;
                  *((_DWORD *)this + 15) = v14;
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x51u);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x4Du);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x4Bu);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x47u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x43u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x42u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x41u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x40u);
  }
  if ( hObject[0] )
  {
    CloseHandle(hObject[0]);
    hObject[0] = 0LL;
  }
  if ( v26 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
  if ( v12 < 0 )
    CHolographicSlate::UnbindWindow(this);
  return (unsigned int)v12;
}
