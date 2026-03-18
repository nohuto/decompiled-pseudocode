/*
 * XREFs of ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18015B01C
 * Callers:
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x18015A5FC (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::NotifyMetaData(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int128 v6; // xmm1
  __int64 *v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 176);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 480LL))(v4) )
    {
      v6 = *(_OWORD *)(a2 + 16);
      v7 = *(__int64 **)(a1 + 176);
      v13[0] = *(_OWORD *)a2;
      v8 = *(_OWORD *)(a2 + 32);
      v13[1] = v6;
      v9 = *v7;
      *(_QWORD *)&v6 = *(_QWORD *)(a2 + 48);
      v13[2] = v8;
      v14 = v6;
      v10 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v9 + 272))(v7, v13);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1CFu);
    }
  }
  return v3;
}
