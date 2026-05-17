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

__int64 __fastcall sub_18001B784(__int64 a1, __int64 a2, unsigned int a3, char a4, _QWORD *a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned int v9; // r14d
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ebx
  unsigned __int64 v14; // rdi
  unsigned int v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v19; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v20; // [rsp+48h] [rbp-99h]
  _OWORD v21[2]; // [rsp+50h] [rbp-91h] BYREF
  _QWORD v22[16]; // [rsp+70h] [rbp-71h] BYREF

  v5 = *(_QWORD *)(a1 + 80);
  v6 = a3;
  v7 = a2;
  v20 = a1;
  v8 = a1;
  v19 = a2;
  v9 = 0;
  v17 = a3;
  v18 = a1;
  memset(v22, 0, sizeof(v22));
  v22[4] = v5;
  while ( 1 )
  {
    v11 = sub_18001C2B0(*(_QWORD *)(v8 + 48), v7, v6, a5);
    v13 = v11;
    if ( v11 != -1073741267 )
      break;
    v16 = v9++;
    if ( v16 >= 0x20 || (a4 & 2) != 0 )
    {
      v13 = -1073741701;
      goto LABEL_10;
    }
    v13 = sub_18006F140(*a5, v21, &v19, &v17);
    if ( v13 < 0 )
      goto LABEL_10;
    LODWORD(v22[3]) = *(_DWORD *)(v8 + 272);
    v13 = sub_180021EC0((unsigned int)v21, (unsigned int)v22, v20, v8, 2, (__int64)&v18);
    if ( v13 < 0 )
      goto LABEL_10;
    v8 = v18;
    sub_18001B678(v18);
    v7 = v19;
    v6 = v17;
  }
  if ( (a4 & 1) != 0 && v11 >= 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      LOBYTE(v12) = 1;
      sub_180072FEC(*(_QWORD *)(v8 + 184), v12);
    }
    else
    {
      v14 = *(_QWORD *)(v8 + 48);
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        if ( v14 < *((_QWORD *)&xmmword_18017A4E0 + 1)
          || v14 >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
        {
          sub_18001E620(v14, v21);
        }
        else
        {
          v21[0] = xmmword_18017A4E0;
        }
        if ( *((_QWORD *)&v21[0] + 1) != v14 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_10:
  if ( BYTE4(v22[15]) )
    RtlReleasePath(v22[0]);
  if ( v13 < 0 )
    *a5 = 0LL;
  return (unsigned int)v13;
}
