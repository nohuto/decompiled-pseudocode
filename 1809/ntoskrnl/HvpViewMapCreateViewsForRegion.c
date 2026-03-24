/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x1405A524C
 * Callers:
 *     HvpViewMapStart @ 0x1405A51A0 (HvpViewMapStart.c)
 *     HvpViewMapExtendStorage @ 0x1406CC5A0 (HvpViewMapExtendStorage.c)
 * Callees:
 *     CmSiGetMemoryAllocationGranularity @ 0x14000F124 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 *     CmSiUnmapViewOfSection @ 0x14013608C (CmSiUnmapViewOfSection.c)
 *     HvpViewMapCreateView @ 0x1405A5570 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1405A5658 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  PPRIVILEGE_SET v4; // rdi
  PPRIVILEGE_SET *v5; // rbx
  __int64 MemoryAllocationGranularity; // rax
  __int64 v9; // r11
  PPRIVILEGE_SET *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  __int64 i; // r8
  __int64 j; // rdx
  __int64 v21; // rbx
  int ViewRangeValid; // esi
  int v23; // r9d
  int v24; // r8d
  __int64 v25; // r12
  PPRIVILEGE_SET *v26; // rax
  PPRIVILEGE_SET v27; // rax
  PPRIVILEGE_SET v28; // r8
  PPRIVILEGE_SET v29; // rbx
  unsigned __int64 *v30; // rbx
  unsigned __int64 v31; // rdx
  bool v32; // al
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  void *v35; // r8
  PPRIVILEGE_SET v36; // rax
  void *v37; // r8
  PPRIVILEGE_SET v39; // [rsp+30h] [rbp-18h] BYREF
  PPRIVILEGE_SET *v40; // [rsp+38h] [rbp-10h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp+50h] BYREF
  PPRIVILEGE_SET *v43; // [rsp+A0h] [rbp+58h]
  char v44; // [rsp+A8h] [rbp+60h]

  v44 = a4;
  v4 = 0LL;
  v5 = &v39;
  Privileges = 0LL;
  v40 = &v39;
  v39 = (PPRIVILEGE_SET)&v39;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v43 = (PPRIVILEGE_SET *)MemoryAllocationGranularity;
  v10 = (PPRIVILEGE_SET *)MemoryAllocationGranularity;
  v11 = 0x200000LL;
  if ( v12 < v13 )
  {
    v14 = -MemoryAllocationGranularity;
    while ( 1 )
    {
      v15 = a2 & v14;
      v16 = a3 - (a2 & v14);
      if ( v11 > v16 )
      {
        for ( i = (__int64)v10; i < v16; i *= 2LL )
          ;
        for ( j = 2 * i; v15 + j - a3 <= a3 / 8; j *= 2LL )
          i = j;
        v21 = v11;
        if ( i < v11 )
          v21 = i;
        v17 = v15 + v21;
        if ( (*(_BYTE *)(v9 + 32) & 1) != 0 && v17 >= *(_QWORD *)(v9 + 16) )
          v17 = *(_QWORD *)(v9 + 16);
        v18 = a3;
      }
      else
      {
        v17 = v15 + v11;
        v18 = v15 + v11;
      }
      ViewRangeValid = HvpViewMapCreateView(v9, a2 & v14, v17, &Privileges);
      if ( ViewRangeValid >= 0 )
      {
        v23 = v18;
        v4 = Privileges;
        v24 = a2;
        v25 = a1;
        ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, (_DWORD)Privileges, v24, v23, v44);
        if ( ViewRangeValid < 0 )
        {
          v29 = v39;
          goto LABEL_53;
        }
        v26 = v40;
        if ( *v40 != (PPRIVILEGE_SET)&v39 )
          __fastfail(3u);
        v4->Privilege[0].Luid = (LUID)v40;
        *(_QWORD *)&v4->PrivilegeCount = &v39;
        a2 = v17;
        v10 = v43;
        *v26 = v4;
        v40 = (PPRIVILEGE_SET *)v4;
        v4 = 0LL;
        Privileges = 0LL;
      }
      else
      {
        v10 = v43;
        v4 = Privileges;
        if ( v11 <= (__int64)v43 )
        {
          v29 = v39;
          goto LABEL_52;
        }
        v11 /= 2LL;
      }
      v9 = a1;
      if ( a2 >= a3 )
      {
        v5 = (PPRIVILEGE_SET *)v39;
        break;
      }
    }
  }
  v27 = *v5;
  v28 = (PPRIVILEGE_SET)v5;
  if ( v5[1] != (PPRIVILEGE_SET)&v39 || (PPRIVILEGE_SET *)v27->Privilege[0].Luid != v5 )
    __fastfail(3u);
  v39 = *v5;
  v10 = &v39;
  v27->Privilege[0].Luid = (LUID)&v39;
  v29 = v39;
  if ( v28 != (PPRIVILEGE_SET)&v39 )
  {
    v30 = (unsigned __int64 *)(v9 + 40);
    v4 = 0LL;
    do
    {
      v31 = *v30;
      if ( (v30[1] & 1) != 0 && v31 )
        v31 ^= (unsigned __int64)v30;
      v32 = 0;
      if ( v31 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)&v28[2].PrivilegeCount < *(_QWORD *)(v31 + 40) )
          {
            v33 = *(_QWORD *)v31;
            if ( (v30[1] & 1) != 0 )
            {
              if ( !v33 )
                goto LABEL_46;
              v33 ^= v31;
            }
            if ( !v33 )
            {
LABEL_46:
              v32 = 0;
              break;
            }
          }
          else
          {
            v33 = *(_QWORD *)(v31 + 8);
            if ( (v30[1] & 1) != 0 )
            {
              if ( !v33 )
                goto LABEL_40;
              v33 ^= v31;
            }
            if ( !v33 )
            {
LABEL_40:
              v32 = 1;
              break;
            }
          }
          v31 = v33;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64)v30, v31, v32, v28);
      v28 = v39;
      if ( (PPRIVILEGE_SET *)v39->Privilege[0].Luid != &v39 )
        goto LABEL_59;
      v34 = *(_QWORD *)&v39->PrivilegeCount;
      if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&v39->PrivilegeCount + 8LL) != v39 )
        goto LABEL_59;
      v39 = *(PPRIVILEGE_SET *)&v39->PrivilegeCount;
      v10 = &v39;
      *(_QWORD *)(v34 + 8) = &v39;
    }
    while ( v28 != (PPRIVILEGE_SET)&v39 );
    v29 = v39;
  }
  ViewRangeValid = 0;
LABEL_52:
  v25 = a1;
LABEL_53:
  if ( v4 )
  {
    v35 = *(void **)&v4[2].Privilege[0].Attributes;
    if ( v35 )
      CmSiUnmapViewOfSection((__int64)v10, *(HANDLE **)(v25 + 24), v35);
    CmSiFreeMemory(v4);
    v29 = v39;
  }
  if ( v29 != (PPRIVILEGE_SET)&v39 )
  {
    v36 = *(PPRIVILEGE_SET *)&v29->PrivilegeCount;
    if ( (PPRIVILEGE_SET *)v29->Privilege[0].Luid == &v39 )
    {
      while ( (PPRIVILEGE_SET)v36->Privilege[0].Luid == v29 )
      {
        v39 = v36;
        v36->Privilege[0].Luid = (LUID)&v39;
        if ( v29 == (PPRIVILEGE_SET)&v39 )
          return (unsigned int)ViewRangeValid;
        v37 = *(void **)&v29[2].Privilege[0].Attributes;
        if ( v37 )
          CmSiUnmapViewOfSection((__int64)&v39, *(HANDLE **)(v25 + 24), v37);
        CmSiFreeMemory(v29);
        v29 = v39;
        if ( (PPRIVILEGE_SET *)v39->Privilege[0].Luid != &v39 )
          break;
        v36 = *(PPRIVILEGE_SET *)&v39->PrivilegeCount;
      }
    }
LABEL_59:
    __fastfail(3u);
  }
  return (unsigned int)ViewRangeValid;
}
