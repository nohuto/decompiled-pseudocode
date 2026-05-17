/*
 * XREFs of sub_1800F4580 @ 0x1800F4580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F46F8 @ 0x1800F46F8 (sub_1800F46F8.c)
 *     sub_1800F4C94 @ 0x1800F4C94 (sub_1800F4C94.c)
 */

__int64 __fastcall sub_1800F4580(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  int v7; // r9d
  _DWORD *v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = *(_DWORD *)a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 && (*(_BYTE *)(a1 + 24) & 1) != 0 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        v5 = v4 >> 12;
        v6 = (v4 + *(_QWORD *)(a1 + 32) - 1LL) >> 12;
        qword_1801669B8 = v4 >> 12;
        if ( v4 >> 12 == qword_1801669B0 )
        {
          v7 = dword_180166980;
        }
        else
        {
          if ( qword_1801669B0 )
          {
            sub_1800F46F8(qword_1801669B0, 1LL);
            v4 = *(_QWORD *)(a1 + 16);
            v5 = qword_1801669B8;
          }
          qword_1801669B0 = v5;
          v7 = 0;
        }
        v8 = qword_180166988;
        dword_180166980 = v7 + 1;
        v9 = 5LL * v7;
        *((_QWORD *)qword_180166988 + v9 + 2) = v4;
        v8[2 * v9 + 8] = 0;
        *(_QWORD *)&v8[2 * v9 + 6] = *(_QWORD *)(a1 + 32);
        if ( v6 != v5 )
        {
          sub_1800F46F8(v5, 1LL);
          v10 = qword_180166988;
          v11 = *(_QWORD *)(a1 + 16);
          dword_180166980 = 1;
          *((_QWORD *)qword_180166988 + 2) = v11;
          v10[8] = 0;
          *((_QWORD *)v10 + 3) = *(_QWORD *)(a1 + 32);
          if ( v6 - qword_1801669B8 > 1 )
            sub_1800F46F8(qword_1801669B8 + 1, v6 - qword_1801669B8 - 1);
          qword_1801669B0 = v6;
        }
      }
    }
    else
    {
      sub_1800F4C94(qword_180163BA0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), 0LL);
    }
  }
  else
  {
    if ( qword_1801669B0 )
      sub_1800F46F8(qword_1801669B0, 1LL);
    qword_1801669B0 = 0LL;
    v12 = *(_QWORD *)(a1 + 16);
    dword_180166980 = 0;
    qword_1801669A0 = v12;
  }
  return 0LL;
}
