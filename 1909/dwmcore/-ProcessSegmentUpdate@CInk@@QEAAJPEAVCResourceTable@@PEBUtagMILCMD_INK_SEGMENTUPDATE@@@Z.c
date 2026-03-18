/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180215968
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802155E0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_SEGMENTUPDATE *a3)
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
  signed int ID2D1InkAndInkStyle; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // cf
  __int64 v22; // rax
  signed int v23; // eax
  __int64 v24; // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h]
  int v30; // [rsp+50h] [rbp-10h]
  struct ID2D1InkStyle *v31; // [rsp+A0h] [rbp+40h] BYREF
  struct ID2D1Ink *v32; // [rsp+A8h] [rbp+48h] BYREF

  v32 = a2;
  v3 = *((_DWORD *)a3 + 5);
  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 3);
  v7 = *((unsigned int *)a3 + 2);
  v8 = 0;
  v9 = *((_QWORD *)this + 17);
  v10 = 0;
  v31 = 0LL;
  DWORD2(v28) = v3;
  v12 = 9 * v7;
  LODWORD(v28) = v5;
  DWORD1(v28) = *((_DWORD *)a3 + 4);
  HIDWORD(v28) = *((_DWORD *)a3 + 6);
  DWORD1(v29) = *((_DWORD *)a3 + 8);
  v30 = *((_DWORD *)a3 + 11);
  LODWORD(v29) = *((_DWORD *)a3 + 7);
  v13 = *((_DWORD *)a3 + 9);
  HIDWORD(v29) = *((_DWORD *)a3 + 10);
  v32 = 0LL;
  DWORD2(v29) = v13;
  *(_OWORD *)(v9 + 4 * v12) = v28;
  *(_OWORD *)(v9 + 4 * v12 + 16) = v29;
  *(_DWORD *)(v9 + 4 * v12 + 32) = v30;
  v14 = *((_DWORD *)this + 24);
  if ( v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v15 + *((_QWORD *)this + 9)), &v32, &v31);
      v8 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v4 = v32;
      v18 = (*(__int64 (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v32 + 80LL))(v32);
      v19 = *((unsigned int *)a3 + 2);
      v20 = 36 * v19;
      v21 = (unsigned int)v19 < v18;
      v22 = *(_QWORD *)v4;
      if ( v21 )
      {
        v23 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64, __int64))(v22 + 64))(
                v4,
                v19,
                *((_QWORD *)this + 17) + v20,
                1LL);
        v8 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xD0u, 0LL);
          goto LABEL_12;
        }
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(v22 + 48))(
                v4,
                v20 + *((_QWORD *)this + 17),
                1LL);
        v8 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xD7u, 0LL);
          goto LABEL_12;
        }
      }
      ReleaseInterface<IBitmapLock>((__int64 *)&v32);
      ReleaseInterface<IBitmapLock>((__int64 *)&v31);
      ++v10;
      v15 += 8LL;
      if ( v10 >= v14 )
      {
        v4 = v32;
        goto LABEL_11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ID2D1InkAndInkStyle, 0xCBu, 0LL);
    v4 = v32;
  }
  else
  {
LABEL_11:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
LABEL_12:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v31 + 16LL))(v31);
  return v8;
}
