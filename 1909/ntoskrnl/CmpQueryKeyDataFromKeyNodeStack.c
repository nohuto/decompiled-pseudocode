/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x140280CA8
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x140280148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPopulateCachedInformation @ 0x140280C60 (CmpPopulateCachedInformation.c)
 *     CmpPopulateBasicInformation @ 0x140665300 (CmpPopulateBasicInformation.c)
 *     CmpPopulateNodeInformation @ 0x1406D2390 (CmpPopulateNodeInformation.c)
 *     CmpPopulateFullInformation @ 0x1406DF9A8 (CmpPopulateFullInformation.c)
 *     HvpGetCellContextInitialize @ 0x1408321CC (HvpGetCellContextInitialize.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1408327FC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14083784C (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  char v6; // r15
  __int64 v7; // r13
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 *EntryAtLayerHeight; // rax
  __int16 v14; // cx
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // rbx
  unsigned int v18; // r12d
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned int v21; // r10d
  unsigned int v22; // r11d
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // r15
  int v27; // eax
  int SubKeyCountForKeyNodeStack; // edi
  unsigned int v29; // r9d
  unsigned int v30; // eax
  unsigned int v31; // ecx
  char v32; // al
  unsigned __int16 v33; // dx
  unsigned __int16 v34; // cx
  unsigned int v36; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v38; // [rsp+50h] [rbp-49h]
  unsigned int v39; // [rsp+58h] [rbp-41h]
  __int64 v40; // [rsp+60h] [rbp-39h] BYREF
  __int64 v41; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v42[15]; // [rsp+70h] [rbp-29h] BYREF

  v41 = 0LL;
  memset(v42, 0, 0x30uLL);
  v36 = -1;
  v6 = 0;
  v7 = 0LL;
  HvpGetCellContextInitialize(&v41);
  v9 = *a1;
  v10 = 0;
  v40 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (v9 & 0x8000u) == 0LL )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v9, v9, v8);
      if ( EntryAtLayerHeight[2] )
        break;
      LOWORD(v9) = v9 - 1;
      if ( (v9 & 0x8000u) != 0LL )
      {
        v11 = 0LL;
        goto LABEL_6;
      }
    }
    v11 = *EntryAtLayerHeight;
    v12 = EntryAtLayerHeight[2];
    v40 = v12;
  }
LABEL_6:
  v14 = v9;
  v15 = *(unsigned int *)(v12 + 60);
  v16 = *(_DWORD *)(v12 + 64);
  v17 = *(_QWORD *)(v12 + 4);
  v18 = (unsigned __int16)*(_DWORD *)(v12 + 52);
  v19 = 0LL;
  v37 = *(_DWORD *)(v12 + 56);
  v38 = v15;
  v39 = v16;
  if ( *(char *)(v12 + 13) >= 0 )
  {
    v10 = *(unsigned __int16 *)(v12 + 74);
    v6 = 1;
    v7 = v11;
    v36 = *(_DWORD *)(v12 + 48);
    v19 = 0LL;
  }
  LOWORD(v9) = v9 - 1;
  if ( v14 > 0 )
  {
    do
    {
      v20 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v9, v9, v15);
      if ( v20[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v20) == 1 )
          break;
        if ( v17 < *(_QWORD *)(v23 + 4) )
          v17 = *(_QWORD *)(v23 + 4);
        v25 = (unsigned __int16)*(_DWORD *)(v23 + 52);
        if ( v18 >= v25 )
          v25 = v18;
        v18 = v25;
        if ( !v6 && *(char *)(v23 + 13) >= 0 )
        {
          v6 = 1;
          v10 = *(unsigned __int16 *)(v23 + 74);
          v7 = v24;
          v36 = *(_DWORD *)(v23 + 48);
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v24) )
          break;
      }
      LOWORD(v9) = v9 - 1;
    }
    while ( (v9 & 0x8000u) == 0LL );
    v12 = v40;
    v19 = 0LL;
    v37 = v22;
    v39 = v21;
    v38 = v15;
  }
  if ( v6 && v10 )
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v7 + 8))(v7, v36, &v41);
  else
    v10 = 0;
  v26 = v19;
  if ( !a2 )
  {
    v42[0] = v17;
    v27 = CmpPopulateBasicInformation((unsigned int)v42, v12, a3, a4, (__int64)a5);
LABEL_27:
    SubKeyCountForKeyNodeStack = v27;
    goto LABEL_45;
  }
  if ( a2 == 1 )
  {
    v42[0] = v17;
    v27 = CmpPopulateNodeInformation(v42, v12, v19, v10, a3, a4, a5);
    goto LABEL_27;
  }
  SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v36);
  if ( SubKeyCountForKeyNodeStack >= 0 )
  {
    SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v40);
    if ( SubKeyCountForKeyNodeStack >= 0 )
    {
      if ( v36 )
      {
        v29 = v37;
      }
      else
      {
        v18 = 0;
        v29 = 0;
      }
      if ( (_DWORD)v40 )
      {
        v30 = v38;
        v31 = v39;
      }
      else
      {
        v30 = 0;
        v31 = 0;
      }
      if ( a2 == 4 )
      {
        v42[3] = __PAIR64__(v31, v30);
        v32 = *(_BYTE *)(v12 + 2);
        v33 = *(_WORD *)(v12 + 72);
        HIDWORD(v42[1]) = v36;
        v34 = 2 * v33;
        v42[0] = v17;
        v42[2] = __PAIR64__(v40, v18);
        if ( (v32 & 0x20) == 0 )
          v34 = v33;
        LODWORD(v42[4]) = v34;
        v27 = CmpPopulateCachedInformation((__int64)v42, a3, a4, a5);
        goto LABEL_27;
      }
      if ( a2 == 2 )
      {
        HIDWORD(v42[2]) = v36;
        v42[4] = __PAIR64__(v30, v40);
        LODWORD(v42[5]) = v31;
        v42[0] = v17;
        v42[3] = __PAIR64__(v29, v18);
        v27 = CmpPopulateFullInformation(v42, v26, v10, a3, a4, a5);
        goto LABEL_27;
      }
      SubKeyCountForKeyNodeStack = -1073741811;
    }
  }
LABEL_45:
  if ( v26 )
    (*(void (__fastcall **)(__int64, __int64 *))(v7 + 16))(v7, &v41);
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
