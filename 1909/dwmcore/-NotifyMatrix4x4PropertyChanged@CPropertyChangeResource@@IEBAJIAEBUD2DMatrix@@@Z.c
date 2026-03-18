/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800A45A4
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A3E3C (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A4500 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DMatrix *a3)
{
  __int64 v3; // r9
  signed int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *((_QWORD *)this + 6);
  v5 = 0;
  if ( v3 )
    v6 = *(_DWORD *)(v3 + 68);
  else
    v6 = 0;
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 14);
    if ( (_DWORD)v7 )
    {
      v8 = *((_DWORD *)this + 16);
      if ( _bittest(&v8, a2) )
      {
        v10 = *((_OWORD *)a3 + 1);
        v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 1224LL);
        v17[0] = *(_OWORD *)a3;
        v17[1] = v10;
        v12 = *((_OWORD *)a3 + 3);
        v17[2] = *((_OWORD *)a3 + 2);
        v17[3] = v12;
        if ( v3 )
          v13 = *(unsigned int *)(v3 + 68);
        else
          v13 = 0LL;
        v14 = *(_QWORD *)(v11 + 48);
        v16[1] = v7;
        v16[0] = v13;
        v5 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, unsigned int, _OWORD *))CoreUICallSend)(
               v14,
               v16,
               2LL,
               13LL,
               7,
               &unk_1802B11CF,
               a2,
               v17);
        if ( v5 == -2018375675 )
          v5 = 0;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v5, 0x1FBu, 0LL);
      }
    }
  }
  return (unsigned int)v5;
}
