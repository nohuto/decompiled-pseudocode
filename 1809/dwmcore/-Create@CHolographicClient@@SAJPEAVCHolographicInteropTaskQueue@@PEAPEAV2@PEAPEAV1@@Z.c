/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18021203C
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x18020AFF0 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x180211A70 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x180211D80 (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x180212328 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        LARGE_INTEGER **a3)
{
  LARGE_INTEGER *v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  struct CHolographicInteropTaskQueue *v9; // rsi
  int v10; // ebx
  CHolographicClient *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int AnalogExclusiveTokenEvent; // ebx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct CHolographicInteropTaskQueue *v19; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  v7 = CHolographicInteropTaskQueue::Create(&v19);
  v9 = v19;
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17u);
LABEL_15:
    if ( v4 )
      CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)v4);
    goto LABEL_17;
  }
  v11 = (CHolographicClient *)operator new(0x108uLL);
  if ( v11 )
    v4 = (LARGE_INTEGER *)CHolographicClient::CHolographicClient(v11, a1, v9);
  if ( v4 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v4);
    AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&v4[29]);
    if ( AnalogExclusiveTokenEvent >= 0 )
    {
      v16 = CHolographicClient::EnsureHolographicCompositor((CHolographicClient *)v4);
      v10 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x69u);
      else
        QueryPerformanceFrequency(v4 + 32);
    }
    else
    {
      v10 = AnalogExclusiveTokenEvent | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v10, 0x67u);
    }
    if ( v10 >= 0 )
    {
      *a2 = v9;
      *a3 = v4;
      return (unsigned int)v10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v10, 0x1Du);
    goto LABEL_15;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x1Au);
LABEL_17:
  if ( v9 )
    (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v9 + 8LL))(v9);
  return (unsigned int)v10;
}
