/*
 * XREFs of CmpPreserveSystemHiveData @ 0x140837104
 * Callers:
 *     CmReplaceKey @ 0x140829994 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x14019FC00 (_strnicmp.c)
 *     _wcsnicmp @ 0x1401A0240 (_wcsnicmp.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 *     CmpFindNameInList @ 0x1406304D4 (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x14064E540 (CmpGetValueData.c)
 *     CmpFindSubKeyByNumber @ 0x1406D8E24 (CmpFindSubKeyByNumber.c)
 *     CmpWalkPath @ 0x1407655B0 (CmpWalkPath.c)
 *     CmpCopySyncTree @ 0x140835FBC (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r14d
  const wchar_t **v10; // r15
  const WCHAR *v11; // rbx
  int v12; // r13d
  int v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  int v16; // ebx
  WCHAR *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // r15
  void (__fastcall *v22)(__int64, _DWORD *); // rax
  _WORD *v23; // r14
  unsigned int v24; // ebx
  size_t v25; // rbx
  __int64 *v26; // r14
  _DWORD *v27; // r15
  void *v28; // rcx
  char v29; // r12
  unsigned int v30; // r14d
  __int64 *v31; // rbx
  unsigned int v32; // eax
  unsigned __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  _DWORD *v37; // rcx
  unsigned int v38; // r15d
  __int64 v39; // rax
  const char *v40; // rcx
  int v41; // eax
  bool v42; // bl
  unsigned int v43; // r12d
  int *v44; // r14
  unsigned int v45; // eax
  __int64 v46; // rbx
  unsigned int v47; // ebx
  __int64 v48; // rax
  size_t Size; // [rsp+28h] [rbp-D8h]
  _DWORD v51[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v52[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v53; // [rsp+50h] [rbp-B0h]
  _DWORD v54[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v55[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v56[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v57[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  const wchar_t *v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  int v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h]
  _DWORD v65[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v67[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-20h] BYREF
  int v69; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v70; // [rsp+ECh] [rbp-14h] BYREF
  _BYTE v71[4]; // [rsp+F4h] [rbp-Ch] BYREF
  const wchar_t *v72; // [rsp+F8h] [rbp-8h]
  const wchar_t *v73; // [rsp+100h] [rbp+0h]
  int v74; // [rsp+108h] [rbp+8h]
  __int64 v75; // [rsp+110h] [rbp+10h]
  int v76; // [rsp+118h] [rbp+18h]
  int v77; // [rsp+11Ch] [rbp+1Ch]
  int v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  int v80; // [rsp+130h] [rbp+30h]
  int v81; // [rsp+134h] [rbp+34h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  int v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+144h] [rbp+44h]
  char v85; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v86; // [rsp+1A0h] [rbp+A0h] BYREF
  const wchar_t *v87; // [rsp+1A8h] [rbp+A8h] BYREF
  WCHAR *PoolWithTag; // [rsp+1B0h] [rbp+B0h]
  int v89; // [rsp+1B8h] [rbp+B8h] BYREF
  int v90; // [rsp+1BCh] [rbp+BCh]

  v58 = 2LL;
  v90 = 0;
  v57[1] = 0;
  v55[1] = 0;
  v52[1] = 0;
  v54[1] = 0;
  v56[1] = 0;
  v51[1] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v87 = L"WPA";
  v61 = L"Control\\FastCache";
  v65[1] = 0;
  v67[1] = 0;
  v70 = 0LL;
  v72 = L"Control\\ProductOptions";
  v73 = L"ProductPolicy";
  v77 = 0;
  v81 = 0;
  v84 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v89 = -1;
  v57[0] = -1;
  v55[0] = -1;
  v52[0] = -1;
  v54[0] = -1;
  v56[0] = -1;
  v51[0] = -1;
  v62 = 0LL;
  v63 = -1;
  v64 = 0LL;
  v65[0] = -1;
  v65[2] = -1;
  v66 = 0LL;
  v67[0] = -1;
  v68 = 0LL;
  v69 = -1;
  v71[0] = 0;
  v74 = -1;
  v75 = 0LL;
  v76 = -1;
  v78 = -1;
  v79 = 0LL;
  v80 = -1;
  v82 = 0LL;
  v83 = -1;
  v85 = 0;
  v5 = *(_DWORD *)(v4 + 36);
  PoolWithTag = 0LL;
  v59 = 0LL;
  v53 = 0LL;
  v86 = v5;
  if ( v5 == -1 || (v6 = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 36LL), v6 == -1) )
  {
LABEL_71:
    v16 = -1073741492;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v5, v56);
    v59 = v7;
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v6, v57);
    v53 = (_DWORD *)v8;
    if ( v7 && v8 )
    {
      v9 = 0;
      v10 = &v87;
      do
      {
        v11 = *v10;
        v12 = CmpWalkPath(a1, v5, *v10);
        v13 = CmpWalkPath(a2, v6, v11);
        if ( v12 == -1 || v13 == -1 )
        {
          v16 = -1073741492;
          goto LABEL_26;
        }
        if ( !CmpCopySyncTree(a1, v12, a2, v13, 2, 1) )
          goto LABEL_71;
        v5 = v86;
        ++v9;
        ++v10;
      }
      while ( !v9 );
      v14 = v86;
      v15 = CmpWalkPath(a1, v86, L"CurrentControlSet");
      if ( v15 == -1 )
      {
        v16 = 0;
        v17 = 0LL;
        goto LABEL_27;
      }
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v15, v54);
      if ( v18 )
      {
        CmpFindNameInList(a1, (unsigned int *)(v18 + 36), &CmSymbolicLinkValueName.Length, 0, 0LL, &v86);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v54);
        if ( v86 != -1 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v86, v51);
          v20 = v19;
          if ( v19 )
          {
            if ( *(_DWORD *)(v19 + 12) == 6 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v19 + 8), v52);
              v22 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
              if ( !v21 )
              {
                v22(a1, v51);
                v16 = -1073741670;
                v17 = 0LL;
                goto LABEL_27;
              }
              v23 = (_WORD *)(v21 + *(unsigned int *)(v20 + 4) - 2LL);
              v22(a1, v51);
              v24 = 0;
              while ( *v23 != 92 && (unsigned __int64)v23 >= v21 )
              {
                ++v24;
                --v23;
              }
              PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (v24 + 1), 0x68504D43u);
              v17 = PoolWithTag;
              if ( !PoolWithTag )
              {
                (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v52);
                v16 = -1073741801;
                goto LABEL_27;
              }
              v25 = v24;
              memmove(PoolWithTag, v23 + 1, v25 * 2);
              v17[v25] = 0;
              v15 = CmpWalkPath(a1, v14, v17);
              (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v52);
              if ( v15 == -1 )
              {
LABEL_25:
                v16 = 0;
LABEL_26:
                v17 = PoolWithTag;
                goto LABEL_27;
              }
            }
            else
            {
              (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v51);
            }
          }
        }
        v29 = 0;
        v30 = 0;
        v31 = &v62;
        do
        {
          v32 = CmpWalkPath(a1, v15, (const WCHAR *)*(v31 - 1));
          *((_DWORD *)v31 + 2) = v32;
          if ( v32 != -1 )
          {
            if ( *v31 )
            {
              v33 = 88LL * v30;
              v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v32, &v65[v33 / 4]);
              v31[2] = v34;
              if ( !v34 )
                goto LABEL_51;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)*v31);
              CmpFindNameInList(a1, (unsigned int *)(v31[2] + 36), &DestinationString.Length, 0, 0LL, &v86);
              v35 = v86;
              *((_DWORD *)v31 + 8) = v86;
              if ( (_DWORD)v35 != -1 )
              {
                v29 = 1;
                v36 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, v35, &v67[v33 / 4]);
                v31[5] = v36;
                if ( !v36 )
                  goto LABEL_51;
                if ( !CmpGetValueData(
                        a1,
                        *((unsigned int *)v31 + 8),
                        v36,
                        (unsigned int *)&v71[v33 - 4],
                        (__int64)&v68 + v33,
                        (__int64)&v71[v33],
                        (__int64)&v69 + v33) )
                {
                  v16 = -1073741492;
                  goto LABEL_26;
                }
              }
            }
            else
            {
              v29 = 1;
            }
          }
          ++v30;
          v31 += 11;
        }
        while ( v30 < 2 );
        if ( v29 )
        {
          v37 = v53;
          v38 = 0;
          if ( v53[5] )
          {
            while ( 1 )
            {
              CmpFindSubKeyByNumber(a2, v37, v38, &v86);
              v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v86, &v89);
              if ( !v39 )
                break;
              if ( *(_WORD *)(v39 + 72) == 13 )
              {
                v40 = (const char *)(v39 + 76);
                if ( (*(_BYTE *)(v39 + 2) & 0x20) != 0 )
                  v41 = strnicmp(v40, "ControlSet000", 0xAuLL);
                else
                  v41 = wcsnicmp((const wchar_t *)v40, L"ControlSet000", 0xAuLL);
                v42 = v41 == 0;
                (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v89);
                if ( v42 )
                {
                  v43 = 0;
                  v44 = &v63;
                  do
                  {
                    if ( *v44 != -1 && (!*((_QWORD *)v44 - 1) || v44[6] != -1) )
                    {
                      v45 = CmpWalkPath(a2, v86, *((const WCHAR **)v44 - 2));
                      if ( v45 != -1 )
                      {
                        if ( *((_QWORD *)v44 - 1) )
                        {
                          v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v45, &v89);
                          if ( !v46 )
                            goto LABEL_51;
                          RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v44 - 1));
                          CmpFindNameInList(a2, (unsigned int *)(v46 + 36), &DestinationString.Length, 0, 0LL, &v87);
                          (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v89);
                          v47 = (unsigned int)v87;
                          if ( (_DWORD)v87 != -1 )
                          {
                            v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(
                                    a2,
                                    (unsigned int)v87,
                                    v55);
                            if ( !v48 )
                              goto LABEL_51;
                            LODWORD(Size) = v44[16];
                            v16 = CmpSetValueKeyExisting(
                                    a2,
                                    v47,
                                    v48,
                                    *(_DWORD *)(*((_QWORD *)v44 + 4) + 12LL),
                                    *((char **)v44 + 6),
                                    Size,
                                    v47 >> 31);
                            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v55);
                            if ( v16 < 0 )
                              goto LABEL_26;
                          }
                        }
                        else
                        {
                          CmpCopySyncTree(a1, *v44, a2, v45, 2, 1);
                        }
                      }
                    }
                    ++v43;
                    v44 += 22;
                  }
                  while ( v43 < 2 );
                }
              }
              else
              {
                (*(void (__fastcall **)(ULONG_PTR, int *, _QWORD))(a2 + 16))(a2, &v89, 0LL);
              }
              v37 = v53;
              if ( ++v38 >= v53[5] )
                goto LABEL_25;
            }
LABEL_51:
            v16 = -1073741670;
            goto LABEL_26;
          }
        }
        goto LABEL_25;
      }
    }
    v16 = -1073741670;
  }
  v17 = 0LL;
LABEL_27:
  v26 = &v66;
  v27 = v67;
  do
  {
    if ( *(v26 - 3) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27 - 6);
    if ( *v26 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27);
    v28 = (void *)v26[2];
    if ( v28 )
    {
      if ( *((_BYTE *)v26 + 36) )
        ExFreePoolWithTag(v28, 0);
      else
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27 + 4);
    }
    v27 += 22;
    v26 += 11;
    --v58;
  }
  while ( v58 );
  if ( v59 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v56);
  if ( v53 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v57);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v16;
}
