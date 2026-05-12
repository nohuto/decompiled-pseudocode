/*
 * XREFs of StorEtwMiniportEventProxy @ 0x1C001DBF0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 * Callees:
 *     StorEtwMiniportEvent @ 0x1C001DDA0 (StorEtwMiniportEvent.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

__int64 __fastcall StorEtwMiniportEventProxy(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // r11
  __int64 *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // esi
  int v9; // edi
  int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // r14
  int v13; // r15d
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rcx
  int v18; // ecx
  __int64 result; // rax
  _BYTE v21[64]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v22[8]; // [rsp+A0h] [rbp-88h] BYREF

  v4 = **(_QWORD **)(a1 - 16);
  if ( !v4 )
    return 3238002694LL;
  v5 = a3 + 8;
  v6 = *a3;
  v7 = a3[3];
  v8 = *((_DWORD *)a3 + 4);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a3 + 12);
  v11 = a3[7];
  v12 = a3[4];
  v13 = *((_DWORD *)a3 + 10);
  if ( a2 == 85 || a2 == 58 )
  {
    v14 = 2;
  }
  else if ( a2 == 59 || a2 == 86 )
  {
    v14 = 4;
  }
  else
  {
    v14 = 8;
  }
  v15 = 0LL;
  v16 = v14;
  do
  {
    v17 = *v5;
    v5 += 2;
    v22[v15++] = v17;
    *(_QWORD *)&v21[v15 * 8 - 8] = *(v5 - 1);
    --v16;
  }
  while ( v16 );
  v18 = StorEtwMiniportEvent(v4, v6, v9, v8, v7, v12, v13, v10, v11, v14, (__int64)v22, (__int64)v21);
  switch ( v18 )
  {
    case 0:
      return 0LL;
    case -2147483643:
      return 3238002692LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741670:
      return 3238002691LL;
    case -1073741496:
      return 3238002696LL;
  }
  result = 3238002689LL;
  if ( v18 >= 0 )
    return 0LL;
  return result;
}
