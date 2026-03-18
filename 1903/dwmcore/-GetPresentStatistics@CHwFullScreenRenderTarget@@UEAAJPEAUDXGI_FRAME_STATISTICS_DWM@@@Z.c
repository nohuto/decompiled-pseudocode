/*
 * XREFs of ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800BC2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetPresentStatistics(
        CHwFullScreenRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rax
  char *v4; // rcx
  signed int v6; // ebx
  __int64 v7; // rcx
  int v8; // edi
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = (char *)this - 144;
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 880);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, &dword_1802C0180, 2u, v6, 0x302u, 0LL);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v4 + 32LL))(v4) )
    {
      v6 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802C0180, 2u, 0x88980006, 0x30Cu, 0LL);
      v8 = -2003304442;
      v12 = -2003304442;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, &dword_1802C0180, 2u, 0x8898008D, 0x306u, 0LL);
  }
  v12 = v6;
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802920EC, 1u, v6, 0x144u, 0LL);
    goto LABEL_7;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS_DWM *))(**((_QWORD **)this + 4) + 344LL))(
         *((_QWORD *)this + 4),
         a2);
  v12 = v9;
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802920EC, 1u, v9, 0x146u, 0LL);
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v8, 0, &v12);
  return v12;
}
