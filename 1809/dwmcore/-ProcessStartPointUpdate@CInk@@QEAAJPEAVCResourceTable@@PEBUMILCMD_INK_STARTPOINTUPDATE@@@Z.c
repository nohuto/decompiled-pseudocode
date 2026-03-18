/*
 * XREFs of ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x18019BAD0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18019B53C (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessStartPointUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_STARTPOINTUPDATE *a3)
{
  unsigned int v3; // r12d
  char *v4; // r15
  struct ID2D1Ink *v5; // rdi
  struct ID2D1InkStyle *v6; // rbx
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int ID2D1InkAndInkStyle; // eax
  __int64 v11; // rcx
  struct ID2D1InkStyle *v13; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1Ink *v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *((_DWORD *)this + 24);
  v4 = (char *)this + 168;
  v5 = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  v7 = 0;
  v13 = 0LL;
  v8 = 0;
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 43) = *((_DWORD *)a3 + 3);
  if ( v3 )
  {
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(
                              *(CD2DInk **)((char *)v6 + *((_QWORD *)this + 9)),
                              &v14,
                              &v13);
      v7 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      (*(void (__fastcall **)(struct ID2D1Ink *, char *))(*(_QWORD *)v14 + 32LL))(v14, v4);
      ReleaseInterface<IBitmapLock>((__int64 *)&v14);
      ReleaseInterface<IBitmapLock>((__int64 *)&v13);
      ++v8;
      v6 = (struct ID2D1InkStyle *)((char *)v6 + 8);
      if ( v8 >= v3 )
      {
        v5 = v14;
        v6 = v13;
        goto LABEL_5;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ID2D1InkAndInkStyle, 0x72u);
    v5 = v14;
    v6 = v13;
  }
  else
  {
LABEL_5:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
