/*
 * XREFs of GreMakeBitmapStock @ 0x1C00995F0
 * Callers:
 *     NtGdiSetBitmapAttributes @ 0x1C00995D0 (NtGdiSetBitmapAttributes.c)
 * Callees:
 *     ??1SURFREFAPI@@QEAA@XZ @ 0x1C0099760 (--1SURFREFAPI@@QEAA@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009B96C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall GreMakeBitmapStock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rbx
  SURFACE *v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r8
  int v10; // eax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  LOBYTE(a2) = 5;
  v3 = 0LL;
  v12 = HmgLock(a1, a2);
  v5 = v12;
  if ( !v12 )
  {
LABEL_22:
    v2 = v3;
    goto LABEL_23;
  }
  if ( !(unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_91167034_60425695_FeatureDescriptorDetails)
    || !*(_DWORD *)(v5 + 8) )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection((SURFACE *)v5) || !*(_WORD *)(v5 + 100) && *(_DWORD *)(v5 + 216))
      && (a1 & 0x800000) == 0
      && !*(_DWORD *)(v5 + 168) )
    {
      v7 = *(_DWORD *)(v5 + 112);
      if ( (v7 & 0x800) != 0 || v7 < 0 || SURFACE::GetFirstLSurf(v6) )
      {
        if ( !*(_DWORD *)(v5 + 168) )
        {
          v10 = *(_DWORD *)(v5 + 112);
          if ( (v10 & 0x800) == 0 && v10 >= 0 )
            SURFACE::GetFirstLSurf((SURFACE *)v5);
        }
      }
      else
      {
        v3 = a1 | 0x800000;
        if ( _InterlockedDecrement(*(volatile signed __int32 **)&gStockBitmapFree) >= 0
          && (v8 = v12, (unsigned int)HmgLockAndModifyHandleType(v12, a1 | 0x800000)) )
        {
          if ( (*(_DWORD *)v8 & 0x800000) != 0 )
            *(_WORD *)(v8 + 102) |= 0x200u;
          LOBYTE(v9) = 5;
          *(_QWORD *)(v8 + 32) = v3;
          HmgSetOwner(a1 | 0x800000, 0LL, v9);
        }
        else
        {
          _InterlockedIncrement(*(volatile signed __int32 **)&gStockBitmapFree);
          v3 = 0LL;
        }
      }
    }
    goto LABEL_22;
  }
LABEL_23:
  SURFREFAPI::~SURFREFAPI((SURFREFAPI *)&v12);
  return v2;
}
