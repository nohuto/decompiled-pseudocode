/*
 * XREFs of sub_18000AD28 @ 0x18000AD28
 * Callers:
 *     sub_18000BBFC @ 0x18000BBFC (sub_18000BBFC.c)
 * Callees:
 *     sub_18000B3F8 @ 0x18000B3F8 (sub_18000B3F8.c)
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18000CA28 @ 0x18000CA28 (sub_18000CA28.c)
 *     sub_18000CB6C @ 0x18000CB6C (sub_18000CB6C.c)
 *     sub_18000D188 @ 0x18000D188 (sub_18000D188.c)
 *     sub_18000D298 @ 0x18000D298 (sub_18000D298.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000AD28(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rbp
  LONG v8; // ebx
  LONG v9; // r14d
  LONG v10; // r8d
  HANDLE Semaphore; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  HANDLE v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-258h]
  __int64 dwDesiredAccess; // [rsp+28h] [rbp-250h]
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  void *retaddr; // [rsp+278h] [rbp+0h]

  if ( !a3 )
  {
    if ( (a4 & 0xFFFFFFFF80000000uLL) == 0 )
      goto LABEL_3;
LABEL_22:
    sub_18000D188();
  }
  if ( (a4 & 0xC000000000000000uLL) != 0 )
    goto LABEL_22;
LABEL_3:
  sub_18000CB6C(Name, 260LL, a2);
  sub_18000CA28(Name, 260LL, L"_p0");
  v7 = a4 >> 31;
  v8 = a4 & 0x7FFFFFFF;
  v9 = 1;
  v10 = 1;
  if ( v8 )
    v10 = v8;
  Semaphore = CreateSemaphoreExW(0LL, v8, v10, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    sub_18000D298(a1, Semaphore);
    v14 = 0;
  }
  else
  {
    v14 = sub_18000B3F8(v13, v12);
  }
  if ( v14 < 0 )
  {
    v15 = 124LL;
LABEL_12:
    sub_18000C338(retaddr, v15, &unk_1801431D4, (unsigned int)v14, v20, dwDesiredAccess);
    return (unsigned int)v14;
  }
  if ( a3 )
  {
    sub_18000CA28(Name, 260LL, L"h");
    if ( (_DWORD)v7 )
      v9 = v7;
    v17 = CreateSemaphoreExW(0LL, v7, v9, Name, 0, 0x1F0003u);
    if ( v17 )
    {
      sub_18000D298(a1 + 8, v17);
      v14 = 0;
    }
    else
    {
      v14 = sub_18000B3F8(v19, v18);
    }
    if ( v14 < 0 )
    {
      v15 = 128LL;
      goto LABEL_12;
    }
  }
  return 0LL;
}
