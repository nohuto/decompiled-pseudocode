/*
 * XREFs of sub_180022378 @ 0x180022378
 * Callers:
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800222E4 @ 0x1800222E4 (sub_1800222E4.c)
 *     sub_1800225E4 @ 0x1800225E4 (sub_1800225E4.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_18002AA74 @ 0x18002AA74 (sub_18002AA74.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 *     sub_180064EEC @ 0x180064EEC (sub_180064EEC.c)
 *     sub_180064F24 @ 0x180064F24 (sub_180064F24.c)
 *     sub_180065094 @ 0x180065094 (sub_180065094.c)
 *     sub_18006C654 @ 0x18006C654 (sub_18006C654.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_180022378(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8)
{
  __int64 result; // rax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF

  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      425,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  v19 = 0LL;
  result = sub_1800225E4(a1, a3, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      sub_18002E73C(0LL);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      sub_18006352C();
      v12 = a8;
      v14 = sub_18002AA74(a1, a2, a3, a4, a5, (__int64)&v19, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LOBYTE(v15) = 1;
        sub_18002E26C(*(_QWORD *)(v19 + 176), v15);
      }
      else if ( v14 != -1073741267 && v14 < 0 )
      {
        *a8 = v14;
      }
    }
    else
    {
      v12 = a8;
      *a8 = -1073741515;
    }
    result = sub_18002E73C(1LL);
    if ( v19 )
    {
      v16 = sub_180065094();
      *a7 = v16;
      if ( v19 != v16 )
      {
        sub_180064EEC();
        v19 = *a7;
      }
      if ( *(_QWORD *)(v19 + 176) )
        sub_18006C654(*(_QWORD *)(v19 + 152));
      if ( *v12 >= 0 )
      {
        v17 = sub_18002A958(v19, v12);
        *v12 = v17;
        if ( v17 >= 0 )
        {
          v18 = sub_1800222E4(a6, v19);
          *v12 = v18;
          if ( v18 >= 0 && !dword_1801664E0 )
            sub_18002EB1C(v19);
        }
      }
      result = sub_180064F24(*(_QWORD *)(v19 + 152), v12);
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        sub_18002F3D8(v19, 0LL);
        result = sub_18001B678(v19);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = sub_180073E1C();
  }
  else
  {
    v12 = a8;
    *a8 = result;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    return sub_1800CE318(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             655,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             (__int64)"Status: 0x%08lx\n",
             *v12);
  return result;
}
