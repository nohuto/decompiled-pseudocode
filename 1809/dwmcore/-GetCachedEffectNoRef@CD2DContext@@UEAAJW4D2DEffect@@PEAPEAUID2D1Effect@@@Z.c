/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18001FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v5 = *(_DWORD *)(a1 + 848);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v5, 0x743u);
  }
  else
  {
    v6 = a2;
    v7 = *(_QWORD *)(a1 + 8LL * a2 + 248);
    if ( v7 )
    {
LABEL_5:
      *a3 = v7;
      return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v5, 0LL);
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 232) + 504LL))(
           *(_QWORD *)(a1 + 232),
           (char *)&xmmword_1803073F4 + 24 * a2,
           &v11);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v7 = v11;
      v11 = 0LL;
      *(_QWORD *)(a1 + 8 * v6 + 248) = v7;
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x748u);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v5, 0LL);
}
