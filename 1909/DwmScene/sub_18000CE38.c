/*
 * XREFs of sub_18000CE38 @ 0x18000CE38
 * Callers:
 *     sub_18000CDA8 @ 0x18000CDA8 (sub_18000CDA8.c)
 * Callees:
 *     sub_18000B778 @ 0x18000B778 (sub_18000B778.c)
 *     sub_18000C30C @ 0x18000C30C (sub_18000C30C.c)
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18000CA28 @ 0x18000CA28 (sub_18000CA28.c)
 *     sub_18000CB6C @ 0x18000CB6C (sub_18000CB6C.c)
 *     sub_18000D190 @ 0x18000D190 (sub_18000D190.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000CE38(__int64 a1, char a2, __int64 *a3, _BYTE *a4)
{
  HANDLE v7; // rax
  void *v8; // rdi
  int v9; // edx
  unsigned int v10; // esi
  int v11; // ebx
  signed int v12; // eax
  HANDLE v13; // rax
  void *v14; // rbx
  signed int v15; // eax
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 retaddr; // [rsp+278h] [rbp+178h]

  if ( a4 )
    *a4 = 0;
  *a3 = 0LL;
  sub_18000CB6C(Name, 260LL, a1);
  sub_18000CA28(Name, 260LL, (__int64)L"_p0");
  v7 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v8 = v7;
  if ( !v7 )
  {
    if ( GetLastError() != 2 )
    {
      v9 = 192;
LABEL_6:
      v10 = sub_18000C30C(retaddr, v9, (__int64)&unk_1801441D4);
      goto LABEL_21;
    }
LABEL_20:
    v10 = 0;
    goto LABEL_21;
  }
  v19[0] = 0;
  v11 = 0;
  v18 = 0;
  v12 = sub_18000B778(v7, v19);
  v10 = v12;
  if ( v12 < 0 )
  {
    sub_18000C338(retaddr, 198, (__int64)&unk_1801441D4, v12);
    goto LABEL_21;
  }
  if ( !a2 )
  {
LABEL_17:
    v16 = v19[0];
    if ( a4 )
      *a4 = 1;
    *a3 = ((__int64)v11 << 31) | v16;
    goto LABEL_20;
  }
  sub_18000CA28(Name, 260LL, (__int64)L"h");
  v13 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v14 = v13;
  if ( !v13 )
  {
    v9 = 204;
    goto LABEL_6;
  }
  v15 = sub_18000B778(v13, &v18);
  v10 = v15;
  if ( v15 >= 0 )
  {
    if ( !CloseHandle(v14) )
    {
      sub_18000D190(retaddr, 2288LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18000D06BLL);
    }
    v11 = v18;
    goto LABEL_17;
  }
  sub_18000C338(retaddr, 206, (__int64)&unk_1801441D4, v15);
  if ( !CloseHandle(v14) )
  {
    sub_18000D190(retaddr, 2288LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    __debugbreak();
  }
LABEL_21:
  if ( v8 && !CloseHandle(v8) )
  {
    sub_18000D190(retaddr, 2288LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    __debugbreak();
  }
  return v10;
}
