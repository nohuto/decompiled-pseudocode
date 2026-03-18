/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x1408277E4
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpLockKcbStackShared @ 0x1405F93E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x140600430 (CmpFindNameInListWithStatus.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetValueData @ 0x140661700 (CmpGetValueData.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 *     CmpIsValueTombstone @ 0x1406BEAE0 (CmpIsValueTombstone.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        size_t a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r12
  void *v10; // r14
  unsigned int v11; // r13d
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  int started; // edi
  unsigned int i; // eax
  __int64 v16; // rdi
  unsigned __int16 j; // dx
  __int16 v18; // r15
  __int64 KcbAtLayerHeight; // rsi
  __int64 KeyNodeForKcb; // rax
  unsigned int v21; // r15d
  __int64 v22; // rcx
  unsigned int v23; // edi
  unsigned int v24; // edx
  __int64 v25; // rdx
  char v27; // [rsp+40h] [rbp-B8h]
  _BYTE v28[3]; // [rsp+41h] [rbp-B7h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-B4h]
  void *Src; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-A8h]
  unsigned int v32; // [rsp+58h] [rbp-A0h]
  __int64 v33; // [rsp+60h] [rbp-98h] BYREF
  __int64 v34; // [rsp+68h] [rbp-90h] BYREF
  __int64 v35; // [rsp+70h] [rbp-88h] BYREF
  __int64 v36; // [rsp+78h] [rbp-80h]
  __int64 v37; // [rsp+80h] [rbp-78h]
  __int64 v38; // [rsp+88h] [rbp-70h]
  __int64 v39; // [rsp+90h] [rbp-68h]
  PPRIVILEGE_SET v40[12]; // [rsp+98h] [rbp-60h] BYREF
  size_t Size; // [rsp+100h] [rbp+8h] BYREF
  __int64 v42; // [rsp+108h] [rbp+10h]
  unsigned int v43; // [rsp+110h] [rbp+18h]
  __int64 v44; // [rsp+118h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v42 = a2;
  Size = a1;
  memset(v40, 0, 0x20uLL);
  WORD1(v40[0]) = -1;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v34 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v37 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  v28[0] = 0;
  v33 = 0xFFFFFFFFLL;
  v11 = 0;
  v29 = 0;
  v27 = 0;
  v38 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v40, v38, v12, v13);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)v40);
    v7 = 1LL;
    v31 = 1LL;
    v28[1] = 1;
    started = CmpPerformKeyBodyDeletionCheck(Size, 0LL);
    if ( started >= 0 )
    {
      for ( i = 0; ; i = v7 + v32 )
      {
        v32 = i;
        if ( i >= v43 )
          break;
        v16 = v42 + 32LL * i;
        v36 = v16;
        for ( j = *(_WORD *)v16;
              j && !*(_WORD *)(*(_QWORD *)(v16 + 8) + 2 * (((unsigned __int64)j - v7) >> 1));
              *(_WORD *)v16 = j )
        {
          j -= 2;
        }
        LODWORD(Size) = -1;
        v18 = *(_WORD *)(v38 + 66);
        while ( v18 >= 0 )
        {
          KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v40, v18);
          if ( *(_WORD *)(KcbAtLayerHeight + 66) )
          {
            if ( *(_BYTE *)(KcbAtLayerHeight + 65) == (_BYTE)v31 )
              break;
          }
          if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 )
          {
            --v18;
          }
          else
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v35, 0);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 32),
                        (unsigned int *)(KeyNodeForKcb + 36),
                        (unsigned __int16 *)v16,
                        0,
                        0LL,
                        &Size);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              &v35);
            if ( started >= 0 )
            {
              v9 = KcbAtLayerHeight;
              v37 = KcbAtLayerHeight;
              break;
            }
            if ( started != -1073741772 )
              goto LABEL_23;
            if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) )
              break;
            --v18;
            v16 = v36;
          }
        }
        v21 = Size;
        if ( (_DWORD)Size == -1 )
        {
          started = -1073741772;
LABEL_23:
          LOBYTE(v7) = v31;
          goto LABEL_44;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
               *(_QWORD *)(v9 + 32),
               (unsigned int)Size,
               &v34);
        v39 = v8;
        if ( CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v8) )
        {
          started = -1073741772;
LABEL_26:
          LOBYTE(v7) = v31;
          goto LABEL_45;
        }
        v23 = *(_DWORD *)(v8 + 4);
        if ( v23 >= 0x80000000 )
          v23 += 0x80000000;
        LODWORD(Size) = v23;
        v11 = (v11 + 7) & 0xFFFFFFF8;
        v24 = (v29 + 7) & 0xFFFFFFF8;
        v29 = v24;
        if ( v27 || v11 + v23 > *a5 || v11 + v23 < v11 )
        {
          v7 = v31;
          v27 = v31;
        }
        else
        {
          if ( !CmpGetValueData(v22, v21, v8, (unsigned int *)&Size, (__int64)&Src, (__int64)v28, (__int64)&v33) )
          {
            started = -1073741670;
            v10 = Src;
            goto LABEL_26;
          }
          v23 = Size;
          memmove((void *)(v44 + v11), Src, (unsigned int)Size);
          v25 = v36;
          *(_DWORD *)(v36 + 24) = *(_DWORD *)(v8 + 12);
          *(_DWORD *)(v25 + 16) = v23;
          *(_DWORD *)(v25 + 20) = v11;
          v11 += v23;
          if ( v28[0] )
            ExFreePoolWithTag(Src, 0);
          else
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v33);
          Src = 0LL;
          v10 = 0LL;
          v22 = *(_QWORD *)(v9 + 32);
          v7 = v31;
          v24 = v29;
        }
        v29 = v23 + v24;
        (*(void (__fastcall **)(__int64, __int64 *))(v22 + 16))(v22, &v34);
      }
      *a5 = v11;
      if ( a6 )
        *a6 = v29;
      started = -2147483643;
      if ( !v27 )
        started = 0;
LABEL_44:
      v8 = 0LL;
    }
  }
LABEL_45:
  if ( v10 )
  {
    if ( v28[0] )
      ExFreePoolWithTag(v10, 0);
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v33);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v34);
  if ( (_BYTE)v7 )
    CmpUnlockKcbStack((__int64)v40);
  if ( v40[3] )
    CmSiFreeMemory(v40[3]);
  return (unsigned int)started;
}
