/*
 * XREFs of ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C01750F4
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0071CBC (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z @ 0x1C0175098 (-GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z.c)
 * Callees:
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C0075278 (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        bool *a2,
        __int64 *a3,
        unsigned __int64 *a4)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct DirectComposition::CAnimationTimeList *v9; // rdx
  unsigned __int64 QuadPart; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // al
  char v15; // al
  bool v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)this + 9) + 24LL) & 3) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = (struct DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
    QuadPart = PerformanceCounter.QuadPart;
    while ( v9 )
    {
      DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(this, v9, QuadPart, &v19, &v16, &v18, &v17);
      v9 = *(struct DirectComposition::CAnimationTimeList **)(v11 + 16);
    }
    v12 = v17;
    v13 = v18;
    v14 = v16;
  }
  else
  {
    v15 = *((_BYTE *)this + 208);
    v12 = *((_QWORD *)this + 28);
    v13 = *((_QWORD *)this + 27);
    v14 = (v15 & 4) != 0;
  }
  *a3 = v13;
  *a4 = v12;
  *a2 = v14;
}
