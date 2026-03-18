/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800227C0
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BA2B0 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18007F7D0 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  int v6; // r11d
  __int64 v8; // xmm1_8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v8 = *((_QWORD *)v5 + 2);
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1224LL);
    v10 = *(_QWORD *)(v4 + 48);
    v15 = *v5;
    v16 = v8;
    v11 = *(_QWORD *)(v9 + 48);
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 68);
    else
      v12 = 0;
    v14[0] = v12;
    v14[1] = *(unsigned int *)(v4 + 56);
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int128 *))CoreUICallSend)(
           v11,
           v14,
           2LL,
           13LL,
           6,
           &unk_1802B2EB9,
           v6,
           &v15);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0x1CEu, 0LL);
  }
  return (unsigned int)v3;
}
