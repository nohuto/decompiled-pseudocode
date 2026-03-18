/*
 * XREFs of ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180249748
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x1802486E0 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180155168 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249188 (-ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802491F0 (-ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802492F0 (-ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249378 (-ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802493E8 (-ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249490 (-ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249560 (-ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249684 (-ProcessAddWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802496E4 (-ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249B0C (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249BB0 (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249C28 (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249CB4 (-ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249D3C (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249DB0 (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249E38 (-ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249EC8 (-ProcessRemoveWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249F28 (-ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessResizeWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249F88 (-ProcessResizeWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249FE8 (-ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18024A050 (-ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18024A0BC (-ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessMessage(
        CHolographicClient *this,
        unsigned int a2,
        struct IUnknown *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7)
{
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  char *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  _OWORD *v18; // rax
  signed int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  RTL_SRWLOCK *v26; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  unsigned int v28; // edx
  __int64 v29; // rdx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  struct IUnknown *v34; // rax
  __int64 v35; // rdx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  struct IUnknown *v40; // [rsp+30h] [rbp-38h] BYREF
  __int128 v41; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int128 v42; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 > 0xF )
  {
    if ( a2 > 0x1A )
    {
      v35 = a2 - 27;
      if ( (_DWORD)v35 )
      {
        v36 = v35 - 2;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                if ( v39 != 1 )
                  goto LABEL_68;
                CHolographicClient::ProcessResizeWin32kTexture(this, a3);
              }
              else
              {
                CHolographicClient::ProcessRemoveWin32kTexture(this, a3);
              }
            }
            else
            {
              CHolographicClient::ProcessAddWin32kTexture(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessRemoveExclusiveModeProxy(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessAddExclusiveModeProxy(this, a3);
        }
      }
      else
      {
        LODWORD(v35) = (unsigned __int8)a4;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 224LL))(*((_QWORD *)this + 3), v35);
      }
    }
    else if ( a2 == 26 )
    {
      CHolographicClient::ProcessRemoveViewer(this, a3);
    }
    else
    {
      v28 = a2 - 18;
      if ( v28 )
      {
        v29 = v28 - 2;
        if ( (_DWORD)v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                v33 = v32 - 1;
                if ( v33 )
                {
                  if ( v33 != 1 )
                    goto LABEL_68;
                  CHolographicClient::ProcessUpdateViewer(this, a3);
                }
                else
                {
                  CHolographicClient::ProcessAddViewer(this, a3);
                }
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 136LL))(
                  *((_QWORD *)this + 3),
                  (unsigned int)a4);
              }
            }
            else
            {
              CHolographicClient::ProcessAddExclusivePresentData(this, a3);
            }
          }
          else
          {
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 26);
            *((_DWORD *)this + 60) = 0;
            DynArrayImpl<0>::ShrinkToSize((__int64)this + 216, 0x20u);
          }
        }
        else
        {
          v34 = (struct IUnknown *)*((_QWORD *)this + 26);
          if ( v34 != a3 )
          {
            if ( a3 )
            {
              ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *, void *))a3->lpVtbl->AddRef)(
                a3,
                v29,
                a3,
                a4);
              v34 = (struct IUnknown *)*((_QWORD *)this + 26);
            }
            v40 = v34;
            *((_QWORD *)this + 26) = a3;
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v40);
          }
        }
      }
      else if ( a4 )
      {
        SetEvent(a4);
      }
    }
  }
  else if ( a2 == 15 )
  {
    CHolographicClient::ProcessReleaseExclusiveSwapChain(this, a3);
  }
  else if ( a2 > 8 )
  {
    v21 = a2 - 9;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 != 1 )
                goto LABEL_68;
              v26 = (RTL_SRWLOCK *)&a3[50];
              AcquireSRWLockExclusive((PSRWLOCK)&a3[50]);
              lpVtbl = a3[10].lpVtbl;
              if ( lpVtbl )
              {
                a3[11].lpVtbl = lpVtbl;
                (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
                BYTE2(a3[9].lpVtbl) = 1;
              }
              ReleaseSRWLockExclusive(v26);
            }
            else
            {
              CHolographicClient::ProcessRemoveExclusiveView(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessAddExclusiveView(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessUpdateComposition(this, a3);
        }
      }
      else
      {
        CHolographicClient::ProcessRemoveComposition(this, a3);
      }
    }
    else
    {
      CHolographicClient::ProcessAddComposition(this, a3);
    }
  }
  else if ( a2 == 8 )
  {
    CHolographicClient::ProcessUpdateDisplay(this, a3);
  }
  else
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                {
                  CHolographicClient::ProcessRemoveDisplay(this, a3);
                  return;
                }
LABEL_68:
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x1AF,
                  (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
                  (const char *)a4);
                __debugbreak();
              }
              CHolographicClient::ProcessAddDisplay(this, a3);
            }
            else
            {
              v15 = (char *)this + 216;
              *((_QWORD *)&v41 + 1) = a5;
              v42 = __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6);
              v16 = *((unsigned int *)v15 + 6);
              LODWORD(v41) = (_DWORD)a4;
              v17 = v16 + 1;
              if ( (int)v16 + 1 < (unsigned int)v16 )
              {
                MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, 0x80070216, 0xB8u, 0LL);
              }
              else if ( v17 > *((_DWORD *)v15 + 5) )
              {
                v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 32, 1, &v41);
                if ( v19 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC3u, 0LL);
              }
              else
              {
                v18 = (_OWORD *)(*(_QWORD *)v15 + 32 * v16);
                *v18 = v41;
                v18[1] = v42;
                *((_DWORD *)v15 + 6) = v17;
              }
            }
          }
          else
          {
            CHolographicClient::ProcessResizeTexture(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessRemoveTexture(this, a3);
        }
      }
      else
      {
        CHolographicClient::ProcessAddTexture(this, a3);
      }
    }
    else
    {
      CHolographicClient::ProcessCreateTexture(this, a3);
    }
  }
}
