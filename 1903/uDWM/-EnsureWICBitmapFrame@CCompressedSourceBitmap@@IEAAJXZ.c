/*
 * XREFs of ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004856C
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1800376A0 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800474F4 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureWICBitmapFrame(CCompressedSourceBitmap *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // r14
  int v4; // eax
  int v5; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-28h]
  void *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 256);
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)this + 32) )
    return v1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 112LL))(*((_QWORD *)this + 36), &v10);
  v1 = v4;
  if ( v4 < 0 )
  {
    v8 = 263;
LABEL_21:
    v7 = v4;
    goto LABEL_22;
  }
  if ( !v10 )
  {
    v7 = -2147024890;
    v8 = 264;
    v1 = -2147024890;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8, v9);
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 128LL))(
         v10,
         *((_QWORD *)this + 34),
         *((unsigned int *)this + 70));
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x10Bu, v9);
    goto LABEL_9;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, 0LL, 0LL, 0LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, _QWORD, __int64 *))(**((_QWORD **)this + 36) + 32LL))(
         *((_QWORD *)this + 36),
         v10,
         &GUID_VendorMicrosoft,
         0LL,
         &v11);
  v1 = v4;
  if ( v4 < 0 )
  {
    v8 = 274;
    goto LABEL_21;
  }
  if ( !v11 )
  {
    v7 = -2147024890;
    v8 = 275;
    v1 = -2147024890;
    goto LABEL_22;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v11 + 104LL))(v11, 0LL, v2);
  v1 = v4;
  if ( v4 < 0 )
  {
    v8 = 277;
    goto LABEL_21;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         (char *)this + 184,
         (char *)this + 188);
  v1 = v4;
  if ( v4 < 0 )
  {
    v8 = 282;
    goto LABEL_21;
  }
LABEL_9:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v1;
}
