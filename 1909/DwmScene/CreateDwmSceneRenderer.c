/*
 * XREFs of CreateDwmSceneRenderer @ 0x18000D920
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18000D618 @ 0x18000D618 (sub_18000D618.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateDwmSceneRenderer(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  const char *v6; // r8
  int v7; // edx
  signed int v8; // eax
  const char *v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  __int64 (__fastcall ***v13)(_QWORD, __int64, __int64); // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !a3 )
  {
    v5 = -2147467261;
    v6 = "DwmSceneAPI.cpp";
    v7 = 20;
LABEL_3:
    sub_18000C338(retaddr, v7, (__int64)v6, v5);
    return v5;
  }
  if ( !*a1 )
  {
    v5 = -2147024809;
    v6 = "DwmSceneAPI.cpp";
    v7 = 21;
    goto LABEL_3;
  }
  if ( qword_180269E48 )
  {
    v5 = -2147418113;
    v6 = "DwmSceneAPI.cpp";
    v7 = 24;
    goto LABEL_3;
  }
  v13 = 0LL;
  v8 = sub_18000D618((__int64 *)&v13, (__int64)a1);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = "DwmSceneAPI.cpp";
    v10 = 29;
LABEL_12:
    sub_18000C338(retaddr, v10, (__int64)v9, v8);
    goto LABEL_14;
  }
  v8 = (**v13)(v13, a2, a3);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = "DwmSceneAPI.cpp";
    v10 = 31;
    goto LABEL_12;
  }
  v5 = 0;
LABEL_14:
  v11 = (__int64)v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v5;
}
