/*
 * XREFs of EditionKeyEventLLHook @ 0x1C00D7DB0
 * Callers:
 *     <none>
 * Callees:
 *     HasHidTable @ 0x1C001E310 (HasHidTable.c)
 *     PhkFirstValid @ 0x1C00D7E40 (PhkFirstValid.c)
 *     IsUninterceptable @ 0x1C00E9C20 (IsUninterceptable.c)
 *     IsSAS @ 0x1C00EA2B0 (IsSAS.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     IsGpqForegroundAccessibleExplicit @ 0x1C0198290 (IsGpqForegroundAccessibleExplicit.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        unsigned int a11,
        _QWORD *a12)
{
  unsigned __int8 v12; // dh
  unsigned __int8 v13; // r12^1
  __int64 Valid; // rax
  struct tagHOOK *v17; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned __int8 v23; // ch
  __int64 v24; // rsi
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v30; // [rsp+34h] [rbp-64h] BYREF
  _DWORD v31[4]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]

  v13 = v12;
  v30 = a4;
  Valid = PhkFirstValid(a1, 13LL);
  v17 = (struct tagHOOK *)Valid;
  if ( !Valid )
    return 0LL;
  if ( gpqForeground )
  {
    v19 = *(_QWORD *)(gpqForeground + 120LL);
    v20 = v19 ? *(_QWORD *)(v19 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 416);
      if ( v21 == *(_QWORD *)(*(_QWORD *)(Valid + 16) + 416LL)
        && (PVOID)grpdeskRitInput != grpdeskLogon
        && (unsigned int)HasHidTable(v20)
        && (*(_DWORD *)(*(_QWORD *)(v21 + 824) + 100LL) & 0x10) != 0 )
      {
        return 0LL;
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 1344);
  v23 = v13 | 0x20;
  v31[1] = a6;
  if ( a3 == a4 )
    v23 = v13;
  v31[0] = a5;
  v31[3] = a9;
  v32 = a10;
  v31[2] = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | v23;
  if ( !a8 || a11 )
  {
    *(_DWORD *)(a1 + 1344) = -1;
    *(_DWORD *)(a1 + 1348) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1344) = *a12;
  }
  v24 = *(_QWORD *)(a1 + 1360);
  v25 = v30;
  *(_QWORD *)(a1 + 1360) = v31;
  if ( !xxxCallHook2(v17, 0, v25, (__int64)v31, (int *)&v30, 0)
    || (LOBYTE(v26) = a5, *(_QWORD *)(a1 + 1344) = v22, (unsigned int)IsSAS(v26, &v30))
    || IsUninterceptable(v27, a5) )
  {
    *(_QWORD *)(a1 + 1344) = v22;
    *(_QWORD *)(a1 + 1360) = v24;
    if ( !(unsigned int)IsGpqForegroundAccessibleExplicit(a8, *a12, a11) )
    {
      MSGLUA_GPQFOREGROUND(v28);
      return 1LL;
    }
    return 0LL;
  }
  *(_QWORD *)(a1 + 1360) = v24;
  return 1LL;
}
