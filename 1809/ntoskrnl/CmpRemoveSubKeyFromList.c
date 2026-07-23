/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x1405AF780
 * Callers:
 *     CmpRemoveSubKey @ 0x1405AF6EC (CmpRemoveSubKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140805468 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpFindSubKeyInRoot @ 0x1405D5F64 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeaf @ 0x1407FFE88 (CmpFindSubKeyInLeaf.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  int v3; // esi
  _WORD *v6; // r14
  _WORD *v8; // rax
  char v9; // si
  __int16 v10; // r12
  unsigned int v11; // r15d
  __int64 (__fastcall *v12)(ULONG_PTR, _QWORD, __int64 *); // rax
  _WORD *v13; // rbx
  int SubKeyInRoot; // r13d
  UNICODE_STRING *p_DestinationString; // r8
  __int64 (__fastcall *v16)(ULONG_PTR, _QWORD, __int64 *); // rax
  UNICODE_STRING *v17; // r8
  int SubKeyInLeaf; // eax
  __int64 v19; // rdx
  bool v20; // zf
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // ax
  size_t v23; // r8
  _WORD *v24; // rdx
  _WORD *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v31; // [rsp+30h] [rbp-30h] BYREF
  int v32; // [rsp+38h] [rbp-28h] BYREF
  int v33; // [rsp+3Ch] [rbp-24h]
  _DWORD v34[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+A0h] [rbp+40h] BYREF
  int *v37; // [rsp+A8h] [rbp+48h]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+58h]

  v37 = a2;
  v3 = -1;
  v34[0] = -1;
  v34[1] = 0;
  v31 = 0xFFFFFFFFLL;
  v32 = -1;
  v33 = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  a3,
                  v34);
  if ( !v8 )
    return 0;
  v10 = v8[1] & 0x20;
  DestinationString.Length = v8[36];
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = v8 + 38;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v34);
  v11 = *a2;
  v12 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8);
  LODWORD(BugCheckParameter3) = v11;
  v13 = (_WORD *)v12(BugCheckParameter2, v11, &v31);
  if ( !v13 )
    return 0;
  SubKeyInRoot = 0x80000000;
  if ( *v13 != 26994 )
    goto LABEL_11;
  p_DestinationString = &DestinationString;
  if ( v10 )
    LODWORD(p_DestinationString) = 0;
  SubKeyInRoot = CmpFindSubKeyInRoot(
                   BugCheckParameter2,
                   (_DWORD)v13,
                   (_DWORD)p_DestinationString,
                   (unsigned __int64)&DestinationString & -(__int64)(v10 != 0),
                   (__int64)&v36);
  if ( SubKeyInRoot < 0 )
    goto LABEL_8;
  v6 = v13;
  v32 = v31;
  LOWORD(v33) = WORD2(v31);
  v31 = 0LL;
  v16 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8);
  LODWORD(BugCheckParameter3) = v36;
  LODWORD(v31) = -1;
  v13 = (_WORD *)v16(BugCheckParameter2, v36, &v31);
  if ( v13 )
  {
LABEL_11:
    v17 = &DestinationString;
    if ( v10 )
      LODWORD(v17) = 0;
    SubKeyInLeaf = CmpFindSubKeyInLeaf(
                     BugCheckParameter2,
                     (_DWORD)v13,
                     (_DWORD)v17,
                     (unsigned __int64)&DestinationString & -(__int64)(v10 != 0),
                     (__int64)&v36);
    v19 = (unsigned int)SubKeyInLeaf;
    if ( SubKeyInLeaf < 0 )
    {
LABEL_8:
      v9 = 0;
      goto LABEL_26;
    }
    v20 = v13[1]-- == 1;
    v21 = v13[1];
    if ( v20 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
      v13 = 0LL;
      HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3);
      if ( !v6 )
      {
LABEL_25:
        *v37 = v3;
        v9 = 1;
LABEL_26:
        if ( v13 )
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
        goto LABEL_28;
      }
      v20 = v6[1]-- == 1;
      v22 = v6[1];
      if ( v20 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
        v6 = 0LL;
        HvFreeCell(BugCheckParameter2, v11);
        goto LABEL_25;
      }
      v3 = v11;
      if ( SubKeyInRoot >= (unsigned int)v22 )
        goto LABEL_25;
      v23 = 4LL * ((unsigned int)v22 - SubKeyInRoot);
      v24 = &v6[2 * (SubKeyInRoot + 1) + 2];
      v25 = &v6[2 * SubKeyInRoot + 2];
    }
    else
    {
      v3 = v11;
      if ( (unsigned int)v19 >= v21 )
        goto LABEL_25;
      v26 = (unsigned int)(v19 + 1);
      v27 = v21 - (unsigned int)v19;
      v28 = v19;
      if ( *v13 == 26988 )
      {
        v23 = 4 * v27;
        v29 = v19 + 1;
        v24 = &v13[2 * v26 + 2];
        v25 = &v13[2 * v29];
      }
      else
      {
        v23 = 8 * v27;
        v24 = &v13[4 * v26 + 2];
        v25 = &v13[4 * v28 + 2];
      }
    }
    memmove(v25, v24, v23);
    goto LABEL_25;
  }
  v9 = 0;
LABEL_28:
  if ( v6 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
  return v9;
}
