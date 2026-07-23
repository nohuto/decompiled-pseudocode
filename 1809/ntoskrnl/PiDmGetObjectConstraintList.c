/*
 * XREFs of PiDmGetObjectConstraintList @ 0x1406D36A4
 * Callers:
 *     PiDmGetCmObjectConstraintListFromCache @ 0x1406D361C (PiDmGetCmObjectConstraintListFromCache.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059924C (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmGetObjectConstraintList(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v7; // r15
  __int64 v10; // r9
  unsigned int *v11; // rdi
  unsigned int v12; // r14d
  _WORD *v13; // rsi
  int Object; // eax
  int v15; // ebx
  unsigned int v16; // eax
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v7 = a1;
  P = 0LL;
  memset(v18, 0, 0x20uLL);
  v11 = a7;
  v12 = a6;
  v13 = a5;
  *a7 = 0;
  if ( v12 )
    *v13 = 0;
  Object = PiDmGetObject(*((unsigned int *)&PiDmListDefs + 10 * v7), a2, (__int64 *)&P, v10);
  v15 = Object;
  if ( Object < 0 )
  {
    if ( Object != -1073741772 )
      goto LABEL_10;
    v15 = 0;
  }
  else
  {
    v18[0] = PiDmCmObjectMatchCallback;
    v18[1] = a4;
    v18[2] = v13;
    v18[3] = v12;
    v15 = PiDmListEnumObjectsWithCallback(
            v7,
            (ULONG_PTR)P,
            (__int64 (__fastcall *)(_QWORD, __int64, char *))PiDmGetObjectListCallback,
            (__int64)v18);
    if ( v15 < 0 )
      goto LABEL_10;
    *v11 = HIDWORD(v18[3]);
  }
  if ( *v11 )
  {
    v16 = *v11 + 1;
    *v11 = v16;
    if ( v13 && v12 >= v16 )
      v13[v16 - 1] = 0;
    else
      v15 = -1073741789;
  }
LABEL_10:
  if ( P )
    PiDmObjectRelease((unsigned int *)P);
  return (unsigned int)v15;
}
