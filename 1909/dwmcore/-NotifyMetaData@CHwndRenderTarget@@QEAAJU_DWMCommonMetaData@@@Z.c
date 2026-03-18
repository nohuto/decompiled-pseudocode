/*
 * XREFs of ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801A7908
 * Callers:
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x1801A6F8C (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::NotifyMetaData(__int64 a1, _OWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  _OWORD v13[3]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 176);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 488LL))(v4) )
    {
      v6 = *(__int64 **)(a1 + 176);
      v7 = a2[1];
      v13[0] = *a2;
      v8 = a2[2];
      v9 = *v6;
      v13[1] = v7;
      v13[2] = v8;
      v10 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v9 + 272))(v6, v13);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1D4u, 0LL);
    }
  }
  return v3;
}
