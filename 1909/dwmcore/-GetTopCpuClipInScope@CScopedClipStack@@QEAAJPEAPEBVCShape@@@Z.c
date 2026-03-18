/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180035B90
 * Callers:
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800353B0 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 * Callees:
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800339F8 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180035CEC (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CScopedClipStack::GetTopCpuClipInScope(CScopedClipStack *this, const struct CShape **a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // r15
  CShape **v14; // rax
  struct CShape **v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx

  v4 = 0;
  if ( CScopedClipStack::HasCpuClipsInScope(this) )
  {
    v8 = *(_QWORD *)(v6 + 832);
    v9 = v8;
    if ( !*(_QWORD *)(136LL * (unsigned int)(*(_DWORD *)(v6 + 856) - 1) + v8 + 88) )
    {
      v10 = 0LL;
      v11 = *((unsigned int *)this + 214);
      v12 = *((_DWORD *)this + 214)
          - *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(*((_DWORD *)this + 6) - 1) + 4);
      if ( v12 < (unsigned int)v11 )
      {
        do
        {
          v13 = 136LL * v12;
          v14 = (CShape **)(v13 + v8);
          v15 = (struct CShape **)(v13 + v8 + 88);
          if ( !*v15 )
          {
            if ( v10 )
            {
              v18 = CShape::Combine(v10, v11, *v14, v14 + 2, 1, v15);
              v4 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xD8u, 0LL);
                return v4;
              }
            }
            else
            {
              v16 = CShapePtr::CopyShape(v14, (const struct CMILMatrix *)(v14 + 2), v15);
              v4 = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xCCu, 0LL);
                return v4;
              }
            }
          }
          v9 = *((_QWORD *)this + 104);
          ++v12;
          v8 = v9;
          v10 = *(_QWORD *)(v13 + v9 + 88);
        }
        while ( v12 < *((_DWORD *)this + 214) );
      }
    }
    *a2 = *(const struct CShape **)(136LL * (unsigned int)(*((_DWORD *)this + 214) - 1) + v9 + 88);
  }
  else
  {
    *v5 = 0LL;
  }
  return v4;
}
