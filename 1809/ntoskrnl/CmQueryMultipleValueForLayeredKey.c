/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x1407EE82C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1405D1194 (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x1405D1670 (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpIsValueTombstone @ 0x1406CEEA8 (CmpIsValueTombstone.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  char v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r13
  void *v10; // r12
  unsigned int v11; // r14d
  int started; // edi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int16 v17; // dx
  __int64 KcbAtLayerHeight; // r14
  __int16 *v19; // rsi
  char v20; // al
  __int64 KeyNodeForKcb; // rax
  char v22; // al
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // edx
  __int64 v27; // rcx
  char v29; // [rsp+40h] [rbp-B8h]
  _BYTE v30[3]; // [rsp+41h] [rbp-B7h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-B4h]
  unsigned int v32; // [rsp+48h] [rbp-B0h]
  unsigned int Size; // [rsp+4Ch] [rbp-ACh] BYREF
  unsigned int Size_4; // [rsp+50h] [rbp-A8h] BYREF
  void *Src; // [rsp+58h] [rbp-A0h] BYREF
  int v36; // [rsp+60h] [rbp-98h]
  __int64 v37; // [rsp+68h] [rbp-90h] BYREF
  __int64 v38; // [rsp+70h] [rbp-88h] BYREF
  __int64 v39; // [rsp+78h] [rbp-80h] BYREF
  __int64 v40; // [rsp+80h] [rbp-78h]
  __int64 v41; // [rsp+88h] [rbp-70h]
  __int64 v42; // [rsp+90h] [rbp-68h]
  __int64 v43; // [rsp+98h] [rbp-60h]
  PPRIVILEGE_SET v44[11]; // [rsp+A0h] [rbp-58h] BYREF

  memset(v44, 0, 0x20uLL);
  WORD1(v44[0]) = -1;
  v7 = 0;
  v8 = 0LL;
  v38 = 0xFFFFFFFFLL;
  v39 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v41 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  v30[0] = 0;
  v37 = 0xFFFFFFFFLL;
  v11 = 0;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v42 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v44, v42);
  if ( started < 0 )
    goto LABEL_54;
  CmpLockKcbStackShared((__int64)v44);
  v7 = 1;
  v30[1] = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_54;
  v13 = 0LL;
LABEL_4:
  v36 = v13;
  if ( (unsigned int)v13 < a3 )
  {
    v43 = 3 * v13;
    v14 = *(_QWORD *)(a2 + 24 * v13);
    v40 = v14;
    v15 = *(_WORD *)v14;
    if ( *(_WORD *)v14 )
    {
      v16 = *(_QWORD *)(v14 + 8);
      do
      {
        if ( *(_WORD *)(v16 + 2 * (((unsigned __int64)v15 - 1) >> 1)) )
          break;
        v15 -= 2;
        *(_WORD *)v14 = v15;
      }
      while ( v15 );
    }
    Size_4 = -1;
    v17 = *(_WORD *)(v42 + 58);
    if ( v17 < 0 )
      goto LABEL_32;
    while ( 1 )
    {
      LOWORD(Size) = v17;
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v44, v17);
      v19 = (__int16 *)(KcbAtLayerHeight + 58);
      if ( a1 && *v19 == *(unsigned __int16 *)(a1 + 4) )
      {
        v20 = *(_BYTE *)(KcbAtLayerHeight + 57);
        if ( !v20 )
          goto LABEL_17;
      }
      else
      {
        if ( !*v19 )
          goto LABEL_17;
        v20 = *(_BYTE *)(KcbAtLayerHeight + 57);
      }
      if ( v20 == 1 )
        goto LABEL_31;
LABEL_17:
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      {
        KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v39, 0);
        started = CmpFindNameInListWithStatus(
                    *(_QWORD *)(KcbAtLayerHeight + 24),
                    (unsigned int *)(KeyNodeForKcb + 36),
                    v14,
                    0,
                    0LL,
                    (__int64)&Size_4);
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
          *(_QWORD *)(KcbAtLayerHeight + 24),
          &v39);
        if ( started >= 0 )
        {
          v9 = KcbAtLayerHeight;
          v41 = KcbAtLayerHeight;
LABEL_31:
          v11 = v31;
LABEL_32:
          if ( Size_4 == -1 )
          {
            started = -1073741772;
            goto LABEL_53;
          }
          v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 8LL))(
                 *(_QWORD *)(v9 + 24),
                 Size_4,
                 &v38);
          v40 = v8;
          if ( CmpIsValueTombstone(*(_QWORD *)(v9 + 24), v8) )
          {
            started = -1073741772;
            goto LABEL_54;
          }
          v24 = *(_DWORD *)(v8 + 4);
          v25 = v24 + 0x80000000;
          if ( v24 < 0x80000000 )
            v25 = *(_DWORD *)(v8 + 4);
          Size = v25;
          v11 = (v11 + 7) & 0xFFFFFFF8;
          v31 = v11;
          v26 = (v32 + 7) & 0xFFFFFFF8;
          v32 = v26;
          if ( v29 || v25 + v11 > *a5 || v25 + v11 < v11 )
          {
            v29 = 1;
          }
          else
          {
            if ( !CmpGetValueData(v23, Size_4, v8, &Size, (__int64)&Src, (__int64)v30, (__int64)&v37) )
            {
              started = -1073741670;
              v10 = Src;
              goto LABEL_54;
            }
            v25 = Size;
            memmove((void *)(a4 + v11), Src, Size);
            v27 = v43;
            *(_DWORD *)(a2 + 8 * v43 + 16) = *(_DWORD *)(v8 + 12);
            *(_DWORD *)(a2 + 8 * v27 + 8) = v25;
            *(_DWORD *)(a2 + 8 * v27 + 12) = v11;
            v11 += v25;
            v31 = v11;
            if ( v30[0] )
              ExFreePoolWithTag(Src, 0);
            else
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v37);
            v10 = 0LL;
            Src = 0LL;
            v23 = *(_QWORD *)(v9 + 24);
            v26 = v32;
          }
          v32 = v25 + v26;
          (*(void (__fastcall **)(__int64, __int64 *))(v23 + 16))(v23, &v38);
          v13 = (unsigned int)(v36 + 1);
          goto LABEL_4;
        }
        if ( started != -1073741772 )
          goto LABEL_53;
        if ( a1 && *v19 == *(unsigned __int16 *)(a1 + 4) )
        {
          v22 = *(_BYTE *)(KcbAtLayerHeight + 57);
          if ( !v22 )
            goto LABEL_31;
          goto LABEL_26;
        }
        if ( *v19 )
        {
          v22 = *(_BYTE *)(KcbAtLayerHeight + 57);
LABEL_26:
          if ( v22 )
            goto LABEL_31;
        }
        v14 = v40;
      }
      v17 = Size - 1;
      if ( (__int16)Size <= 0 )
        goto LABEL_31;
    }
  }
  *a5 = v11;
  if ( a6 )
    *a6 = v32;
  started = -2147483643;
  if ( !v29 )
    started = 0;
LABEL_53:
  v8 = 0LL;
LABEL_54:
  if ( v10 )
  {
    if ( v30[0] )
      ExFreePoolWithTag(v10, 0);
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v37);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v38);
  if ( v7 )
    CmpUnlockKcbStack((__int64)v44);
  if ( v44[3] )
    CmSiFreeMemory(v44[3]);
  return (unsigned int)started;
}
