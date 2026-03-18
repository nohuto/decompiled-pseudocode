/*
 * XREFs of ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180212BD4
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x180211CD4 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212708 (-ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212770 (-ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212868 (-ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802128D4 (-ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212974 (-ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212A50 (-ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212B70 (-ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212F58 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212FFC (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802130D0 (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18021315C (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802131D0 (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180213258 (-ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802132E8 (-ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x180213348 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 *     ?ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802133C8 (-ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180213430 (-ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18021349C (-ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
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
  char *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  _OWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  RTL_SRWLOCK *v25; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // rdx
  struct IUnknown *v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rdx
  struct IUnknown *v37; // [rsp+30h] [rbp-38h] BYREF
  __int128 v38; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int128 v39; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 > 0xE )
  {
    if ( a2 > 0x16 )
    {
      v33 = a2 - 23;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( (_DWORD)v36 )
            {
              if ( (_DWORD)v36 != 1 )
                goto LABEL_63;
              LOBYTE(v36) = (_BYTE)a4;
              (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 192LL))(*((_QWORD *)this + 3), v36);
            }
            else
            {
              CHolographicClient::ProcessRemoveViewer(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessUpdateViewer(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessAddViewer(this, a3);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 120LL))(
          *((_QWORD *)this + 3),
          (unsigned int)a4);
      }
    }
    else if ( a2 == 22 )
    {
      CHolographicClient::ProcessAddExclusivePresentData(this, a3);
    }
    else
    {
      v27 = a2 - 15;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 2;
              if ( (_DWORD)v31 )
              {
                if ( (_DWORD)v31 != 1 )
                  goto LABEL_63;
                Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 24);
                *((_DWORD *)this + 56) = 0;
                DynArrayImpl<0>::ShrinkToSize((__int64)this + 200, 0x20u);
              }
              else
              {
                v32 = (struct IUnknown *)*((_QWORD *)this + 24);
                if ( v32 != a3 )
                {
                  if ( a3 )
                  {
                    ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *, void *))a3->lpVtbl->AddRef)(
                      a3,
                      v31,
                      a3,
                      a4);
                    v32 = (struct IUnknown *)*((_QWORD *)this + 24);
                  }
                  v37 = v32;
                  *((_QWORD *)this + 24) = a3;
                  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v37);
                }
              }
            }
            else if ( a4 )
            {
              SetEvent(a4);
            }
          }
          else
          {
            *((_DWORD *)this + 43) = (_DWORD)a4;
          }
        }
        else
        {
          CHolographicClient::ProcessSetActiveExclusiveView(this, (unsigned int)a4);
        }
      }
      else
      {
        CHolographicClient::ProcessReleaseExclusiveSwapChain(this, a3);
      }
    }
  }
  else if ( a2 == 14 )
  {
    v25 = (RTL_SRWLOCK *)&a3[50];
    AcquireSRWLockExclusive((PSRWLOCK)&a3[50]);
    lpVtbl = a3[10].lpVtbl;
    if ( lpVtbl )
    {
      a3[11].lpVtbl = lpVtbl;
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
      BYTE2(a3[9].lpVtbl) = 1;
    }
    ReleaseSRWLockExclusive(v25);
  }
  else if ( a2 > 7 )
  {
    v20 = a2 - 8;
    if ( v20 )
    {
      v21 = v20 - 1;
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
              if ( v24 != 1 )
                goto LABEL_63;
              CHolographicClient::ProcessRemoveExclusiveView(this, a3);
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
    else
    {
      CHolographicClient::ProcessUpdateDisplay(this, a3);
    }
  }
  else if ( a2 == 7 )
  {
    CHolographicClient::ProcessRemoveDisplay(this, a3);
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
              if ( v13 == 1 )
              {
                CHolographicClient::ProcessAddDisplay(this, a3);
                return;
              }
LABEL_63:
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x19B,
                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
                (const char *)a4);
              __debugbreak();
            }
            v14 = (char *)this + 200;
            *((_QWORD *)&v38 + 1) = a5;
            v39 = __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6);
            LODWORD(v38) = (_DWORD)a4;
            v15 = *((unsigned int *)v14 + 6);
            v16 = v15 + 1;
            if ( (int)v15 + 1 < (unsigned int)v15 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                (__int64)v14,
                0LL,
                0,
                (int)v15 + 1 < (unsigned int)v15 ? 0x80070216 : 0,
                0xB5u);
            }
            else if ( v16 > *((_DWORD *)v14 + 5) )
            {
              v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14, 32, 1, &v38);
              if ( v18 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xC0u);
            }
            else
            {
              v17 = (_OWORD *)(*(_QWORD *)v14 + 32 * v15);
              *v17 = v38;
              v17[1] = v39;
              *((_DWORD *)v14 + 6) = v16;
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
