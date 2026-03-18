/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C007D7CC
 * Callers:
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C007D64C (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C007D6CC (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C007D74C (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 * Callees:
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C007D974 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C007DBCC (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C007DDF8 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C007DE84 (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 *a4,
        bool *a5)
{
  int v5; // r15d
  unsigned __int64 v7; // rsi
  bool v8; // r14
  __int64 v9; // rbx
  int v10; // eax
  bool v11; // cl
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  unsigned int v16; // ecx
  unsigned int v17; // r10d
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  unsigned int *v20; // r11
  unsigned int v21; // r13d
  unsigned int v22; // eax
  unsigned int v23; // r10d
  __int64 v24; // r11
  int v25; // eax
  _DWORD *v26; // r9
  int v27; // edx
  _DWORD *v28; // rcx
  unsigned int v29; // r10d
  unsigned int v30; // eax
  int v31; // eax
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // r13d
  __int64 *v39; // rdx
  __int64 v40; // xmm0_8
  int v41; // ecx
  int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  int v45; // eax
  __int64 v46; // r13
  __int64 v47; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v48; // [rsp+28h] [rbp-18h]
  __int64 v49; // [rsp+30h] [rbp-10h] BYREF
  int v50; // [rsp+38h] [rbp-8h]
  int v51; // [rsp+78h] [rbp+38h]

  v51 = a2;
  v5 = 0;
  v7 = a3;
  *a5 = 0;
  v8 = 1;
  if ( a2 != 3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a4 + 2)
        || (v16 = *(_DWORD *)v7, v17 = *(_DWORD *)(v7 + 4), *(_DWORD *)v7 > v17) )
      {
LABEL_4:
        if ( v5 >= 0 )
        {
          v10 = *((_DWORD *)a4 + 2);
          v11 = v10 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v10 - 1)) + 4LL) == -1;
          if ( *(_DWORD *)v7 <= *(_DWORD *)(v7 + 4) && !v11 && (a2 == 7 || a2 == 1) )
          {
            v12 = *(unsigned int *)(v7 + 8);
            v49 = *(_QWORD *)v7;
            v13 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v12);
            v14 = *((unsigned int *)a4 + 2);
            v50 = v13;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v49,
                   v14);
            if ( v5 >= 0 )
              *a5 = 1;
          }
        }
        return (unsigned int)v5;
      }
      v18 = *(_QWORD *)v7;
      v48 = *(_DWORD *)(v7 + 8);
      v19 = *a4;
      v47 = v18;
      v20 = *(unsigned int **)(v19 + 8 * v9);
      if ( v16 < *v20 )
      {
        v48 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, *(unsigned int *)(v7 + 8));
        v30 = **(_DWORD **)(*a4 + 8 * v9) - 1;
        if ( v29 < v30 )
          v30 = v29;
        HIDWORD(v47) = v30;
        if ( v30 == -1 )
          v31 = -1;
        else
          v31 = v30 + 1;
        *(_DWORD *)v7 = v31;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v47,
               (unsigned int)v9);
        if ( v5 >= 0 )
          *a5 = 1;
      }
      else
      {
        v21 = v20[1];
        if ( v16 == *v20 )
        {
          v22 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                  v20[2],
                  *(unsigned int *)(v7 + 8));
          if ( v23 < v21 )
          {
            v48 = v22;
            v32 = *(_DWORD **)(*a4 + 8 * v9);
            v33 = v32[1];
            if ( v23 < v33 )
              v33 = v23;
            HIDWORD(v47) = v33;
            v34 = -1;
            if ( v33 != -1 )
              v34 = v33 + 1;
            *(_DWORD *)v7 = v34;
            *v32 = v33 + 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v47,
                   (unsigned int)v9);
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
          else
          {
            a3 = v22;
            if ( v23 == v21 )
            {
              *(_DWORD *)(v24 + 8) = v22;
              if ( HIDWORD(v47) == -1 )
                v25 = -1;
              else
                v25 = HIDWORD(v47) + 1;
              *(_DWORD *)v7 = v25;
            }
            else
            {
              v35 = *(_QWORD *)(*a4 + 8 * v9);
              v36 = *(_DWORD *)(v35 + 4);
              HIDWORD(v47) = v36;
              if ( v36 == -1 )
                v37 = -1;
              else
                v37 = v36 + 1;
              *(_QWORD *)v35 = v47;
              *(_DWORD *)(v35 + 8) = a3;
              *(_DWORD *)v7 = v37;
            }
          }
        }
        else if ( v17 >= v21 )
        {
          if ( v16 <= v21 )
          {
            v48 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                    v20[2],
                    *(unsigned int *)(v7 + 8));
            v43 = *(_QWORD *)(*a4 + 8 * v9);
            v44 = *(_DWORD *)(v43 + 4);
            HIDWORD(v47) = v44;
            v45 = v44 == -1 ? -1 : v44 + 1;
            *(_DWORD *)v7 = v45;
            *(_DWORD *)(v43 + 4) = v47 - 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v47,
                   (unsigned int)(v9 + 1));
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
        }
        else
        {
          v48 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                  v20[2],
                  *(unsigned int *)(v7 + 8));
          v38 = v9 + 1;
          v39 = *(__int64 **)(*a4 + 8 * v9);
          v40 = *v39;
          v50 = *((_DWORD *)v39 + 2);
          HIDWORD(v49) = HIDWORD(v40);
          v41 = HIDWORD(v47) + 1;
          v42 = v47;
          LODWORD(v49) = HIDWORD(v47) + 1;
          if ( HIDWORD(v47) == -1 )
            v41 = -1;
          *(_DWORD *)v7 = v41;
          *((_DWORD *)v39 + 1) = v42 - 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v47,
                 v38);
          if ( v5 >= 0 )
          {
            LODWORD(v9) = v9 + 1;
            *a5 = 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v49,
                   ++v38);
          }
          if ( v5 < 0 )
            v38 = v9;
          LODWORD(v9) = v38;
        }
      }
      v26 = *(_DWORD **)(*a4 + 8LL * (unsigned int)v9);
      v27 = v26[2];
      if ( v27 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_24;
        v46 = (unsigned int)(v9 - 1);
        a3 = *(_QWORD *)(*a4 + 8 * v46);
        if ( v27 != *(_DWORD *)(a3 + 8) )
          goto LABEL_24;
        *v26 = *(_DWORD *)a3;
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v46,
          a3);
        LODWORD(v9) = v9 - 1;
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v9,
          a3);
        LODWORD(v9) = v9 - 1;
      }
      *a5 = 1;
LABEL_24:
      a2 = v51;
      v9 = (unsigned int)(v9 + 1);
      if ( v5 < 0 )
        goto LABEL_4;
    }
  }
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v28 = *(_DWORD **)*a4;
    if ( v28[2] == *(_DWORD *)(a3 + 8) && *v28 == *(_DWORD *)a3 )
      v8 = v28[1] != *(_DWORD *)(a3 + 4);
  }
  *a5 = v8;
  if ( v8 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           v7,
                           0LL);
  }
  return (unsigned int)v5;
}
