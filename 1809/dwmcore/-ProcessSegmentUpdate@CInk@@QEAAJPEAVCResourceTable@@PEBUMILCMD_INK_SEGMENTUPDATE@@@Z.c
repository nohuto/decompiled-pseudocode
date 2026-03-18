/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x18019B8B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18019B53C (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTUPDATE *a3)
{
  int v3; // xmm0_4
  struct ID2D1Ink *v4; // rbx
  int v5; // xmm1_4
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // r15d
  __int64 v12; // rdx
  int v13; // xmm1_4
  unsigned int v14; // r13d
  __int64 v15; // r14
  int ID2D1InkAndInkStyle; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  bool v20; // cf
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int128 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h]
  int v29; // [rsp+50h] [rbp-10h]
  struct ID2D1InkStyle *v30; // [rsp+A0h] [rbp+40h] BYREF
  struct ID2D1Ink *v31; // [rsp+A8h] [rbp+48h] BYREF

  v31 = a2;
  v3 = *((_DWORD *)a3 + 5);
  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 3);
  v7 = *((unsigned int *)a3 + 2);
  v8 = 0;
  v9 = *((_QWORD *)this + 17);
  v10 = 0;
  v30 = 0LL;
  DWORD2(v27) = v3;
  v12 = 9 * v7;
  LODWORD(v27) = v5;
  DWORD1(v27) = *((_DWORD *)a3 + 4);
  HIDWORD(v27) = *((_DWORD *)a3 + 6);
  DWORD1(v28) = *((_DWORD *)a3 + 8);
  v29 = *((_DWORD *)a3 + 11);
  LODWORD(v28) = *((_DWORD *)a3 + 7);
  v13 = *((_DWORD *)a3 + 9);
  HIDWORD(v28) = *((_DWORD *)a3 + 10);
  v31 = 0LL;
  DWORD2(v28) = v13;
  *(_OWORD *)(v9 + 4 * v12) = v27;
  *(_OWORD *)(v9 + 4 * v12 + 16) = v28;
  *(_DWORD *)(v9 + 4 * v12 + 32) = v29;
  v14 = *((_DWORD *)this + 24);
  if ( v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v15 + *((_QWORD *)this + 9)), &v31, &v30);
      v8 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v4 = v31;
      v18 = (*(__int64 (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v31 + 80LL))(v31);
      v19 = *((unsigned int *)a3 + 2);
      v20 = (unsigned int)v19 < v18;
      v21 = *(_QWORD *)v4;
      if ( v20 )
      {
        v22 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64, __int64))(v21 + 64))(
                v4,
                v19,
                *((_QWORD *)this + 17) + 36 * v19,
                1LL);
        v8 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xD7u);
          goto LABEL_12;
        }
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(v21 + 48))(
                v4,
                *((_QWORD *)this + 17) + 36 * v19,
                1LL);
        v8 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xDEu);
          goto LABEL_12;
        }
      }
      ReleaseInterface<IBitmapLock>((__int64 *)&v31);
      ReleaseInterface<IBitmapLock>((__int64 *)&v30);
      ++v10;
      v15 += 8LL;
      if ( v10 >= v14 )
      {
        v4 = v31;
        goto LABEL_11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ID2D1InkAndInkStyle, 0xD2u);
    v4 = v31;
  }
  else
  {
LABEL_11:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
LABEL_12:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v30 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v30 + 16LL))(v30);
  return v8;
}
