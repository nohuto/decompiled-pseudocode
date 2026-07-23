/*
 * XREFs of PnpProcessRelation @ 0x1406ED92C
 * Callers:
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x1406EDB30 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x1406EDBB0 (PnpProcessBusRelations.c)
 *     PnpBuildRemovalRelationList @ 0x1406F0574 (PnpBuildRemovalRelationList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1406E7780 (PipClearDevNodeFlags.c)
 *     PnpQueryDeviceRelations @ 0x1406E92C0 (PnpQueryDeviceRelations.c)
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x1406EDB30 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x1406EDBB0 (PnpProcessBusRelations.c)
 *     IopAddRelationToList @ 0x1406EDC28 (IopAddRelationToList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1406EDD04 (PipIsDeviceInDeviceObjectList.c)
 *     IopMergeRelationLists @ 0x14083BDC8 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x14083BF34 (IopRemoveRelationFromList.c)
 *     IopCancelPendingEject @ 0x14083C018 (IopCancelPendingEject.c)
 */

__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  ULONG_PTR v10; // r13
  int v11; // eax
  ULONG_PTR BugCheckParameter4; // r14
  __int64 result; // rax
  int v14; // ecx
  _QWORD *v15; // rcx
  unsigned int v16; // r14d
  ULONG_PTR v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r13d
  int v21; // ecx
  __int64 v22; // rcx
  _WORD *v23; // rcx
  __int64 v24; // rcx
  unsigned __int16 *v25; // rdi
  __int64 v26; // rdx
  _WORD *v27; // rcx
  __int64 v28; // rcx
  _WORD *v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // r14d
  ULONG_PTR v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _WORD *v36; // rcx
  __int64 v37; // rcx
  unsigned __int16 *v38; // rdi
  __int64 v39; // rdx
  _WORD *v40; // rcx
  __int64 v41; // rcx
  _WORD *v42; // rcx
  __int64 v43; // rcx
  __int64 *v44; // rsi
  _QWORD *v45; // rcx
  ULONG_PTR v46; // r8
  __int64 v47; // rcx
  _WORD *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  ULONG_PTR v63; // r8
  __int64 v64; // rcx
  _WORD *v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdx
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  int v80; // [rsp+80h] [rbp+18h]

  v80 = a3;
  v5 = 0LL;
  v7 = a3;
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
    if ( *(_DWORD *)(a1 + 300) == 788 )
      return 0LL;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 300);
    if ( (unsigned int)(v21 - 782) <= 1 || v21 == 788 )
      return 3221225473LL;
    if ( *(int *)(a1 + 656) > 0 || ((v21 - 785) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)a4 = 5;
      RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(a1 + 40));
      return 3221225473LL;
    }
    if ( (unsigned int)(v21 - 778) <= 1 )
      return 3221225488LL;
  }
  v10 = BugCheckParameter3;
  v11 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3, 0LL);
  BugCheckParameter4 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
    }
    else if ( v11 != -1073741670 )
    {
      v63 = *(_QWORD *)(a1 + 32);
      if ( v63 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), *(unsigned __int16 *)(v63 + 2));
        v63 = *(_QWORD *)(a1 + 32);
        v64 = *(_QWORD *)(v63 + 8);
        if ( v64 )
        {
          IoAddTriageDumpDataBlock(v64, *(__int16 *)(v64 + 2));
          v63 = *(_QWORD *)(a1 + 32);
          v65 = (_WORD *)(*(_QWORD *)(v63 + 8) + 56LL);
          if ( *v65 )
          {
            IoAddTriageDumpDataBlock((int)v65, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            v63 = *(_QWORD *)(a1 + 32);
          }
        }
        if ( v63 )
          v66 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
        else
          v66 = 0LL;
        if ( v66 )
        {
          if ( v63 )
            v67 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
          else
            v67 = 0LL;
          if ( v63 )
            v68 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
          else
            LODWORD(v68) = 0;
          IoAddTriageDumpDataBlock(v68, 784);
          if ( *(_WORD *)(v67 + 40) )
          {
            IoAddTriageDumpDataBlock(v67 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v67 + 48), *(unsigned __int16 *)(v67 + 40));
          }
          v63 = *(_QWORD *)(a1 + 32);
          if ( v63 )
            v69 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
          else
            v69 = 0LL;
          if ( *(_WORD *)(v69 + 56) )
          {
            if ( v63 )
              v70 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
            else
              LODWORD(v70) = 0;
            IoAddTriageDumpDataBlock(v70 + 56, 2);
            v71 = *(_QWORD *)(a1 + 32);
            if ( v71 )
              v72 = *(_QWORD *)(*(_QWORD *)(v71 + 312) + 40LL);
            else
              v72 = 0LL;
            if ( v71 )
              v73 = *(_QWORD *)(*(_QWORD *)(v71 + 312) + 40LL);
            else
              v73 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v73 + 64), *(unsigned __int16 *)(v72 + 56));
            v63 = *(_QWORD *)(a1 + 32);
          }
          if ( v63 )
          {
            v74 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
          }
          else
          {
            v74 = 0LL;
            v63 = 0LL;
          }
          if ( *(_QWORD *)(v74 + 16) )
          {
            if ( v63 )
            {
              v75 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
            }
            else
            {
              v75 = 0LL;
              v63 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v75 + 16) + 56LL) )
            {
              if ( v63 )
                v76 = *(_QWORD *)(*(_QWORD *)(v63 + 312) + 40LL);
              else
                v76 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v76 + 16) + 56, 2);
              v77 = *(_QWORD *)(a1 + 32);
              if ( v77 )
                v78 = *(_QWORD *)(*(_QWORD *)(v77 + 312) + 40LL);
              else
                v78 = 0LL;
              if ( v77 )
                v5 = *(_QWORD *)(*(_QWORD *)(v77 + 312) + 40LL);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v78 + 16) + 56LL));
              v63 = *(_QWORD *)(a1 + 32);
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, v63, BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    v44 = (__int64 *)IopPendingEjects;
    if ( (__int64 *)IopPendingEjects == &IopPendingEjects )
      goto LABEL_78;
    while ( 1 )
    {
      v45 = (_QWORD *)v44[8];
      if ( v45 )
      {
        if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*v45, *(_QWORD *)(a1 + 32), 0LL) )
          break;
      }
      v44 = (__int64 *)*v44;
      if ( v44 == &IopPendingEjects )
        goto LABEL_77;
    }
    if ( a2 == 4 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject(v44);
      IopMergeRelationLists(BugCheckParameter3, v44[8], 0LL);
      if ( v80 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL, 0LL);
LABEL_77:
      if ( v44 != &IopPendingEjects )
        return (unsigned int)BugCheckParameter4;
LABEL_78:
      v46 = *(_QWORD *)(a1 + 32);
      if ( v46 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), *(unsigned __int16 *)(v46 + 2));
        v46 = *(_QWORD *)(a1 + 32);
        v47 = *(_QWORD *)(v46 + 8);
        if ( v47 )
        {
          IoAddTriageDumpDataBlock(v47, *(__int16 *)(v47 + 2));
          v46 = *(_QWORD *)(a1 + 32);
          v48 = (_WORD *)(*(_QWORD *)(v46 + 8) + 56LL);
          if ( *v48 )
          {
            IoAddTriageDumpDataBlock((int)v48, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            v46 = *(_QWORD *)(a1 + 32);
          }
        }
        if ( v46 )
          v49 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
        else
          v49 = 0LL;
        if ( v49 )
        {
          if ( v46 )
            v50 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
          else
            v50 = 0LL;
          if ( v46 )
            v51 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
          else
            LODWORD(v51) = 0;
          IoAddTriageDumpDataBlock(v51, 784);
          if ( *(_WORD *)(v50 + 40) )
          {
            IoAddTriageDumpDataBlock(v50 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v50 + 48), *(unsigned __int16 *)(v50 + 40));
          }
          v46 = *(_QWORD *)(a1 + 32);
          if ( v46 )
            v52 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
          else
            v52 = 0LL;
          if ( *(_WORD *)(v52 + 56) )
          {
            if ( v46 )
              v53 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
            else
              LODWORD(v53) = 0;
            IoAddTriageDumpDataBlock(v53 + 56, 2);
            v54 = *(_QWORD *)(a1 + 32);
            if ( v54 )
              v55 = *(_QWORD *)(*(_QWORD *)(v54 + 312) + 40LL);
            else
              v55 = 0LL;
            if ( v54 )
              v56 = *(_QWORD *)(*(_QWORD *)(v54 + 312) + 40LL);
            else
              v56 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v56 + 64), *(unsigned __int16 *)(v55 + 56));
            v46 = *(_QWORD *)(a1 + 32);
          }
          if ( v46 )
          {
            v57 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
          }
          else
          {
            v57 = 0LL;
            v46 = 0LL;
          }
          if ( *(_QWORD *)(v57 + 16) )
          {
            if ( v46 )
            {
              v58 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
            }
            else
            {
              v58 = 0LL;
              v46 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v58 + 16) + 56LL) )
            {
              if ( v46 )
                v59 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
              else
                v59 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v59 + 16) + 56, 2);
              v60 = *(_QWORD *)(a1 + 32);
              if ( v60 )
                v61 = *(_QWORD *)(*(_QWORD *)(v60 + 312) + 40LL);
              else
                v61 = 0LL;
              if ( v60 )
                v62 = *(_QWORD *)(*(_QWORD *)(v60 + 312) + 40LL);
              else
                v62 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v62 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v61 + 16) + 56LL));
              v46 = *(_QWORD *)(a1 + 32);
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 6uLL, v46, 0LL, 0LL);
    }
    if ( a2 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(v44[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000);
      goto LABEL_77;
    }
    return 3221225473LL;
  }
  result = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
  if ( (int)result >= 0 )
  {
    v14 = *(_DWORD *)(a1 + 300);
    if ( (unsigned int)(v14 - 782) <= 1 )
      v14 = *(_DWORD *)(a1 + 304);
    if ( ((unsigned int)(v14 - 775) <= 1 || (unsigned int)(v14 - 778) <= 1)
      && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 3, 0LL, (__int64)P) >= 0 )
    {
      v15 = P[0];
      if ( P[0] )
      {
        v16 = 0;
        if ( *(_DWORD *)P[0] )
        {
          do
          {
            v17 = v15[v16 + 1];
            v18 = *(_QWORD *)(v17 + 312);
            if ( (*(_DWORD *)(v18 + 32) & 2) != 0 || (v19 = *(_QWORD *)(v18 + 40)) == 0 || !*(_QWORD *)(v19 + 16) )
            {
              IoAddTriageDumpDataBlock(v17, *(unsigned __int16 *)(v17 + 2));
              v22 = *(_QWORD *)(v17 + 8);
              if ( v22 )
              {
                IoAddTriageDumpDataBlock(v22, *(__int16 *)(v22 + 2));
                v23 = (_WORD *)(*(_QWORD *)(v17 + 8) + 56LL);
                if ( *v23 )
                {
                  IoAddTriageDumpDataBlock((int)v23, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v17 + 8) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(v17 + 8) + 56LL));
                }
              }
              v24 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
              if ( v24 )
              {
                v25 = (unsigned __int16 *)(v24 + 40);
                IoAddTriageDumpDataBlock(v24, 784);
                if ( *v25 )
                {
                  IoAddTriageDumpDataBlock((int)v25, 2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v25 + 1), *v25);
                }
                v26 = *(_QWORD *)(v17 + 312);
                v27 = (_WORD *)(*(_QWORD *)(v26 + 40) + 56LL);
                if ( *v27 )
                {
                  IoAddTriageDumpDataBlock((int)v27, 2);
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 64LL),
                    *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 56LL));
                  v26 = *(_QWORD *)(v17 + 312);
                }
                v28 = *(_QWORD *)(*(_QWORD *)(v26 + 40) + 16LL);
                if ( v28 )
                {
                  v29 = (_WORD *)(v28 + 56);
                  if ( *v29 )
                  {
                    IoAddTriageDumpDataBlock((int)v29, 2);
                    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) + 16LL);
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 64), *(unsigned __int16 *)(v30 + 56));
                  }
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, v17, 3uLL, 0LL);
            }
            v20 = PnpProcessRelation(v19, a2, 0, a4, v10);
            ObfDereferenceObject((PVOID)v17);
            v15 = P[0];
            if ( v20 < 0 )
              goto LABEL_34;
            v10 = BugCheckParameter3;
          }
          while ( ++v16 < *(_DWORD *)P[0] );
        }
        ExFreePoolWithTag(v15, 0);
      }
    }
    if ( a2 )
    {
      if ( a2 - 5 > 1 && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1, 0LL, (__int64)P) >= 0 )
      {
        v15 = P[0];
        if ( P[0] )
        {
          v31 = 0;
          if ( *(_DWORD *)P[0] )
          {
            while ( 1 )
            {
              v32 = v15[v31 + 1];
              v33 = *(_QWORD *)(v32 + 312);
              if ( (*(_DWORD *)(v33 + 32) & 2) != 0 || (v34 = *(_QWORD *)(v33 + 40)) == 0 || !*(_QWORD *)(v34 + 16) )
              {
                IoAddTriageDumpDataBlock(v32, *(unsigned __int16 *)(v32 + 2));
                v35 = *(_QWORD *)(v32 + 8);
                if ( v35 )
                {
                  IoAddTriageDumpDataBlock(v35, *(__int16 *)(v35 + 2));
                  v36 = (_WORD *)(*(_QWORD *)(v32 + 8) + 56LL);
                  if ( *v36 )
                  {
                    IoAddTriageDumpDataBlock((int)v36, 2);
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(v32 + 8) + 64LL),
                      *(unsigned __int16 *)(*(_QWORD *)(v32 + 8) + 56LL));
                  }
                }
                v37 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
                if ( v37 )
                {
                  v38 = (unsigned __int16 *)(v37 + 40);
                  IoAddTriageDumpDataBlock(v37, 784);
                  if ( *v38 )
                  {
                    IoAddTriageDumpDataBlock((int)v38, 2);
                    IoAddTriageDumpDataBlock(*((_QWORD *)v38 + 1), *v38);
                  }
                  v39 = *(_QWORD *)(v32 + 312);
                  v40 = (_WORD *)(*(_QWORD *)(v39 + 40) + 56LL);
                  if ( *v40 )
                  {
                    IoAddTriageDumpDataBlock((int)v40, 2);
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 64LL),
                      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 56LL));
                    v39 = *(_QWORD *)(v32 + 312);
                  }
                  v41 = *(_QWORD *)(*(_QWORD *)(v39 + 40) + 16LL);
                  if ( v41 )
                  {
                    v42 = (_WORD *)(v41 + 56);
                    if ( *v42 )
                    {
                      IoAddTriageDumpDataBlock((int)v42, 2);
                      v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 16LL);
                      IoAddTriageDumpDataBlock(*(_QWORD *)(v43 + 64), *(unsigned __int16 *)(v43 + 56));
                    }
                  }
                }
                KeBugCheckEx(0xCAu, 0xBuLL, v32, 1uLL, 0LL);
              }
              v20 = PnpProcessRelation(v34, a2, 0, a4, v10);
              ObfDereferenceObject((PVOID)v32);
              v15 = P[0];
              if ( v20 < 0 )
                break;
              v10 = BugCheckParameter3;
              if ( ++v31 >= *(_DWORD *)P[0] )
                goto LABEL_54;
            }
LABEL_34:
            ExFreePoolWithTag(v15, 0);
            return (unsigned int)v20;
          }
LABEL_54:
          ExFreePoolWithTag(v15, 0);
        }
      }
    }
    result = PnpProcessDependencyRelations(a1, a2, v80 != 0, a4, BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      LODWORD(BugCheckParameter4) = 0;
      return (unsigned int)BugCheckParameter4;
    }
  }
  return result;
}
