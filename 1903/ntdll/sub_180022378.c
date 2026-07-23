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

int __fastcall sub_180022378(
        PUNICODE_STRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  int result; // eax
  int *v10; // rbx
  char v11; // di
  int v12; // eax
  __int64 v13; // rdx
  PVOID v14; // rax
  int v15; // eax
  int v16; // eax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF

  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      425,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  BaseAddress = 0LL;
  result = sub_1800225E4(a1);
  if ( result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      sub_18002E73C(0LL);
    }
    if ( !a6 || v11 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      sub_18006352C();
      v10 = a8;
      v12 = sub_18002AA74(a1, a5, (__int64)&BaseAddress, (__int64)a8);
      if ( v12 == -1073741515 )
      {
        LOBYTE(v13) = 1;
        sub_18002E26C(*((_QWORD *)BaseAddress + 22), v13);
      }
      else if ( v12 != -1073741267 && v12 < 0 )
      {
        *a8 = v12;
      }
    }
    else
    {
      v10 = a8;
      *a8 = -1073741515;
    }
    result = sub_18002E73C(1LL);
    if ( BaseAddress )
    {
      v14 = (PVOID)sub_180065094();
      *a7 = v14;
      if ( BaseAddress != v14 )
      {
        sub_180064EEC(BaseAddress);
        BaseAddress = *a7;
      }
      if ( *((_QWORD *)BaseAddress + 22) )
        sub_18006C654(*((_QWORD *)BaseAddress + 19));
      if ( *v10 >= 0 )
      {
        v15 = sub_18002A958(BaseAddress, v10);
        *v10 = v15;
        if ( v15 >= 0 )
        {
          v16 = sub_1800222E4(a6, (__int64)BaseAddress);
          *v10 = v16;
          if ( v16 >= 0 && !dword_1801664E0 )
            sub_18002EB1C(BaseAddress);
        }
      }
      result = sub_180064F24(*((_QWORD *)BaseAddress + 19), v10);
      if ( *v10 < 0 )
      {
        *a7 = 0LL;
        sub_18002F3D8(BaseAddress, 0LL);
        result = sub_18001B678((char *)BaseAddress);
      }
    }
    else
    {
      *v10 = -1073741801;
    }
    if ( !v11 )
      result = sub_180073E1C();
  }
  else
  {
    v10 = a8;
    *a8 = result;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    return sub_1800CE318(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             655,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             (__int64)"Status: 0x%08lx\n",
             *v10);
  return result;
}
