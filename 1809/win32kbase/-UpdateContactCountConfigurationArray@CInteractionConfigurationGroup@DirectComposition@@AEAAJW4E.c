/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0037888
 * Callers:
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00374FC (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C003757C (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00375FC (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 * Callees:
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0037A30 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C0037A60 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0037CA0 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C0037D2C (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        int a2,
        unsigned int *a3,
        __int64 *a4,
        bool *a5)
{
  int v5; // r15d
  bool v8; // r14
  __int64 v9; // rdi
  int v10; // eax
  bool v11; // cl
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  unsigned int v16; // ecx
  unsigned int v17; // r13d
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  unsigned int *v20; // r11
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // r11
  int v27; // eax
  _DWORD *v28; // r9
  int v29; // edx
  _DWORD *v30; // rcx
  unsigned int v31; // ecx
  int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // r13d
  __int64 *v41; // rcx
  __int64 v42; // xmm0_8
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  __int64 v46; // r13
  _DWORD *v47; // r8
  __int64 v48; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v49; // [rsp+28h] [rbp-18h]
  __int64 v50; // [rsp+30h] [rbp-10h] BYREF
  int v51; // [rsp+38h] [rbp-8h]
  unsigned int v52; // [rsp+80h] [rbp+40h]
  int v53; // [rsp+88h] [rbp+48h]

  v53 = a2;
  v5 = 0;
  *a5 = 0;
  v8 = 1;
  if ( a2 != 3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a4 + 2) || (v16 = *a3, v17 = a3[1], *a3 > v17) )
      {
LABEL_4:
        if ( v5 >= 0 )
        {
          v10 = *((_DWORD *)a4 + 2);
          v11 = v10 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v10 - 1)) + 4LL) == -1;
          if ( *a3 <= a3[1] && !v11 && (a2 == 6 || a2 == 1) )
          {
            v12 = a3[2];
            v50 = *(_QWORD *)a3;
            v13 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v12);
            v14 = *((unsigned int *)a4 + 2);
            v51 = v13;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   v14);
            if ( v5 >= 0 )
              *a5 = 1;
          }
        }
        return (unsigned int)v5;
      }
      v18 = *(_QWORD *)a3;
      v49 = a3[2];
      v19 = *a4;
      v48 = v18;
      v20 = *(unsigned int **)(v19 + 8 * v9);
      v21 = *v20;
      if ( v16 < (unsigned int)v21 )
      {
        v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, a3[2]);
        v31 = **(_DWORD **)(*a4 + 8 * v9) - 1;
        if ( a3[1] < v31 )
          v31 = a3[1];
        HIDWORD(v48) = v31;
        if ( v31 == -1 )
          v32 = -1;
        else
          v32 = v31 + 1;
        *a3 = v32;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v48,
               (unsigned int)v9);
        if ( v5 >= 0 )
          *a5 = 1;
      }
      else
      {
        v22 = v20[1];
        v52 = v22;
        if ( v16 == (_DWORD)v21 )
        {
          v23 = a3[2];
          v24 = v20[2];
          if ( v17 < v22 )
          {
            v33 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v24, v23);
            v34 = a3[1];
            v49 = v33;
            v35 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
            if ( v34 < v35 )
              v35 = v34;
            HIDWORD(v48) = v35;
            v36 = -1;
            if ( v35 != -1 )
              v36 = v35 + 1;
            *a3 = v36;
            **(_DWORD **)(*a4 + 8 * v9) = v35 + 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v48,
                   (unsigned int)v9);
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
          else
          {
            v25 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v24, v23);
            v21 = v25;
            if ( v17 == v52 )
            {
              *(_DWORD *)(v26 + 8) = v25;
              if ( HIDWORD(v48) == -1 )
                v27 = -1;
              else
                v27 = HIDWORD(v48) + 1;
              *a3 = v27;
            }
            else
            {
              v37 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
              HIDWORD(v48) = v37;
              if ( v37 == -1 )
                v38 = -1;
              else
                v38 = v37 + 1;
              *a3 = v38;
              v39 = *(_QWORD *)(*a4 + 8 * v9);
              *(_QWORD *)v39 = v48;
              *(_DWORD *)(v39 + 8) = v21;
            }
          }
        }
        else if ( v17 >= v22 )
        {
          if ( v16 <= v22 )
          {
            v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v20[2], a3[2]);
            v44 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
            HIDWORD(v48) = v44;
            v45 = v44 == -1 ? -1 : v44 + 1;
            *a3 = v45;
            *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL) = v48 - 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v48,
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
          v49 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v20[2], a3[2]);
          v40 = v9 + 1;
          v41 = *(__int64 **)(*a4 + 8 * v9);
          v42 = *v41;
          v51 = *((_DWORD *)v41 + 2);
          HIDWORD(v50) = HIDWORD(v42);
          v43 = HIDWORD(v48) + 1;
          LODWORD(v50) = HIDWORD(v48) + 1;
          if ( HIDWORD(v48) == -1 )
            v43 = -1;
          *a3 = v43;
          *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL) = v48 - 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v48,
                 v40);
          if ( v5 >= 0 )
          {
            LODWORD(v9) = v9 + 1;
            *a5 = 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   ++v40);
          }
          if ( v5 < 0 )
            v40 = v9;
          LODWORD(v9) = v40;
        }
      }
      v28 = *(_DWORD **)(*a4 + 8LL * (unsigned int)v9);
      v29 = v28[2];
      if ( v29 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_24;
        v46 = (unsigned int)(v9 - 1);
        v47 = *(_DWORD **)(*a4 + 8 * v46);
        if ( v29 != v47[2] )
          goto LABEL_24;
        *v28 = *v47;
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v46,
          v47);
        LODWORD(v9) = v9 - 1;
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v9,
          v21);
        LODWORD(v9) = v9 - 1;
      }
      *a5 = 1;
LABEL_24:
      a2 = v53;
      v9 = (unsigned int)(v9 + 1);
      if ( v5 < 0 )
        goto LABEL_4;
    }
  }
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v30 = *(_DWORD **)*a4;
    if ( v30[2] == a3[2] && *v30 == *a3 )
      v8 = v30[1] != a3[1];
  }
  *a5 = v8;
  if ( v8 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
