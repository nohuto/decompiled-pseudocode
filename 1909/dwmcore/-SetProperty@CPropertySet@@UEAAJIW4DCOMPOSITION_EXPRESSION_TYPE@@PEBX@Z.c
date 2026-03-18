/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A37E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001C31C (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800A3070 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A3E3C (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801F2E68 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801F2EFC (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1801F2F90 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801F3030 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801F30C4 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801F3158 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::SetProperty(_QWORD *a1, unsigned int a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v4; // rbp
  signed int updated; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r9
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, _QWORD, unsigned __int8 *); // rcx
  unsigned int v25; // r12d
  signed int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  char *v29; // r14
  struct _RTL_GENERIC_TABLE *v30; // rcx
  __int64 v31; // rbx
  char *v32; // r8
  unsigned int j; // edx
  __int64 v34; // rcx
  signed int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 (__fastcall ***v43)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v44; // r12d
  signed int v45; // eax
  __int64 v46; // rcx
  signed int v47; // r14d
  __int64 v48; // rcx
  char *v49; // r14
  struct _RTL_GENERIC_TABLE *v50; // rcx
  __int64 v51; // rbx
  char *v52; // r8
  unsigned int i; // edx
  __int64 v54; // rcx
  signed int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  int Buffer; // [rsp+30h] [rbp-48h] BYREF
  void *lpMem[2]; // [rsp+38h] [rbp-40h]
  __int64 v61; // [rsp+48h] [rbp-30h]
  int v62; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a2;
  if ( (_DWORD)a3 == 104 )
  {
    if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                            a1 + 10,
                            a2,
                            a3,
                            a4)
      && (v39 = a1[10], *(_DWORD *)(v39 + 8 * v4) == 104) )
    {
      v41 = a1[14];
      v42 = *(_DWORD *)(v39 + 8 * v4 + 4) & 0x1FFFFFFF;
      *(_OWORD *)(v42 + v41) = *(_OWORD *)v40;
      *(_QWORD *)(v42 + v41 + 16) = *(_QWORD *)(v40 + 16);
      v43 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))a1[9];
      v44 = *(_DWORD *)(a1[10] + 8 * v4);
      if ( v43 && (v45 = (**v43)(v43, v38, v44), v47 = v45, v45 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x1B6u, 0LL);
      }
      else
      {
        v49 = 0LL;
        v50 = (struct _RTL_GENERIC_TABLE *)a1[5];
        v51 = *(_QWORD *)(a1[2] + 384LL);
        if ( v50 )
        {
          v61 = 0LL;
          v62 = 0;
          *(_OWORD *)lpMem = 0LL;
          Buffer = v4;
          v49 = (char *)RtlLookupElementGenericTable(v50, &Buffer);
          if ( lpMem[0] != lpMem[1] )
          {
            operator delete(lpMem[0]);
            lpMem[0] = 0LL;
          }
        }
        v52 = v49 + 8;
        if ( !v49 )
          v52 = 0LL;
        if ( v52 )
        {
          for ( i = 0; i < *((_DWORD *)v52 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v52 + 8 * v54) + 272LL) = v51 )
            v54 = i++;
          *(_BYTE *)(*(_QWORD *)(a1[2] + 240LL) + 416LL) |= 2u;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1[2] + 552LL) + 96LL))(
            *(_QWORD *)(a1[2] + 552LL),
            0LL,
            8LL);
        }
        CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)a1, (unsigned int)v4, v44, 1u, a4);
        v55 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v44);
        v47 = v55;
        if ( v55 >= 0 )
          return 0;
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x1C9u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x192u, 0LL);
    }
    else
    {
      v47 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, 0x80070057, 0x18Bu, 0LL);
    }
    v9 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v47, 0x10Fu, 0LL);
      return v9;
    }
    return 0;
  }
  if ( (_DWORD)a3 == 18 )
  {
    if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                            a1 + 10,
                            a2,
                            a3,
                            a4)
      && (v23 = *v22, *(_DWORD *)(*v22 + 8 * v4) == 18) )
    {
      *(_DWORD *)((*(_DWORD *)(v23 + 8 * v4 + 4) & 0x1FFFFFFF) + v22[4]) = *(_DWORD *)a4;
      v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, unsigned __int8 *))a1[9];
      v25 = *(_DWORD *)(v23 + 8 * v4);
      if ( v24 && (v26 = (**v24)(v24, (unsigned int)v4, v25, a4), v9 = v26, v26 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1B6u, 0LL);
      }
      else
      {
        v29 = 0LL;
        v30 = (struct _RTL_GENERIC_TABLE *)a1[5];
        v31 = *(_QWORD *)(a1[2] + 384LL);
        if ( v30 )
        {
          v61 = 0LL;
          v62 = 0;
          *(_OWORD *)lpMem = 0LL;
          Buffer = v4;
          v29 = (char *)RtlLookupElementGenericTable(v30, &Buffer);
          if ( lpMem[0] != lpMem[1] )
          {
            operator delete(lpMem[0]);
            lpMem[0] = 0LL;
          }
        }
        v32 = v29 + 8;
        if ( !v29 )
          v32 = 0LL;
        if ( v32 )
        {
          for ( j = 0; j < *((_DWORD *)v32 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 8 * v34) + 272LL) = v31 )
            v34 = j++;
          *(_BYTE *)(*(_QWORD *)(a1[2] + 240LL) + 416LL) |= 2u;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1[2] + 552LL) + 96LL))(
            *(_QWORD *)(a1[2] + 552LL),
            0LL,
            8LL);
        }
        CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)a1, (unsigned int)v4, v25, 1u, a4);
        v35 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v25);
        v9 = v35;
        if ( v35 >= 0 )
          return 0;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x1C9u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v9, 0x192u, 0LL);
    }
    else
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, 0x80070057, 0x18Bu, 0LL);
    }
    if ( (v9 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v9, 0xF7u, 0LL);
      return v9;
    }
    return 0;
  }
  switch ( (int)a3 )
  {
    case 17:
      updated = CPropertySet::UpdateProperty<bool>(a1, a2);
      v9 = updated;
      if ( updated >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0xF3u, 0LL);
      break;
    case 35:
      v10 = CPropertySet::UpdateProperty<D2DVector2>(a1, a2, a3);
      v9 = v10;
      if ( v10 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xFBu, 0LL);
      break;
    case 52:
      v12 = CPropertySet::UpdateProperty<D2DVector3>(a1, a2, a3);
      v9 = v12;
      if ( v12 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xFFu, 0LL);
      break;
    case 69:
      v14 = CPropertySet::UpdateProperty<D2DQuaternion>(a1, a2);
      v9 = v14;
      if ( v14 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x103u, 0LL);
      break;
    case 70:
      v16 = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(a1, a2, a3);
      v9 = v16;
      if ( v16 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x107u, 0LL);
      break;
    case 71:
      v18 = CPropertySet::UpdateProperty<D2DQuaternion>(a1, a2);
      v9 = v18;
      if ( v18 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x10Bu, 0LL);
      break;
    case 265:
      v20 = CPropertySet::UpdateProperty<D2DMatrix>((__int64)a1, a2, a3, (__int64)a4);
      v9 = v20;
      if ( v20 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x113u, 0LL);
      break;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  }
  return v9;
}
