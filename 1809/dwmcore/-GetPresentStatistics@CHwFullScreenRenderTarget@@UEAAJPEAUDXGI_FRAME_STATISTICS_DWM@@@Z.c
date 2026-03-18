/*
 * XREFs of ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18005F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetPresentStatistics(
        CHwFullScreenRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rax
  char *v4; // rcx
  int v6; // ebx
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = (char *)this - 208;
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 848);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, &dword_1802925D8, 2u, v6, 0x302u);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v4 + 32LL))(v4) )
    {
      v6 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802925D8, 2u, -2003304442, 0x30Cu);
      v8 = -2003304442;
      v12 = -2003304442;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, &dword_1802925D8, 2u, -2003304307, 0x306u);
  }
  v12 = v6;
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18024C878, 1u, v6, 0x123u);
    goto LABEL_7;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS_DWM *))(**((_QWORD **)this + 4) + 320LL))(
         *((_QWORD *)this + 4),
         a2);
  v12 = v9;
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18024C878, 1u, v9, 0x125u);
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v8, 0, &v12);
  return v12;
}
