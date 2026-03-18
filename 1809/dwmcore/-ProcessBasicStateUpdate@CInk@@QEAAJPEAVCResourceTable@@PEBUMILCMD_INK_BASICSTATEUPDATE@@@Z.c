/*
 * XREFs of ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x18019B59C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18019B53C (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessBasicStateUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_BASICSTATEUPDATE *a3)
{
  struct ID2D1Ink *v3; // rsi
  char *v4; // r12
  struct ID2D1InkStyle *v5; // rbx
  unsigned int v6; // ebp
  __int64 v8; // rdx
  float *v9; // rax
  double *v10; // rcx
  double v11; // xmm0_8
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  int ID2D1InkAndInkStyle; // eax
  __int64 v15; // rcx
  struct ID2D1InkStyle *v16; // rbx
  struct ID2D1Ink *v18; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1InkStyle *v19; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = (char *)this + 184;
  v18 = 0LL;
  v5 = 0LL;
  v19 = 0LL;
  v6 = 0;
  v8 = 6LL;
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 6) != 0;
  v9 = (float *)((char *)this + 184);
  v10 = (double *)((char *)a3 + 28);
  do
  {
    v11 = *v10++;
    *v9++ = v11;
    --v8;
  }
  while ( v8 );
  v12 = 0;
  v13 = *((_DWORD *)this + 24);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  if ( v13 )
  {
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(
                              *(CD2DInk **)((char *)v3 + *((_QWORD *)this + 9)),
                              &v18,
                              &v19);
      v6 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v16 = v19;
      (*(void (__fastcall **)(struct ID2D1InkStyle *, _QWORD))(*(_QWORD *)v19 + 48LL))(
        v19,
        *((unsigned int *)this + 45));
      (*(void (__fastcall **)(struct ID2D1InkStyle *, char *))(*(_QWORD *)v16 + 32LL))(v16, v4);
      ReleaseInterface<IBitmapLock>((__int64 *)&v18);
      ReleaseInterface<IBitmapLock>((__int64 *)&v19);
      ++v12;
      v3 = (struct ID2D1Ink *)((char *)v3 + 8);
      if ( v12 >= v13 )
      {
        v3 = v18;
        v5 = v19;
        goto LABEL_7;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, ID2D1InkAndInkStyle, 0x4Cu);
    v3 = v18;
    v5 = v19;
  }
  else
  {
LABEL_7:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  if ( v3 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
