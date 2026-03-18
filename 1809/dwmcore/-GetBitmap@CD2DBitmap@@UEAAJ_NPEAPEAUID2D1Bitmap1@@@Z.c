/*
 * XREFs of ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180202390
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::GetBitmap(CD2DBitmap *this, char a2, struct ID2D1Bitmap1 **a3)
{
  int v3; // ebx
  struct ID2D1Bitmap1 *v6; // rax
  struct ID2D1Bitmap1 **v7; // rsi
  __int128 v8; // xmm1
  __int64 v9; // rbp
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _OWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    v7 = (struct ID2D1Bitmap1 **)((char *)this + 56);
    if ( !*((_QWORD *)this + 7) )
    {
      v8 = *((_OWORD *)this + 8);
      v9 = *(_QWORD *)(*((_QWORD *)this - 10) + 24LL);
      v15[0] = *((_OWORD *)this + 7);
      DWORD1(v15[0]) = 3;
      v15[1] = v8;
      v10 = *(_DWORD *)(v9 + 848);
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v10, 0x168u);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *, struct ID2D1Bitmap1 **))(**(_QWORD **)(v9 + 240)
                                                                                          + 96LL))(
                *(_QWORD *)(v9 + 240),
                *((_QWORD *)this + 6),
                v15,
                v7);
        v10 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16Cu);
      }
      v13 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v9, v10, 0);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v13, 0x23Au);
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v3, 0xD4u);
      return (unsigned int)v3;
    }
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)*v7 + 8LL))(*v7);
    v6 = *v7;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    v6 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 6);
  }
  *a3 = v6;
  return (unsigned int)v3;
}
