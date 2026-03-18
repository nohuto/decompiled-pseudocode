/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18024738C
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x180240044 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x180246D60 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x18024707C (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?Initialize@CHolographicClient@@AEAAJXZ @ 0x180247924 (-Initialize@CHolographicClient@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        struct CHolographicClient **a3)
{
  CGdiSpriteBitmap *v4; // rbx
  signed int v7; // eax
  __int64 v8; // rcx
  struct CHolographicInteropTaskQueue *v9; // rsi
  unsigned int v10; // edi
  CHolographicClient *v11; // rax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  struct CHolographicInteropTaskQueue *v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v7 = CHolographicInteropTaskQueue::Create((union _SLIST_HEADER **)&v16);
  v9 = v16;
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x14u, 0LL);
LABEL_10:
    if ( v4 )
      CGdiSpriteBitmap::Release(v4);
    goto LABEL_12;
  }
  v11 = (CHolographicClient *)operator new(0x118uLL);
  if ( v11 )
    v4 = CHolographicClient::CHolographicClient(v11, a1, v9);
  if ( v4 )
  {
    CMILCOMBase::InternalAddRef(v4);
    v13 = CHolographicClient::Initialize(v4);
    v10 = v13;
    if ( v13 >= 0 )
    {
      *a2 = v9;
      *a3 = v4;
      return v10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1Au, 0LL);
    goto LABEL_10;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x17u, 0LL);
LABEL_12:
  if ( v9 )
    (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v9 + 8LL))(v9);
  return v10;
}
