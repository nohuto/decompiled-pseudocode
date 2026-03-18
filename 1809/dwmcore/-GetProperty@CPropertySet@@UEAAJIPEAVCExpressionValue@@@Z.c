/*
 * XREFs of ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800565B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::GetProperty(CPropertySet *this, __int64 a2, struct CExpressionValue *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  _QWORD *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // xmm0_8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // r11
  __int64 v37; // rcx
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // r11
  __int64 v45; // rcx
  __int64 v46; // rax
  __int128 v47; // xmm0
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r10
  __int64 v52; // r11
  __int64 v53; // rcx
  __int64 v54; // rax
  __int128 v55; // xmm0
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r10
  __int64 v60; // r11
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // xmm1_8
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r10
  __int64 v68; // r11
  __int64 v69; // rdx
  __int64 v70; // rax
  __int128 v71; // xmm1
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 80) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    switch ( *(_DWORD *)(*v6 + 8LL * v5) )
    {
      case 0x11:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        result = 0LL;
        *(_BYTE *)v8 = *(_BYTE *)((*(_DWORD *)(v11 + 8 * v10 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v9 + 32));
        *(_DWORD *)(v8 + 72) = 17;
        *(_BYTE *)(v8 + 76) = 1;
        break;
      case 0x12:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        result = 0LL;
        *(_DWORD *)v13 = *(_DWORD *)((*(_DWORD *)(v16 + 8 * v15 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v14 + 32));
        *(_DWORD *)(v13 + 72) = 18;
        *(_BYTE *)(v13 + 76) = 1;
        break;
      case 0x23:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v17) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v22 = *(_QWORD *)(v19 + 32);
        v23 = *(_DWORD *)(v21 + 8 * v20 + 4) & 0x1FFFFFFF;
        *(_DWORD *)(v18 + 72) = 35;
        v24 = *(_QWORD *)(v23 + v22);
        result = 0LL;
        *(_QWORD *)v18 = v24;
        *(_BYTE *)(v18 + 76) = 1;
        break;
      case 0x34:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v25) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v30 = *(_QWORD *)(v27 + 32);
        v31 = *(_DWORD *)(v29 + 8 * v28 + 4) & 0x1FFFFFFF;
        *(_DWORD *)(v26 + 72) = 52;
        *(_QWORD *)v26 = *(_QWORD *)(v31 + v30);
        *(_DWORD *)(v26 + 8) = *(_DWORD *)(v31 + v30 + 8);
        result = 0LL;
        *(_BYTE *)(v26 + 76) = 1;
        break;
      case 0x45:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v32) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v37 = *(_QWORD *)(v34 + 32);
        v38 = *(_DWORD *)(v36 + 8 * v35 + 4) & 0x1FFFFFFF;
        *(_DWORD *)(v33 + 72) = 69;
        v39 = *(_OWORD *)(v38 + v37);
        *(_BYTE *)(v33 + 76) = 1;
        result = 0LL;
        *(_OWORD *)v33 = v39;
        break;
      case 0x46:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v40) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v45 = *(_QWORD *)(v42 + 32);
        v46 = *(_DWORD *)(v44 + 8 * v43 + 4) & 0x1FFFFFFF;
        *(_DWORD *)(v41 + 72) = 70;
        v47 = *(_OWORD *)(v46 + v45);
        *(_BYTE *)(v41 + 76) = 1;
        result = 0LL;
        *(_OWORD *)v41 = v47;
        break;
      case 0x47:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v48) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v53 = *(_QWORD *)(v50 + 32);
        v54 = *(_DWORD *)(v52 + 8 * v51 + 4) & 0x1FFFFFFF;
        *(_DWORD *)(v49 + 72) = 71;
        v55 = *(_OWORD *)(v54 + v53);
        *(_BYTE *)(v49 + 76) = 1;
        result = 0LL;
        *(_OWORD *)v49 = v55;
        break;
      case 0x68:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v56) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v61 = *(_QWORD *)(v58 + 32);
        v62 = *(_DWORD *)(v60 + 8 * v59 + 4) & 0x1FFFFFFF;
        *(_DWORD *)(v57 + 72) = 104;
        *(_OWORD *)v57 = *(_OWORD *)(v62 + v61);
        v63 = *(_QWORD *)(v62 + v61 + 16);
        result = 0LL;
        *(_QWORD *)(v57 + 16) = v63;
        *(_BYTE *)(v57 + 76) = 1;
        break;
      case 0x109:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v64) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v69 = *(_QWORD *)(v66 + 32);
        v70 = *(_DWORD *)(v68 + 8 * v67 + 4) & 0x1FFFFFFF;
        *(_DWORD *)(v65 + 72) = 265;
        *(_OWORD *)v65 = *(_OWORD *)(v70 + v69);
        *(_OWORD *)(v65 + 16) = *(_OWORD *)(v70 + v69 + 16);
        *(_OWORD *)(v65 + 32) = *(_OWORD *)(v70 + v69 + 32);
        v71 = *(_OWORD *)(v70 + v69 + 48);
        *(_BYTE *)(v65 + 76) = 1;
        *(_OWORD *)(v65 + 48) = v71;
        result = 0LL;
        break;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024809, 0xBBu);
    return 2147942487LL;
  }
  return result;
}
