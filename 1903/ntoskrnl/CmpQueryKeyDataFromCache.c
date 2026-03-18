/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x140656CB0
 * Callers:
 *     CmpQueryKeyData @ 0x140656BA4 (CmpQueryKeyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmListGetPrevElement @ 0x140631BC8 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x140638AA8 (CmGetVisibleSubkeyCount.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x140656F1C (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140656FB0 (CmGetVisibleMaxNameLenAndClassLen.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rcx
  unsigned __int16 v10; // r15
  __int64 v11; // r14
  int VisibleMaxNameLenAndClassLen; // r12d
  __int64 v13; // rbx
  int v14; // eax
  int v15; // ecx
  __int64 PrevElement; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  int v21; // [rsp+34h] [rbp-54h] BYREF
  int v22; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h]
  int v26; // [rsp+90h] [rbp+8h] BYREF

  v23[0] = -1;
  v23[1] = 0;
  v9 = *(_QWORD *)(a1 + 80);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    v11 = a6;
    VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(a1, 0, a6, (unsigned int)&v26, 0LL);
    if ( VisibleMaxNameLenAndClassLen >= 0 )
    {
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                       a1,
                                       0,
                                       v11,
                                       (unsigned int)&v21,
                                       (__int64)&v22);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        *a5 = 40;
        if ( a4 < 0x28 )
        {
          return (unsigned int)-1073741789;
        }
        else
        {
          v24 = 0LL;
          v13 = *(_QWORD *)(a1 + 168);
          v25 = v13;
          if ( v11 )
          {
            while ( 1 )
            {
              PrevElement = CmListGetPrevElement(a1 + 208, &v24);
              v17 = PrevElement;
              if ( !PrevElement )
                break;
              if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), v11) && *(_DWORD *)(v17 + 68) == 8 )
              {
                v13 = *(_QWORD *)(v17 + 88);
                v25 = v13;
                break;
              }
            }
          }
          *(_QWORD *)a3 = v13;
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 32) = v10;
          v14 = -1;
          if ( a1 )
          {
            if ( v11 && (v18 = *(_QWORD *)(a1 + 288)) != 0 && v18 == v11 )
              v14 = *(_DWORD *)(a1 + 280);
            else
              v14 = *(_DWORD *)(a1 + 96);
          }
          *(_DWORD *)(a3 + 20) = v14;
          *(_DWORD *)(a3 + 16) = v26;
          *(_DWORD *)(a3 + 24) = v21;
          *(_DWORD *)(a3 + 28) = v22;
          v15 = *(_DWORD *)(a1 + 8);
          if ( (v15 & 0x40) != 0 || *(_QWORD *)(a1 + 208) != a1 + 208 )
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 8LL))(
                    *(_QWORD *)(a1 + 32),
                    *(unsigned int *)(a1 + 40),
                    v23);
            if ( v19 )
            {
              *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v19, v11);
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), v23);
            }
            else
            {
              return (unsigned int)-1073741670;
            }
          }
          else if ( (v15 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 0;
          }
          else if ( (v15 & 2) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 1;
          }
          else if ( (v15 & 4) != 0 )
          {
            *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 112);
          }
          else
          {
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 112);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
