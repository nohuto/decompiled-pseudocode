/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x180204120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18007A150 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetAdvancedDirectFlipRestoreBuffer(
        CDWMSwapChain *this,
        char a2,
        struct ID3D11Texture2D **a3)
{
  int Buffer; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D11Texture2D *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( !*((_QWORD *)this + 65) )
  {
    v6 = -2003292412;
    v11 = 953;
    v8 = -2003292412;
    goto LABEL_16;
  }
  if ( a2 && *((_DWORD *)this + 134) == *((_DWORD *)this + 40) - 1 && !*((_BYTE *)this + 573) )
  {
    Buffer = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 53) + 232LL))(*((_QWORD *)this + 53), 0LL);
    v6 = Buffer;
    if ( Buffer < 0 )
    {
      v11 = 938;
LABEL_10:
      v8 = Buffer;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v8, v11);
      return v6;
    }
    *((_BYTE *)this + 573) = 1;
  }
  if ( *((_BYTE *)this + 573) )
    v7 = 0LL;
  else
    v7 = *((unsigned int *)this + 134);
  v9 = (*(__int64 (__fastcall **)(CDWMSwapChain *, __int64))(*(_QWORD *)this + 344LL))(this, v7);
  Buffer = CDWMSwapChain::GetBuffer(this, v9, &v12, &v13);
  v6 = Buffer;
  if ( Buffer < 0 )
  {
    v11 = 949;
    goto LABEL_10;
  }
  *a3 = v13;
  return v6;
}
