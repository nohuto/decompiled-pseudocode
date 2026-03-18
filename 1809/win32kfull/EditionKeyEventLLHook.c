/*
 * XREFs of EditionKeyEventLLHook @ 0x1C00B5990
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C00B5BC8 (PhkFirstValid.c)
 *     HasHidTable @ 0x1C00D2180 (HasHidTable.c)
 *     IsUninterceptable @ 0x1C00DFAAC (IsUninterceptable.c)
 *     IsSAS @ 0x1C00E01D4 (IsSAS.c)
 *     EditionIsGpqForegroundInaccessibleExplicit @ 0x1C011B940 (EditionIsGpqForegroundInaccessibleExplicit.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
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
  __int64 Valid; // rax
  struct tagHOOK *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rbx
  unsigned __int16 v21; // ax
  __int64 v22; // rsi
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v28; // [rsp+34h] [rbp-64h] BYREF
  _DWORD v29[4]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h]

  v28 = a4;
  Valid = PhkFirstValid(a1, 13LL);
  v16 = (struct tagHOOK *)Valid;
  if ( Valid )
  {
    if ( !gpqForeground
      || ((v17 = *(_QWORD *)(gpqForeground + 120LL)) == 0
        ? (v18 = *(_QWORD *)(gpqForeground + 96LL))
        : (v18 = *(_QWORD *)(v17 + 16)),
          !v18
       || (v19 = *(_QWORD *)(v18 + 424), v19 != *(_QWORD *)(*(_QWORD *)(Valid + 16) + 424LL))
       || (PVOID)grpdeskRitInput == grpdeskLogon
       || !(unsigned int)HasHidTable(v18)
       || (*(_DWORD *)(*(_QWORD *)(v19 + 832) + 100LL) & 0x10) == 0) )
    {
      v20 = *(_QWORD *)(a1 + 1336);
      v29[1] = a6;
      v21 = a2 | 0x2000;
      v29[0] = a5;
      if ( a3 == a4 )
        v21 = a2;
      v29[3] = a9;
      v30 = a10;
      v29[2] = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | HIBYTE(v21);
      if ( !a8 || a11 )
      {
        *(_DWORD *)(a1 + 1336) = -1;
        *(_DWORD *)(a1 + 1340) = -1;
      }
      else
      {
        *(_QWORD *)(a1 + 1336) = *a12;
      }
      v22 = *(_QWORD *)(a1 + 1352);
      v23 = v28;
      *(_QWORD *)(a1 + 1352) = v29;
      if ( xxxCallHook2(v16, 0, v23, (__int64)v29, (int *)&v28, 0) )
      {
        LOBYTE(v24) = a5;
        *(_QWORD *)(a1 + 1336) = v20;
        if ( !(unsigned int)IsSAS(v24, &v28) && !IsUninterceptable(v25, a5) )
        {
          *(_QWORD *)(a1 + 1352) = v22;
          return 1LL;
        }
      }
      *(_QWORD *)(a1 + 1336) = v20;
      *(_QWORD *)(a1 + 1352) = v22;
      if ( (unsigned int)EditionIsGpqForegroundInaccessibleExplicit(a8, a1, *a12, a11) )
        return 1LL;
    }
  }
  return 0LL;
}
