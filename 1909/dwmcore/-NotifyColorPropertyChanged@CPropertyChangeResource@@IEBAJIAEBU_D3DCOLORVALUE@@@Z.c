/*
 * XREFs of ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x1801CCC14
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A4500 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800A41AC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyColorPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct _D3DCOLORVALUE *a3)
{
  signed int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  int v6; // r11d
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-48h]
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1224LL);
    v8 = *(_QWORD *)(v4 + 48);
    v15 = *v5;
    v9 = *(_QWORD *)(v7 + 48);
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 68);
    else
      v10 = 0;
    v14[0] = v10;
    v14[1] = *(unsigned int *)(v4 + 56);
    LOWORD(v13) = 4;
    v3 = CoreUICallSend(v9, v14, 2LL, 13LL, v13, &unk_1802B11BD, v6, &v15);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0x174u, 0LL);
  }
  return (unsigned int)v3;
}
