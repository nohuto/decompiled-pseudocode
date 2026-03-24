/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x1406BA4B0
 * Callers:
 *     HvpAddBin @ 0x1405A39BC (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405F96A0 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     CmSiGetMemoryAllocationGranularity @ 0x14000F124 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400BDDF0 (RtlRbRemoveNode.c)
 *     CmSiUnmapViewOfSection @ 0x14013608C (CmSiUnmapViewOfSection.c)
 *     HvpViewMapCreateView @ 0x1405A5570 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1405A5658 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1405F9CD0 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1407F6E88 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMigrateCOWData @ 0x1407F6F90 (HvpViewMapMigrateCOWData.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(SIZE_T a1, int a2, unsigned int a3, __int64 *a4)
{
  unsigned __int64 v4; // r15
  __int64 v6; // r14
  PPRIVILEGE_SET **ViewForFileOffset; // rax
  _QWORD *v8; // r9
  PPRIVILEGE_SET **v9; // rdi
  int ViewRangeValid; // ebx
  __int64 MemoryAllocationGranularity; // rax
  int v12; // eax
  __int64 v13; // rcx
  PPRIVILEGE_SET v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  PPRIVILEGE_SET *v17; // rbx
  unsigned __int64 *v18; // r12
  __int64 v19; // rax
  PPRIVILEGE_SET *v20; // r15
  PPRIVILEGE_SET *v21; // rax
  PPRIVILEGE_SET *v22; // rax
  PPRIVILEGE_SET *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  bool v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rax
  PPRIVILEGE_SET v29; // rbx
  __int64 v30; // rax
  void *v31; // r8
  void *v32; // r8
  PPRIVILEGE_SET v34; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-18h]
  PPRIVILEGE_SET Privileges; // [rsp+40h] [rbp-10h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+48h] [rbp-8h]

  v34 = 0LL;
  v4 = (unsigned int)(a2 + 4096);
  p_Privileges = &Privileges;
  v35 = v4;
  Privileges = (PPRIVILEGE_SET)&Privileges;
  v6 = v4 + a3;
  ViewForFileOffset = (PPRIVILEGE_SET **)HvpViewMapFindViewForFileOffset(a1, v4);
  v9 = ViewForFileOffset;
  if ( (__int64)ViewForFileOffset[6] < v6 )
  {
    MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
    v12 = HvpViewMapCreateView(a1, (LARGE_INTEGER)(v4 & -MemoryAllocationGranularity), v6, &v34);
    v14 = v34;
    ViewRangeValid = v12;
    if ( v12 >= 0 )
    {
      ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, v34, v4, v6, 0);
      if ( ViewRangeValid >= 0 )
      {
        v15 = v4;
        if ( v4 >= v6 )
        {
LABEL_8:
          v17 = (PPRIVILEGE_SET *)HvpViewMapFindViewForFileOffset(a1, v6 - 1);
          v18 = (unsigned __int64 *)(a1 + 40);
          v19 = (__int64)v9[6];
          if ( v19 < (__int64)v17[5] )
          {
            do
            {
              v20 = (PPRIVILEGE_SET *)HvpViewMapFindViewForFileOffset(a1, v19);
              RtlRbRemoveNode(a1 + 40, (unsigned __int64)v20);
              v21 = p_Privileges;
              if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
                __fastfail(3u);
              v20[1] = (PPRIVILEGE_SET)p_Privileges;
              *v20 = (PPRIVILEGE_SET)&Privileges;
              *v21 = (PPRIVILEGE_SET)v20;
              p_Privileges = v20;
              v19 = (__int64)v20[6];
            }
            while ( v19 < (__int64)v17[5] );
            v4 = v35;
          }
          if ( v9[5] == (PPRIVILEGE_SET *)v4 )
          {
            RtlRbRemoveNode(a1 + 40, (unsigned __int64)v9);
            v22 = p_Privileges;
            if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
              __fastfail(3u);
            v9[1] = p_Privileges;
            *v9 = &Privileges;
            *v22 = (PPRIVILEGE_SET)v9;
            p_Privileges = (PPRIVILEGE_SET *)v9;
          }
          else
          {
            HvpViewMapMakeViewRangeInvalid(a1, v9, v4, v9[6]);
          }
          if ( v17[6] == (PPRIVILEGE_SET)v6 )
          {
            RtlRbRemoveNode(a1 + 40, (unsigned __int64)v17);
            v23 = p_Privileges;
            if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
              __fastfail(3u);
            v17[1] = (PPRIVILEGE_SET)p_Privileges;
            *v17 = (PPRIVILEGE_SET)&Privileges;
            *v23 = (PPRIVILEGE_SET)v17;
            p_Privileges = v17;
          }
          else
          {
            HvpViewMapMakeViewRangeInvalid(a1, v17, v17[5], v6);
          }
          v24 = *(_QWORD *)(a1 + 48);
          v25 = *v18;
          if ( (v24 & 1) != 0 && v25 )
            v25 ^= (unsigned __int64)v18;
          v26 = 0;
          v27 = v24 & 1;
          if ( v25 )
          {
            while ( 1 )
            {
              if ( *(_QWORD *)&v14[2].PrivilegeCount < *(_QWORD *)(v25 + 40) )
              {
                v28 = *(_QWORD *)v25;
                if ( v27 )
                {
                  if ( !v28 )
                    goto LABEL_38;
                  v28 ^= v25;
                }
                if ( !v28 )
                {
LABEL_38:
                  v26 = 0;
                  break;
                }
              }
              else
              {
                v28 = *(_QWORD *)(v25 + 8);
                if ( v27 )
                {
                  if ( !v28 )
                    goto LABEL_32;
                  v28 ^= v25;
                }
                if ( !v28 )
                {
LABEL_32:
                  v26 = 1;
                  break;
                }
              }
              v25 = v28;
            }
          }
          RtlRbInsertNodeEx(a1 + 40, v25, v26, v14);
          v29 = Privileges;
          v30 = *(_QWORD *)&Privileges->PrivilegeCount;
          if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid != &Privileges )
LABEL_40:
            __fastfail(3u);
          while ( 1 )
          {
            if ( *(PPRIVILEGE_SET *)(v30 + 8) != v29 )
              goto LABEL_40;
            Privileges = (PPRIVILEGE_SET)v30;
            *(_QWORD *)(v30 + 8) = &Privileges;
            if ( v29 == (PPRIVILEGE_SET)&Privileges )
              break;
            v31 = *(void **)&v29[2].Privilege[0].Attributes;
            if ( v31 )
              CmSiUnmapViewOfSection((__int64)&Privileges, *(HANDLE **)(a1 + 24), v31);
            CmSiFreeMemory(v29);
            v29 = Privileges;
            if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid != &Privileges )
              goto LABEL_40;
            v30 = *(_QWORD *)&Privileges->PrivilegeCount;
          }
          ViewRangeValid = 0;
          v13 = v4 + *(_QWORD *)&v14[2].Privilege[0].Attributes - *(_QWORD *)&v14[1].Control;
          v14 = 0LL;
          *a4 = v13;
        }
        else
        {
          while ( 1 )
          {
            v16 = HvpViewMapFindViewForFileOffset(a1, v15);
            ViewRangeValid = HvpViewMapMigrateCOWData(a1, v14, v16);
            if ( ViewRangeValid < 0 )
              break;
            v15 = *(_QWORD *)(v16 + 48);
            if ( v15 >= v6 )
              goto LABEL_8;
          }
        }
      }
    }
    if ( v14 )
    {
      v32 = *(void **)&v14[2].Privilege[0].Attributes;
      if ( v32 )
        CmSiUnmapViewOfSection(v13, *(HANDLE **)(a1 + 24), v32);
      CmSiFreeMemory(v14);
    }
  }
  else
  {
    *v8 = v4 + (char *)ViewForFileOffset[7] - (char *)ViewForFileOffset[3];
    return 0;
  }
  return (unsigned int)ViewRangeValid;
}
