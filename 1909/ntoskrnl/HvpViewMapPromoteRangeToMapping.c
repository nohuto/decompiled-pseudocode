/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x14068DC9C
 * Callers:
 *     HvpAddBin @ 0x14068D388 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068D968 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1400ED558 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiUnmapViewOfSection @ 0x140137FE8 (CmSiUnmapViewOfSection.c)
 *     HvpViewMapMakeViewRangeValid @ 0x14068F340 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x14068F520 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14082F9CC (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMigrateCOWData @ 0x14082FAD4 (HvpViewMapMigrateCOWData.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  signed __int64 v6; // r12
  signed __int64 v7; // r13
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rax
  int ViewRangeValid; // esi
  __int64 MemoryAllocationGranularity; // rax
  int v15; // eax
  __int64 v16; // rcx
  PPRIVILEGE_SET v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 i; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r9
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdx
  bool v33; // r8
  unsigned __int64 v34; // rax
  PPRIVILEGE_SET v35; // rbx
  __int64 v36; // rax
  void *v37; // r8
  void *v38; // r8
  PPRIVILEGE_SET v39; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-18h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+40h] [rbp-10h]

  v39 = 0LL;
  v4 = a1 + 40;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(a2 + 4096);
  v7 = v6 + a3;
  p_Privileges = &Privileges;
  v8 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  Privileges = (PPRIVILEGE_SET)&Privileges;
  v9 = a1;
  if ( !v8 && v5 )
    v5 ^= v4;
  v10 = *(_BYTE *)(a1 + 48) & 1;
  while ( v5 )
  {
    if ( v6 >= *(_QWORD *)(v5 + 40) )
    {
      if ( v6 < *(_QWORD *)(v5 + 48) )
        break;
      v11 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v5;
    }
    if ( v10 && v11 )
      v5 ^= v11;
    else
      v5 = v11;
  }
  if ( *(_QWORD *)(v5 + 48) >= v7 )
  {
    *a4 = v6 + *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 24);
    return 0;
  }
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v15 = HvpViewMapCreateView(v9, v6 & -MemoryAllocationGranularity, v7, &v39);
  v17 = v39;
  ViewRangeValid = v15;
  if ( v15 >= 0 )
  {
    ViewRangeValid = HvpViewMapMakeViewRangeValid(v9, (_DWORD)v39, v6, v7, 0);
    if ( ViewRangeValid >= 0 )
    {
      v18 = v6;
      if ( v6 < (unsigned __int64)v7 )
      {
        do
        {
          v19 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v19 )
            v19 ^= v4;
          while ( v19 )
          {
            if ( v18 < *(_QWORD *)(v19 + 40) )
            {
              v20 = *(_QWORD *)v19;
            }
            else
            {
              if ( v18 < *(_QWORD *)(v19 + 48) )
                break;
              v20 = *(_QWORD *)(v19 + 8);
            }
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v20 )
              v19 ^= v20;
            else
              v19 = v20;
          }
          ViewRangeValid = HvpViewMapMigrateCOWData(a1, v17, v19);
          if ( ViewRangeValid < 0 )
            goto LABEL_98;
          v18 = *(_QWORD *)(v19 + 48);
        }
        while ( v18 < v7 );
      }
      v21 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v21 )
        v21 ^= v4;
      while ( v21 )
      {
        if ( v7 - 1 < *(_QWORD *)(v21 + 40) )
        {
          v22 = *(_QWORD *)v21;
        }
        else
        {
          if ( v7 <= *(_QWORD *)(v21 + 48) )
            break;
          v22 = *(_QWORD *)(v21 + 8);
        }
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v22 )
          v21 ^= v22;
        else
          v21 = v22;
      }
      for ( i = *(_QWORD *)(v5 + 48); i < *(_QWORD *)(v21 + 40); i = *(_QWORD *)(v24 + 48) )
      {
        v24 = *(_QWORD *)v4;
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v24 )
          v24 ^= v4;
        while ( v24 )
        {
          if ( i < *(_QWORD *)(v24 + 40) )
          {
            v25 = *(_QWORD *)v24;
          }
          else
          {
            if ( i < *(_QWORD *)(v24 + 48) )
              break;
            v25 = *(_QWORD *)(v24 + 8);
          }
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v25 )
            v24 ^= v25;
          else
            v24 = v25;
        }
        RtlRbRemoveNode((unsigned __int64 *)v4, v24);
        v26 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_90;
        *(_QWORD *)(v24 + 8) = p_Privileges;
        *(_QWORD *)v24 = &Privileges;
        *v26 = v24;
        p_Privileges = (PPRIVILEGE_SET *)v24;
      }
      v27 = v5;
      if ( *(_QWORD *)(v5 + 40) == v6 )
      {
        RtlRbRemoveNode((unsigned __int64 *)v4, v5);
        v28 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_90;
        *(_QWORD *)(v5 + 8) = p_Privileges;
        *(_QWORD *)v5 = &Privileges;
        *v28 = v5;
        p_Privileges = (PPRIVILEGE_SET *)v5;
        v29 = a1;
      }
      else
      {
        v30 = *(_QWORD *)(v5 + 48);
        v29 = a1;
        HvpViewMapMakeViewRangeInvalid(a1, v27, v6, v30);
      }
      if ( *(_QWORD *)(v21 + 48) == v7 )
      {
        RtlRbRemoveNode((unsigned __int64 *)v4, v21);
        v31 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_90;
        *(_QWORD *)(v21 + 8) = p_Privileges;
        *(_QWORD *)v21 = &Privileges;
        *v31 = v21;
        p_Privileges = (PPRIVILEGE_SET *)v21;
      }
      else
      {
        HvpViewMapMakeViewRangeInvalid(v29, v21, *(_QWORD *)(v21 + 40), v7);
      }
      v32 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v32 )
        v32 ^= v4;
      v33 = 0;
      if ( v32 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)&v17[2].PrivilegeCount < *(_QWORD *)(v32 + 40) )
          {
            v34 = *(_QWORD *)v32;
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_88;
              v34 ^= v32;
            }
            if ( !v34 )
            {
LABEL_88:
              v33 = 0;
              break;
            }
          }
          else
          {
            v34 = *(_QWORD *)(v32 + 8);
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_82;
              v34 ^= v32;
            }
            if ( !v34 )
            {
LABEL_82:
              v33 = 1;
              break;
            }
          }
          v32 = v34;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)v4, v32, v33, (unsigned __int64)v17);
      v35 = Privileges;
      v36 = *(_QWORD *)&Privileges->PrivilegeCount;
      if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid == &Privileges )
      {
        while ( 1 )
        {
          if ( *(PPRIVILEGE_SET *)(v36 + 8) != v35 )
            goto LABEL_90;
          Privileges = (PPRIVILEGE_SET)v36;
          *(_QWORD *)(v36 + 8) = &Privileges;
          if ( v35 == (PPRIVILEGE_SET)&Privileges )
            break;
          v37 = *(void **)&v35[2].Privilege[0].Attributes;
          if ( v37 )
            CmSiUnmapViewOfSection((__int64)&Privileges, *(HANDLE **)(v29 + 24), v37);
          CmSiFreeMemory(v35);
          v35 = Privileges;
          if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid != &Privileges )
            goto LABEL_90;
          v36 = *(_QWORD *)&Privileges->PrivilegeCount;
        }
        ViewRangeValid = 0;
        v16 = v6 + *(_QWORD *)&v17[2].Privilege[0].Attributes - *(_QWORD *)&v17[1].Control;
        v17 = 0LL;
        *a4 = v16;
LABEL_98:
        v9 = a1;
        goto LABEL_99;
      }
LABEL_90:
      __fastfail(3u);
    }
  }
LABEL_99:
  if ( v17 )
  {
    v38 = *(void **)&v17[2].Privilege[0].Attributes;
    if ( v38 )
      CmSiUnmapViewOfSection(v16, *(HANDLE **)(v9 + 24), v38);
    CmSiFreeMemory(v17);
  }
  return (unsigned int)ViewRangeValid;
}
