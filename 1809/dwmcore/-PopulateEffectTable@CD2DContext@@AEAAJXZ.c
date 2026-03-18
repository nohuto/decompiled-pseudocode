/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800D691C
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800D6748 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800E99A0 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  int v1; // ebx
  _BYTE *v2; // rsi
  __int64 *v3; // r14
  __int64 v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = &unk_180307404;
  v10 = 0LL;
  v3 = (__int64 *)((char *)this + 248);
  v4 = 0LL;
  while ( !*v2 )
  {
LABEL_3:
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    v2 += 24;
    if ( (unsigned int)v4 >= 8 )
      goto LABEL_4;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 29) + 504LL))(
         *((_QWORD *)this + 29),
         (char *)&xmmword_1803073F4 + 24 * v4,
         &v10);
  v1 = v7;
  if ( v7 >= 0 )
  {
    v9 = v10;
    v10 = 0LL;
    *v3 = v9;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x8EEu);
LABEL_4:
  if ( v1 < 0 )
    CD2DContext::ReleaseEffectTable(this);
  ReleaseInterface<ID2D1Geometry>(&v10);
  return (unsigned int)v1;
}
