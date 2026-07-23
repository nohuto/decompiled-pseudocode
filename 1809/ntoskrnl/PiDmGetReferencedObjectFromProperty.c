/*
 * XREFs of PiDmGetReferencedObjectFromProperty @ 0x1406F3BE8
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406F3D24 (PiDmObjectGetCachedObjectReference.c)
 */

__int64 __fastcall PiDmGetReferencedObjectFromProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int **a7)
{
  int CachedObjectReference; // eax
  unsigned int Object; // ebx
  int ObjectProperty; // eax
  __int64 v13; // r9
  PVOID v14; // rdi
  wchar_t *v15; // rdx
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  wchar_t v19[40]; // [rsp+80h] [rbp-88h] BYREF

  P = 0LL;
  *a7 = 0LL;
  CachedObjectReference = PiDmObjectGetCachedObjectReference(a1, a2, a3, a5, (__int64)a7);
  Object = CachedObjectReference;
  if ( CachedObjectReference >= 0 )
  {
    if ( (*a7)[7] != a6 )
    {
      PiDmObjectRelease(*a7);
      *a7 = 0LL;
      return (unsigned int)-1073741772;
    }
    return Object;
  }
  if ( CachedObjectReference != -1073741802 )
    return Object;
  ObjectProperty = PnpGetObjectProperty(0x5A706E50u, 0x10uLL, a2, a1, 0LL, 0LL, a5, (__int64)&v16, &P, &v18, 0);
  v14 = P;
  Object = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( (_DWORD)v16 == 13 )
    {
      Object = PnpStringFromGuid((int *)P, v19);
      if ( (Object & 0x80000000) != 0 )
        goto LABEL_11;
      v15 = v19;
      goto LABEL_10;
    }
    if ( (_DWORD)v16 == 18 )
    {
      v15 = (wchar_t *)P;
LABEL_10:
      Object = PiDmGetObject(a6, (__int64)v15, (__int64 *)a7, v13);
      goto LABEL_11;
    }
    Object = -1073741772;
  }
LABEL_11:
  if ( v14 )
    ExFreePoolWithTag(v14, 0x5A706E50u);
  return Object;
}
