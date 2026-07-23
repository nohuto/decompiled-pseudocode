/*
 * XREFs of CmpFindTagIndex @ 0x1409CE830
 * Callers:
 *     CmpAddDriverToList @ 0x1409CE9F8 (CmpAddDriverToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x14073EA48 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14073EA78 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindTagIndex(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v6; // ebx
  __int64 (__fastcall *v8)(ULONG_PTR, __int64, _DWORD *); // rax
  ULONG_PTR v9; // rax
  unsigned int *v10; // rsi
  __int64 v11; // rax
  unsigned int ValueByName; // ebx
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v17[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v19[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v20[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF
  char v23; // [rsp+B0h] [rbp+30h] BYREF

  P[0] = 0LL;
  v17[1] = 0;
  v18[1] = 0;
  v6 = a2;
  v20[1] = 0;
  v19[1] = 0;
  v23 = 0;
  v8 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  v21 = 0xFFFFFFFFLL;
  v17[0] = -1;
  v18[0] = -1;
  v20[0] = -1;
  v19[0] = -1;
  v9 = v8(BugCheckParameter3, a2, v17);
  if ( !v9 )
    return (unsigned int)-2;
  v10 = (unsigned int *)CmpValueToData(BugCheckParameter3, v6, v9, &v16, (__int64)&v21);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v17);
  if ( !v10 )
    return (unsigned int)-2;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, a3, v18);
  if ( v11 )
  {
    ValueByName = CmpFindValueByName(BugCheckParameter3, v11, a4);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v18);
    if ( ValueByName == -1 )
    {
      v14 = *v10;
      goto LABEL_13;
    }
    v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            v19);
    if ( v13 )
    {
      CmpGetValueData(BugCheckParameter3, ValueByName, v13, &v16, (__int64)P, (__int64)&v23, (__int64)v20);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v19);
      if ( P[0] )
      {
        v14 = 1;
        if ( *(_DWORD *)P[0] )
        {
          while ( *((_DWORD *)P[0] + v14) != *v10 )
          {
            if ( ++v14 > *(_DWORD *)P[0] )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          v14 = -2;
        }
        if ( v23 )
          ExFreePoolWithTag(P[0], 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v20);
        goto LABEL_13;
      }
    }
  }
  v14 = -2;
LABEL_13:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v21);
  return v14;
}
