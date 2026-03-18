/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A4630
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180016034 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1800189E8 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18006DF88 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800A26BC (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A4DF4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801B16E0 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801B17D4 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801B18C8 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::SetProperty(CResource *a1, unsigned int a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // ecx
  __int64 v8; // r8
  _QWORD *v9; // r9
  unsigned int v10; // ebx
  int updated; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // r8d
  _DWORD *v15; // r9
  __int64 v16; // r11
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 (__fastcall ***v20)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v21; // r15d
  int v22; // eax
  unsigned int v23; // ecx
  char *v24; // rbp
  struct _RTL_GENERIC_TABLE *v25; // rcx
  __int64 v26; // rbx
  char *v27; // r8
  unsigned int i; // edx
  __int64 v29; // rcx
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  int v42; // r8d
  __int64 v43; // r9
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  __int64 v49; // rdx
  __int64 (__fastcall ***v50)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v51; // r15d
  int v52; // eax
  unsigned int v53; // ecx
  char *v54; // rbp
  struct _RTL_GENERIC_TABLE *v55; // rcx
  __int64 v56; // rbx
  char *v57; // r8
  unsigned int j; // edx
  __int64 v59; // rcx
  unsigned int v60; // ecx
  int v61; // eax
  unsigned int v62; // ecx
  unsigned int v64; // [rsp+20h] [rbp-58h]
  unsigned int v65; // [rsp+20h] [rbp-58h]
  int Buffer; // [rsp+30h] [rbp-48h] BYREF
  void *v67[2]; // [rsp+38h] [rbp-40h]
  __int64 v68; // [rsp+48h] [rbp-30h]
  int v69; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = a2;
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
  {
    switch ( (int)v8 )
    {
      case 17:
        updated = CPropertySet::UpdateProperty<bool>(a1);
        v10 = updated;
        if ( updated >= 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, 0x107u);
        return v10;
      case 18:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
          goto LABEL_30;
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( *(_DWORD *)(*((_QWORD *)a1 + 10) + 8 * v5) == v14 )
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          *(_DWORD *)((*(_DWORD *)(v16 + 8 * v5 + 4) & 0x1FFFFFFF) + *((_QWORD *)a1 + 14)) = *v15;
          if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
          {
            if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
              ModuleFailFastForHRESULT(2147942487LL, retaddr);
            v20 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))*((_QWORD *)a1 + 9);
            v21 = *(_DWORD *)(*((_QWORD *)a1 + 10) + 8 * v5);
            if ( v20 && (v22 = (**v20)(v20, v19, v21), v10 = v22, v22 < 0) )
            {
              v64 = 463;
            }
            else
            {
              v24 = 0LL;
              v25 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)a1 + 5);
              v26 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 368LL);
              if ( v25 )
              {
                v68 = 0LL;
                v69 = 0;
                *(_OWORD *)v67 = 0LL;
                Buffer = v5;
                v24 = (char *)RtlLookupElementGenericTable(v25, &Buffer);
                if ( v67[0] != v67[1] )
                {
                  WPF::ProcessHeapImpl::Free(v67[0]);
                  v67[0] = 0LL;
                }
              }
              v27 = v24 + 8;
              if ( !v24 )
                v27 = 0LL;
              if ( v27 )
              {
                for ( i = 0; i < *((_DWORD *)v27 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 8 * v29) + 272LL) = v26 )
                  v29 = i++;
                *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 224LL) + 416LL) |= 2u;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 536LL) + 104LL))(
                  *(_QWORD *)(*((_QWORD *)a1 + 2) + 536LL),
                  0LL,
                  8LL);
              }
              CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)a1, (unsigned int)v5, v21, 1u, a4);
              v22 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v5, v21);
              v10 = v22;
              if ( v22 >= 0 )
                goto LABEL_72;
              v64 = 482;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, v64);
          }
          else
          {
            v10 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x1C3u);
          }
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v10, 0x1A6u);
        }
        else
        {
LABEL_30:
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024809, 0x19Fu);
        }
        if ( (v10 & 0x80000000) == 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v10, 0x10Bu);
        return v10;
      case 35:
        v31 = CPropertySet::UpdateProperty<D2DVector2>(a1, (unsigned int)v5, v8, v9);
        v10 = v31;
        if ( v31 >= 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x10Fu);
        return v10;
      case 52:
        v33 = CPropertySet::UpdateProperty<D2DVector3>(a1, (unsigned int)v5, v8, (__int64)v9);
        v10 = v33;
        if ( v33 >= 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x113u);
        return v10;
      case 69:
        v35 = CPropertySet::UpdateProperty<D2DQuaternion>(a1);
        v10 = v35;
        if ( v35 >= 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x117u);
        return v10;
      case 70:
        v37 = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(a1);
        v10 = v37;
        if ( v37 >= 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x11Bu);
        return v10;
      case 71:
        v39 = CPropertySet::UpdateProperty<D2DQuaternion>(a1);
        v10 = v39;
        if ( v39 >= 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x11Fu);
        return v10;
      case 104:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
          goto LABEL_67;
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( *(_DWORD *)(*((_QWORD *)a1 + 10) + 8 * v5) == v42 )
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v45 = *((_QWORD *)a1 + 14);
          v46 = *(_DWORD *)(v44 + 8 * v5 + 4) & 0x1FFFFFFF;
          *(_OWORD *)(v46 + v45) = *(_OWORD *)v43;
          *(_QWORD *)(v46 + v45 + 16) = *(_QWORD *)(v43 + 16);
          if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
          {
            if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
              ModuleFailFastForHRESULT(2147942487LL, retaddr);
            v50 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))*((_QWORD *)a1 + 9);
            v51 = *(_DWORD *)(*((_QWORD *)a1 + 10) + 8 * v5);
            if ( v50 && (v52 = (**v50)(v50, v49, v51), v10 = v52, v52 < 0) )
            {
              v65 = 463;
            }
            else
            {
              v54 = 0LL;
              v55 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)a1 + 5);
              v56 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 368LL);
              if ( v55 )
              {
                v68 = 0LL;
                v69 = 0;
                *(_OWORD *)v67 = 0LL;
                Buffer = v5;
                v54 = (char *)RtlLookupElementGenericTable(v55, &Buffer);
                if ( v67[0] != v67[1] )
                {
                  WPF::ProcessHeapImpl::Free(v67[0]);
                  v67[0] = 0LL;
                }
              }
              v57 = v54 + 8;
              if ( !v54 )
                v57 = 0LL;
              if ( v57 )
              {
                for ( j = 0; j < *((_DWORD *)v57 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v57 + 8 * v59) + 272LL) = v56 )
                  v59 = j++;
                *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 224LL) + 416LL) |= 2u;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 536LL) + 104LL))(
                  *(_QWORD *)(*((_QWORD *)a1 + 2) + 536LL),
                  0LL,
                  8LL);
              }
              CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)a1, (unsigned int)v5, v51, 1u, a4);
              v52 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v5, v51);
              v10 = v52;
              if ( v52 >= 0 )
                goto LABEL_72;
              v65 = 482;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, v65);
          }
          else
          {
            v10 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024809, 0x1C3u);
          }
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v10, 0x1A6u);
        }
        else
        {
LABEL_67:
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, -2147024809, 0x19Fu);
        }
        if ( (v10 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v10, 0x123u);
          return v10;
        }
LABEL_72:
        v10 = 0;
        break;
      case 265:
        v61 = CPropertySet::UpdateProperty<D2DMatrix>(a1, (unsigned int)v5, v8);
        v10 = v61;
        if ( v61 >= 0 )
          goto LABEL_72;
        MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x127u);
        return v10;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x101u);
  }
  return v10;
}
