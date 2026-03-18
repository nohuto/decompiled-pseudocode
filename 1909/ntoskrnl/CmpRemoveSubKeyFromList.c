/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x1406D642C
 * Callers:
 *     CmpRemoveSubKey @ 0x1406D6398 (CmpRemoveSubKey.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083D174 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     CmpCopyCompressedName @ 0x140660810 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1406660B0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeaf @ 0x1408376F4 (CmpFindSubKeyInLeaf.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  int v3; // r12d
  _WORD *v5; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // bl
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // r15
  wchar_t *Buffer; // r14
  unsigned int SubKeyInLeaf; // ecx
  bool v14; // zf
  unsigned __int16 v15; // ax
  unsigned int v16; // edx
  __int64 v17; // r9
  size_t v18; // r8
  _WORD *v19; // rdx
  _WORD *v20; // rcx
  _WORD *v22; // r10
  __int16 v23; // ax
  __int64 (__fastcall *v24)(ULONG_PTR, _QWORD, _DWORD *); // rax
  unsigned __int16 v25; // ax
  char v26; // [rsp+20h] [rbp-A9h]
  _DWORD v27[3]; // [rsp+24h] [rbp-A5h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-99h] BYREF
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-95h]
  int BugCheckParameter3_4; // [rsp+38h] [rbp-91h]
  int v31; // [rsp+40h] [rbp-89h] BYREF
  int v32; // [rsp+44h] [rbp-85h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v34[2]; // [rsp+58h] [rbp-71h] BYREF
  _WORD *v35; // [rsp+60h] [rbp-69h]
  unsigned int *v36; // [rsp+68h] [rbp-61h]
  _BYTE P[112]; // [rsp+70h] [rbp-59h] BYREF

  v36 = a2;
  v3 = -1;
  v34[1] = 0;
  v34[0] = -1;
  *(_QWORD *)&v27[1] = 0xFFFFFFFFLL;
  v31 = -1;
  v32 = 0;
  v5 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v26 = 0;
  v35 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v34);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = 1;
  v10 = *(_WORD *)(v7 + 72);
  v11 = v10;
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v11 = 2 * v10;
    DestinationString.Length = 2 * v10;
    DestinationString.MaximumLength = 2 * v10;
    if ( (unsigned __int16)(2 * v10) > 0x64u )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x30344D43u);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v9 = 0;
LABEL_15:
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v34);
        goto LABEL_17;
      }
      v10 = *(_WORD *)(v8 + 72);
    }
    else
    {
      Buffer = (wchar_t *)P;
      DestinationString.Buffer = (wchar_t *)P;
    }
    v26 = 1;
    CmpCopyCompressedName((unsigned __int64)Buffer, v11, v8 + 76, v10);
  }
  else
  {
    v26 = 0;
    Buffer = (wchar_t *)(v7 + 76);
    DestinationString.Buffer = (wchar_t *)(v7 + 76);
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v34);
  v8 = 0LL;
  v27[0] = *v36;
  BugCheckParameter3 = *v36;
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v27[1]);
  if ( v5 )
  {
    BugCheckParameter3_4 = 0x80000000;
    if ( *v5 == 26994 )
    {
      BugCheckParameter3_4 = CmpFindSubKeyInRoot(BugCheckParameter2, (__int64)v5, (int)&DestinationString, &v28);
      if ( BugCheckParameter3_4 < 0 )
        goto LABEL_37;
      v31 = v27[1];
      v23 = v27[2];
      *(_QWORD *)&v27[1] = 0LL;
      LOWORD(v32) = v23;
      v24 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
      BugCheckParameter3 = v28;
      v35 = v5;
      v27[1] = -1;
      v5 = (_WORD *)v24(BugCheckParameter2, v28, &v27[1]);
      if ( !v5 )
      {
        v9 = 0;
LABEL_19:
        if ( v35 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
        goto LABEL_21;
      }
    }
    SubKeyInLeaf = CmpFindSubKeyInLeaf(BugCheckParameter2, v5, &DestinationString, &v28);
    if ( (SubKeyInLeaf & 0x80000000) == 0 )
    {
      v14 = v5[1]-- == 1;
      v15 = v5[1];
      if ( v14 )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27[1]);
        v5 = 0LL;
        HvFreeCell(BugCheckParameter2, BugCheckParameter3);
        v22 = v35;
        if ( !v35 )
          goto LABEL_14;
        v14 = v35[1]-- == 1;
        v25 = v22[1];
        if ( v14 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
          v35 = 0LL;
          HvFreeCell(BugCheckParameter2, v27[0]);
          goto LABEL_14;
        }
        v3 = v27[0];
        if ( BugCheckParameter3_4 >= (unsigned int)v25 )
          goto LABEL_14;
        v18 = 4LL * ((unsigned int)v25 - BugCheckParameter3_4);
        v19 = &v22[2 * (BugCheckParameter3_4 + 1) + 2];
        v20 = &v22[2 * BugCheckParameter3_4 + 2];
      }
      else
      {
        v3 = v27[0];
        if ( SubKeyInLeaf >= v15 )
        {
LABEL_14:
          *v36 = v3;
          goto LABEL_15;
        }
        v16 = v15 - SubKeyInLeaf;
        v17 = SubKeyInLeaf + 1;
        if ( *v5 == 26988 )
        {
          v18 = 4LL * v16;
          v19 = &v5[2 * v17 + 2];
          v20 = &v5[2 * SubKeyInLeaf + 2];
        }
        else
        {
          v18 = 8LL * v16;
          v19 = &v5[4 * v17 + 2];
          v20 = &v5[4 * SubKeyInLeaf + 2];
        }
      }
      memmove(v20, v19, v18);
      goto LABEL_14;
    }
LABEL_37:
    v9 = 0;
LABEL_17:
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27[1]);
    goto LABEL_19;
  }
  v9 = 0;
LABEL_21:
  if ( v26 && Buffer && v11 > 0x64u )
    ExFreePoolWithTag(Buffer, 0);
  return v9;
}
