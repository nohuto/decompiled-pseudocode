/*
 * XREFs of sub_18000AA90 @ 0x18000AA90
 * Callers:
 *     sub_18000B6E4 @ 0x18000B6E4 (sub_18000B6E4.c)
 * Callees:
 *     sub_18000AF84 @ 0x18000AF84 (sub_18000AF84.c)
 *     sub_18000B3F8 @ 0x18000B3F8 (sub_18000B3F8.c)
 *     sub_18000BBFC @ 0x18000BBFC (sub_18000BBFC.c)
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_18000CC6C @ 0x18000CC6C (sub_18000CC6C.c)
 *     sub_18000CDA8 @ 0x18000CDA8 (sub_18000CDA8.c)
 *     sub_18000D190 @ 0x18000D190 (sub_18000D190.c)
 *     sub_18000D298 @ 0x18000D298 (sub_18000D298.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000AA90(__int64 a1, _QWORD *a2)
{
  HANDLE Mutex; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  HANDLE v7; // rbx
  unsigned int v8; // edi
  DWORD v10; // eax
  void *v11; // rsi
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+28h] [rbp-D8h]
  HANDLE hHandle; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  GetCurrentProcessId();
  v15 = a1;
  sub_18000CC6C((char *)Name);
  hHandle = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  sub_18000D298(&hHandle, Mutex);
  v7 = hHandle;
  if ( !hHandle )
    return (unsigned int)sub_18000B3F8(v6, v5);
  v10 = WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_9;
    if ( v10 != 128 )
    {
      sub_18000AF84(retaddr, 2838LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18000AC90LL);
    }
  }
  if ( (v10 & 0xFFFFFF7F) != 0 )
  {
    v11 = 0LL;
    goto LABEL_10;
  }
LABEL_9:
  v11 = v7;
LABEL_10:
  v17[0] = 0LL;
  v17[1] = v11;
  v12 = sub_18000CDA8(Name, v17);
  v8 = v12;
  if ( v12 < 0 )
  {
    sub_18000C338(retaddr, 281LL, &unk_1801431D4, (unsigned int)v12, 120, v15);
    goto LABEL_16;
  }
  v13 = (_DWORD *)v17[0];
  if ( v17[0] )
  {
    *a2 = v17[0];
    *(_DWORD *)*a2 = *v13 + 1;
  }
  else
  {
    v14 = sub_18000BBFC(Name, &hHandle, a2);
    v8 = v14;
    if ( v14 < 0 )
    {
      sub_18000C338(retaddr, 289LL, &unk_1801431D4, (unsigned int)v14, 120, v15);
      goto LABEL_15;
    }
  }
  v8 = 0;
LABEL_15:
  v7 = hHandle;
LABEL_16:
  if ( v11 && !ReleaseMutex(v11) )
  {
    sub_18000D190(retaddr, 2298LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    __debugbreak();
  }
  if ( v7 && !CloseHandle(v7) )
  {
    sub_18000D190(retaddr, 2288LL, "d:\\os\\public\\amd64fre\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    __debugbreak();
  }
  return v8;
}
