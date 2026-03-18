/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000CF10
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000CCE8 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0008380 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D3C8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0019E8C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001B568 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C001BA0C (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0053490 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 *     DxgkGetPresentHistory @ 0x1C00DB730 (DxgkGetPresentHistory.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r13
  unsigned int v3; // ebp
  char *v4; // rax
  unsigned int v5; // r14d
  struct CLegacyTokenBuffer **v6; // r15
  int v8; // ebx
  struct CLegacyTokenBuffer *v9; // rdi
  int PresentHistory; // eax
  LONG v11; // r14d
  unsigned int *v12; // rdi
  unsigned int v13; // ebp
  int v14; // r12d
  char *v15; // r15
  __int64 v16; // r13
  unsigned int v17; // ebx
  int v18; // r14d
  unsigned int v19; // eax
  __int64 v20; // rax
  struct CLegacyTokenBuffer *v21; // rcx
  void *v22; // rcx
  _QWORD *v24; // rcx
  CTokenManager *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v29; // rax
  struct DXGGLOBAL *v30; // rax
  char v31; // [rsp+20h] [rbp-888h]
  bool v32; // [rsp+21h] [rbp-887h] BYREF
  int v33; // [rsp+24h] [rbp-884h]
  int v34; // [rsp+28h] [rbp-880h]
  unsigned int v35; // [rsp+2Ch] [rbp-87Ch]
  LONG PreviousState; // [rsp+30h] [rbp-878h] BYREF
  int v37; // [rsp+34h] [rbp-874h]
  void *v38; // [rsp+38h] [rbp-870h]
  _DWORD v39[2]; // [rsp+40h] [rbp-868h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-860h]
  _BYTE *v41; // [rsp+50h] [rbp-858h]
  unsigned int v42; // [rsp+58h] [rbp-850h]
  _BYTE Src[2048]; // [rsp+60h] [rbp-848h] BYREF

  v2 = 1;
  v35 = a2;
  v3 = 640;
  v31 = 1;
  v34 = 640;
  v4 = (char *)this + 88;
  v5 = a2;
  v6 = (struct CLegacyTokenBuffer **)((char *)this + 184);
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v8 = 0;
    *((_QWORD *)this + 12) = KeGetCurrentThread();
    if ( !*v6 )
    {
      v24 = (_QWORD *)((char *)this + 160);
      v25 = (CTokenManager *)*((_QWORD *)this + 20);
      if ( v25 != (CTokenManager *)((char *)this + 160) )
      {
        if ( *((_QWORD **)v25 + 1) != v24 || (v26 = *(_QWORD *)v25, *(CTokenManager **)(*(_QWORD *)v25 + 8LL) != v25) )
          __fastfail(3u);
        *v24 = v26;
        *(_QWORD *)(v26 + 8) = v24;
        --*((_DWORD *)this + 44);
        *v6 = v25;
        goto LABEL_4;
      }
      v8 = CLegacyTokenBuffer::Create(v6);
    }
    if ( v8 < 0 )
      goto LABEL_21;
LABEL_4:
    v9 = *v6;
    v8 = 0;
    if ( v3 > *((_DWORD *)*v6 + 526) )
      v8 = CLegacyTokenBuffer::Grow(*v6);
    v38 = (void *)*((_QWORD *)v9 + 262);
    if ( v8 >= 0 )
    {
      v39[1] = *((_DWORD *)v9 + 526);
      v39[0] = v5;
      v41 = Src;
      PresentHistory = DxgkGetPresentHistory(v39, 0LL);
      v37 = PresentHistory;
      v8 = PresentHistory;
      if ( !PresentHistory )
      {
        v31 = 0;
LABEL_9:
        v11 = v42;
        v12 = (unsigned int *)Src;
        v13 = 0;
        PreviousState = v42;
        v14 = 0;
        v33 = 0;
        if ( v42 )
        {
          v15 = (char *)v38;
          v16 = v42;
          v17 = v35;
          v18 = 0;
          do
          {
            v19 = *v12;
            if ( *v12 == 7 )
            {
              CTokenManager::ResolveCompositionHandleToken(
                this,
                (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)v12 + 2);
            }
            else
            {
              switch ( v19 )
              {
                case 8u:
                  Global = DXGGLOBAL::GetGlobal();
                  (*(void (**)(void))(*((_QWORD *)Global + 2541) + 104LL))();
                  v29 = DXGGLOBAL::GetGlobal();
                  (**((void (__fastcall ***)(_QWORD))v29 + 2541))(*((_QWORD *)v12 + 2));
                  v30 = DXGGLOBAL::GetGlobal();
                  (*(void (**)(void))(*((_QWORD *)v30 + 2541) + 144LL))();
                  break;
                case 2u:
                  if ( (v12[15] & 0x2000) != 0 && (v12[15] & 0xC000) == 0x4000 )
                  {
                    CTokenManager::CompleteIndendentFlipToken(
                      this,
                      *((_QWORD *)v12 + 1),
                      (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v12 + 4),
                      v17);
                    ++v18;
                  }
                  else
                  {
                    v27 = *((_QWORD *)v12 + 1);
                    v32 = 0;
                    CTokenManager::CreateFlipExToken(
                      this,
                      v27,
                      (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v12 + 4),
                      &v32);
                    if ( v32 )
                      ++v18;
                  }
                  break;
                case 9u:
                  CTokenManager::CompleteFlipManagerToken(this, *((void **)v12 + 2));
                  break;
                default:
                  memmove(v15, v12, v12[1]);
                  v20 = v12[1];
                  ++v14;
                  v13 += v20;
                  v15 += v20;
                  break;
              }
            }
            v12 = (unsigned int *)((char *)v12 + v12[1]);
            --v16;
          }
          while ( v16 );
          v8 = v37;
          v6 = (struct CLegacyTokenBuffer **)((char *)this + 184);
          v33 = v18;
          v11 = PreviousState;
        }
        v21 = *v6;
        *(_DWORD *)(*((_QWORD *)*v6 + 261) + 16LL) += v14;
        *(_DWORD *)(*((_QWORD *)v21 + 261) + 2068LL) += v13;
        *((_DWORD *)v21 + 526) -= v13;
        *((_QWORD *)v21 + 262) += v13;
        if ( v11 != v33 )
        {
          v22 = (void *)*((_QWORD *)this + 7);
          PreviousState = 0;
          ZwSetEvent(v22, &PreviousState);
        }
        v5 = v35;
        v3 = v34;
        v2 = v31;
        goto LABEL_21;
      }
      if ( PresentHistory != -1073741789 )
      {
        if ( PresentHistory != 261 )
        {
          v2 = 0;
          v31 = 0;
          goto LABEL_21;
        }
        goto LABEL_9;
      }
      v3 = 640;
      if ( v40 > 0x280 )
        v3 = v40;
      v8 = 0;
      v34 = v3;
    }
LABEL_21:
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
    if ( v8 < 0 || !v2 )
      return (unsigned int)v8;
    v4 = (char *)this + 88;
  }
}
