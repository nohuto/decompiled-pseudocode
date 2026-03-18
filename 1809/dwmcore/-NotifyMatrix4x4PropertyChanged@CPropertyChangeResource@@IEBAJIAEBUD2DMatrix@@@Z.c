/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800A3BC4
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A3B20 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A4DF4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DMatrix *a3)
{
  __int64 v3; // r9
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ecx
  _QWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+50h] [rbp-48h]
  __int128 v18; // [rsp+60h] [rbp-38h]
  __int128 v19; // [rsp+70h] [rbp-28h]
  __int128 v20; // [rsp+80h] [rbp-18h]

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
        v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 1208LL);
        v17 = *(_OWORD *)a3;
        v18 = v10;
        v12 = *((_OWORD *)a3 + 3);
        v19 = *((_OWORD *)a3 + 2);
        v20 = v12;
        if ( v3 )
          v13 = *(unsigned int *)(v3 + 68);
        else
          v13 = 0LL;
        v14 = *(_QWORD *)(v11 + 56);
        v16[1] = v7;
        v16[0] = v13;
        v5 = CoreUICallSend(v14, v16, 2LL, 12LL, 7, &unk_180276459);
        if ( v5 == -2018375675 )
          v5 = 0;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v5, 0x1FDu);
      }
    }
  }
  return (unsigned int)v5;
}
