/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x14026D664
 * Callers:
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x14026CB58 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPopulateCachedInformation @ 0x14026D61C (CmpPopulateCachedInformation.c)
 *     CmpPopulateNodeInformation @ 0x1405B014C (CmpPopulateNodeInformation.c)
 *     CmpPopulateBasicInformation @ 0x1405D47B0 (CmpPopulateBasicInformation.c)
 *     CmpPopulateFullInformation @ 0x1406BD7BC (CmpPopulateFullInformation.c)
 *     HvpGetCellContextInitialize @ 0x1407FA888 (HvpGetCellContextInitialize.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1407FFFDC (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(__int16 *a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  char v6; // r15
  __int64 v7; // r13
  __int16 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 *EntryAtLayerHeight; // rax
  __int16 v14; // cx
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  __int64 v17; // rbx
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int16 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r10d
  unsigned int v25; // r11d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r15
  int v33; // eax
  int SubKeyCountForKeyNodeStack; // edi
  unsigned int v35; // r9d
  unsigned int v36; // eax
  unsigned int v37; // ecx
  char v38; // al
  unsigned __int16 v39; // dx
  unsigned __int16 v40; // cx
  unsigned int v42; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v44; // [rsp+50h] [rbp-49h]
  unsigned int v45; // [rsp+58h] [rbp-41h]
  __int64 v46; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v47[6]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v48[80]; // [rsp+98h] [rbp-1h] BYREF

  memset(v47, 0, sizeof(v47));
  v42 = -1;
  v6 = 0;
  v7 = 0LL;
  HvpGetCellContextInitialize(v48);
  v8 = *a1;
  v10 = v9;
  v46 = v9;
  v11 = (unsigned int)v9;
  v12 = (unsigned int)v9;
  if ( v8 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v8);
      if ( EntryAtLayerHeight[2] )
        break;
      if ( --v8 < 0 )
      {
        v11 = v12;
        goto LABEL_6;
      }
    }
    v11 = *EntryAtLayerHeight;
    v12 = EntryAtLayerHeight[2];
    v46 = v12;
  }
LABEL_6:
  v14 = v8;
  v15 = *(_DWORD *)(v12 + 60);
  v16 = *(_DWORD *)(v12 + 64);
  v17 = *(_QWORD *)(v12 + 4);
  v18 = (unsigned __int16)*(_DWORD *)(v12 + 52);
  v19 = 0LL;
  v43 = *(_DWORD *)(v12 + 56);
  v44 = v15;
  v45 = v16;
  if ( *(char *)(v12 + 13) >= 0 )
  {
    v10 = *(unsigned __int16 *)(v12 + 74);
    v6 = 1;
    v7 = v11;
    v42 = *(_DWORD *)(v12 + 48);
    v19 = 0LL;
  }
  v20 = v8 - 1;
  if ( v14 > 0 )
  {
    do
    {
      v21 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v20);
      v26 = v21[2];
      if ( v26 )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v21, v26, v22, v23) == 1 )
          break;
        if ( v17 < *(_QWORD *)(v27 + 4) )
          v17 = *(_QWORD *)(v27 + 4);
        v30 = (unsigned __int16)*(_DWORD *)(v27 + 52);
        if ( v18 >= v30 )
          v30 = v18;
        v18 = v30;
        v31 = *(_DWORD *)(v27 + 60);
        if ( (unsigned int)v23 >= v31 )
          v31 = v23;
        if ( !v6 && *(char *)(v27 + 13) >= 0 )
        {
          v6 = 1;
          v10 = *(unsigned __int16 *)(v27 + 74);
          v7 = v28;
          v42 = *(_DWORD *)(v27 + 48);
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v28, v27, v29, v31) )
          break;
      }
      v20 = v22 - 1;
    }
    while ( v20 >= 0 );
    v12 = v46;
    v19 = 0LL;
    v43 = v25;
    v45 = v24;
    v44 = v23;
  }
  if ( v6 && v10 )
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v7 + 8))(v7, v42, v48);
  else
    v10 = 0;
  v32 = v19;
  if ( !a2 )
  {
    v47[0] = v17;
    v33 = CmpPopulateBasicInformation((unsigned int)v47, v12, a3, a4, (__int64)a5);
LABEL_29:
    SubKeyCountForKeyNodeStack = v33;
    goto LABEL_47;
  }
  if ( a2 == 1 )
  {
    v47[0] = v17;
    v33 = CmpPopulateNodeInformation(v47, v12, v19, v10, a3, a4, a5);
    goto LABEL_29;
  }
  SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v42);
  if ( SubKeyCountForKeyNodeStack >= 0 )
  {
    SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v46);
    if ( SubKeyCountForKeyNodeStack >= 0 )
    {
      if ( v42 )
      {
        v35 = v43;
      }
      else
      {
        v18 = 0;
        v35 = 0;
      }
      if ( (_DWORD)v46 )
      {
        v36 = v44;
        v37 = v45;
      }
      else
      {
        v36 = 0;
        v37 = 0;
      }
      if ( a2 == 4 )
      {
        v47[3] = __PAIR64__(v37, v36);
        v38 = *(_BYTE *)(v12 + 2);
        v39 = *(_WORD *)(v12 + 72);
        HIDWORD(v47[1]) = v42;
        v40 = 2 * v39;
        v47[0] = v17;
        v47[2] = __PAIR64__(v46, v18);
        if ( (v38 & 0x20) == 0 )
          v40 = v39;
        LODWORD(v47[4]) = v40;
        v33 = CmpPopulateCachedInformation((__int64)v47, a3, a4, a5);
        goto LABEL_29;
      }
      if ( a2 == 2 )
      {
        HIDWORD(v47[2]) = v42;
        v47[4] = __PAIR64__(v36, v46);
        LODWORD(v47[5]) = v37;
        v47[0] = v17;
        v47[3] = __PAIR64__(v35, v18);
        v33 = CmpPopulateFullInformation(v47, v32, v10, a3, a4, a5);
        goto LABEL_29;
      }
      SubKeyCountForKeyNodeStack = -1073741811;
    }
  }
LABEL_47:
  if ( v32 )
    (*(void (__fastcall **)(__int64, _BYTE *))(v7 + 16))(v7, v48);
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
