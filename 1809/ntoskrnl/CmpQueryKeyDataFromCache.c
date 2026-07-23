/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x1405D89A0
 * Callers:
 *     CmpQueryKeyData @ 0x1405D88B8 (CmpQueryKeyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1405AB548 (CmGetVisibleSubkeyCount.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1405D8C2C (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpIsKeyDeleted @ 0x1406992E0 (CmpIsKeyDeleted.c)
 *     CmListGetPrevElement @ 0x1406C188C (CmListGetPrevElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rax
  unsigned __int16 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // r8
  __int64 v13; // r9
  int VisibleMaxValueNameLenAndDataLen; // r12d
  __int64 v15; // rbx
  int v16; // eax
  int v17; // ecx
  __int64 PrevElement; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 NextElement; // rax
  __int64 v25; // rbx
  bool v26; // zf
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v31[2]; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v32[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v33; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+8h]

  v32[0] = -1;
  v32[1] = 0;
  v9 = *(_QWORD *)(a1 + 72);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    v30 = 0LL;
    v31[0] = -1;
    v31[1] = 0;
    v11 = *(unsigned __int16 *)(a1 + 168);
    v34 = v11;
    if ( a6 )
    {
      v23 = a1 + 200;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v23, &v30, 32LL);
        v25 = NextElement;
        if ( !NextElement )
          break;
        v26 = CmEqualTrans(*(_QWORD *)(NextElement + 56), a6) == 0;
        v23 = a1 + 200;
        if ( !v26 )
        {
          v23 = a1 + 200;
          if ( *(_DWORD *)(v25 + 68) == 1 )
          {
            v27 = *(_QWORD *)(v25 + 88);
            v33 = v27;
            v26 = (unsigned __int8)CmpIsKeyDeleted(v27, 0LL) == 0;
            v23 = a1 + 200;
            if ( v26 )
            {
              v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v27 + 24) + 8LL))(
                      *(_QWORD *)(v27 + 24),
                      *(unsigned int *)(v27 + 32),
                      v31);
              if ( !v28 )
                return (unsigned int)-1073741670;
              v29 = (unsigned __int16)*(_DWORD *)(v28 + 52);
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v33 + 24) + 16LL))(*(_QWORD *)(v33 + 24), v31);
              if ( v11 >= v29 )
                v29 = v11;
              v11 = v29;
              v34 = v29;
              v23 = a1 + 200;
            }
          }
        }
      }
    }
    VisibleMaxValueNameLenAndDataLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a1,
                                         0,
                                         a6,
                                         (unsigned int)&v30,
                                         (__int64)v31);
    if ( VisibleMaxValueNameLenAndDataLen >= 0 )
    {
      *a5 = 40;
      if ( a4 < 0x28 )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        v33 = 0LL;
        v15 = *(_QWORD *)(a1 + 160);
        if ( a6 )
        {
          while ( 1 )
          {
            PrevElement = CmListGetPrevElement(a1 + 200, &v33, v12, v13);
            v19 = PrevElement;
            if ( !PrevElement )
              break;
            if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a6) && *(_DWORD *)(v19 + 68) == 8 )
            {
              v15 = *(_QWORD *)(v19 + 88);
              break;
            }
          }
        }
        *(_QWORD *)a3 = v15;
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 32) = v10;
        v16 = -1;
        if ( a1 )
        {
          if ( a6 && (v20 = *(_QWORD *)(a1 + 280)) != 0 && v20 == a6 )
            v16 = *(_DWORD *)(a1 + 272);
          else
            v16 = *(_DWORD *)(a1 + 88);
        }
        *(_DWORD *)(a3 + 20) = v16;
        *(_DWORD *)(a3 + 16) = v34;
        *(_DWORD *)(a3 + 24) = v30;
        *(_DWORD *)(a3 + 28) = v31[0];
        v17 = *(_DWORD *)(a1 + 4);
        if ( (v17 & 0x40) != 0 || *(_QWORD *)(a1 + 200) != a1 + 200 )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
                  *(_QWORD *)(a1 + 24),
                  *(unsigned int *)(a1 + 32),
                  v32);
          if ( v21 )
          {
            *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v21, a6);
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v32);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else if ( (v17 & 1) != 0 )
        {
          *(_DWORD *)(a3 + 12) = 0;
        }
        else if ( (v17 & 2) != 0 )
        {
          *(_DWORD *)(a3 + 12) = 1;
        }
        else if ( (v17 & 4) != 0 )
        {
          *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 104);
        }
        else
        {
          *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 104);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)VisibleMaxValueNameLenAndDataLen;
}
