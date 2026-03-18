/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x1801642D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x1800E51B0 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetAdvancedDirectFlipRestoreBuffer(
        CDWMSwapChain *this,
        char a2,
        struct ID3D11Texture2D **a3)
{
  int Buffer; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D11Texture2D *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( !*((_QWORD *)this + 66) )
  {
    v6 = -2003292412;
    v8 = -2003292412;
    v11 = 1005;
    goto LABEL_16;
  }
  if ( a2 && *((_DWORD *)this + 136) == *((_DWORD *)this + 40) - 1 && !*((_BYTE *)this + 581) )
  {
    Buffer = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 53) + 232LL))(*((_QWORD *)this + 53), 0LL);
    v6 = Buffer;
    if ( Buffer < 0 )
    {
      v11 = 990;
LABEL_10:
      v8 = Buffer;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v8, v11, 0LL);
      return v6;
    }
    *((_BYTE *)this + 581) = 1;
  }
  if ( *((_BYTE *)this + 581) )
    v7 = 0LL;
  else
    v7 = *((unsigned int *)this + 136);
  v9 = (*(__int64 (__fastcall **)(CDWMSwapChain *, __int64))(*(_QWORD *)this + 368LL))(this, v7);
  Buffer = CDWMSwapChain::GetBuffer(this, v9, &v12, &v13);
  v6 = Buffer;
  if ( Buffer < 0 )
  {
    v11 = 1001;
    goto LABEL_10;
  }
  *a3 = v13;
  return v6;
}
