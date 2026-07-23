/*
 * XREFs of sub_18001B784 @ 0x18001B784
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800CF3AC @ 0x1800CF3AC (sub_1800CF3AC.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     sub_18006F140 @ 0x18006F140 (sub_18006F140.c)
 *     sub_180072FEC @ 0x180072FEC (sub_180072FEC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18001B784(_QWORD *a1, __int64 a2, int a3, char a4, _QWORD *a5)
{
  WCHAR *v5; // rbx
  PVOID v6; // rdi
  unsigned int v7; // r14d
  int v9; // eax
  int v10; // ebx
  void *v11; // rdi
  int v12; // eax
  unsigned int v14; // eax
  int v15; // [rsp+30h] [rbp-B1h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v17; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-99h]
  _OWORD v19[2]; // [rsp+50h] [rbp-91h] BYREF
  PWSTR Path[16]; // [rsp+70h] [rbp-71h] BYREF

  v5 = (WCHAR *)a1[10];
  v18 = a1;
  v6 = a1;
  v17 = a2;
  v7 = 0;
  v15 = a3;
  BaseAddress = a1;
  memset(Path, 0, sizeof(Path));
  Path[4] = v5;
  while ( 1 )
  {
    v9 = sub_18001C2B0(*((_QWORD *)v6 + 6));
    v10 = v9;
    if ( v9 != -1073741267 )
      break;
    v14 = v7++;
    if ( v14 >= 0x20 || (a4 & 2) != 0 )
    {
      v10 = -1073741701;
      goto LABEL_10;
    }
    v10 = sub_18006F140(*a5, v19, &v17, &v15);
    if ( v10 < 0 )
      goto LABEL_10;
    LODWORD(Path[3]) = *((_DWORD *)v6 + 68);
    v10 = sub_180021EC0((unsigned int)v19, (unsigned int)Path, (_DWORD)v18, (_DWORD)v6, 2, (__int64)&BaseAddress);
    if ( v10 < 0 )
      goto LABEL_10;
    v6 = BaseAddress;
    sub_18001B678((char *)BaseAddress);
  }
  if ( (a4 & 1) != 0 && v9 >= 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      sub_180072FEC(*((PVOID *)v6 + 23));
    }
    else
    {
      v11 = (void *)*((_QWORD *)v6 + 6);
      LOBYTE(v12) = LdrControlFlowGuardEnforced();
      if ( v12 )
      {
        if ( (unsigned __int64)v11 < *((_QWORD *)&xmmword_18017A4E0 + 1)
          || (unsigned __int64)v11 >= *((_QWORD *)&xmmword_18017A4E0 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18017A4F0 )
        {
          sub_18001E620(v11);
        }
        else
        {
          v19[0] = xmmword_18017A4E0;
        }
        if ( *((void **)&v19[0] + 1) != v11 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_10:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( v10 < 0 )
    *a5 = 0LL;
  return (unsigned int)v10;
}
