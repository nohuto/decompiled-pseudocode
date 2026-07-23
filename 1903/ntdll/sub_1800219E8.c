/*
 * XREFs of sub_1800219E8 @ 0x1800219E8
 * Callers:
 *     sub_180021908 @ 0x180021908 (sub_180021908.c)
 * Callees:
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_1800795E8 @ 0x1800795E8 (sub_1800795E8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_1800219E8(PUNICODE_STRING a1, int a2, _QWORD *a3, __int64 a4, int a5)
{
  int v9; // ebx
  int v11; // eax
  _UNICODE_STRING v12; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    v9 = sub_180022698(a1, 0LL, a4);
  }
  else if ( (a5 & 0x200) == 0 || (v9 = sub_180022698(0LL, a1, a4), v9 < 0) )
  {
    v14 = 0x1000000;
    BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v16;
    v16[0] = 0;
    *(_QWORD *)&v12.Length = 0LL;
    v12.Buffer = 0LL;
    if ( (a5 & 0x200) != 0 )
      v11 = sub_180029CEC(a1, &v14, &String1, &v12, a5);
    else
      v11 = sub_18002D8FC((_DWORD)a1, a2, 0, 0, (__int64)&v14, (__int64)&String1, (__int64)&v12, 0LL, 0LL);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v9 = sub_180022698(&String1, &v12, a4);
      if ( v9 == -1073741515 )
        v9 = sub_1800795E8(&v14, a3, a4);
    }
    sub_18002E1A4(&v12);
    if ( v16 != (_WORD *)BoundaryDescriptor )
      RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
    v14 = 0x1000000;
    BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v16;
    v16[0] = 0;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      480,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      (__int64)"Status: 0x%08lx\n",
      v9);
  return (unsigned int)v9;
}
