/*
 * XREFs of PbmCastingAppStateChanged @ 0x180023D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_18002444C @ 0x18002444C (sub_18002444C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmCastingAppStateChanged(void *a1, int a2)
{
  int v3; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rbx
  volatile signed __int32 *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // r9
  int v9; // edx
  volatile signed __int32 *v10; // rsi
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = 0;
  if ( a2 <= 1 )
  {
    if ( qword_18004FE78 )
    {
      v3 = sub_18001B7E4(qword_18004FE78, a1, &v13);
      if ( v3 >= 0 )
      {
        ProcessHeap = GetProcessHeap();
        v5 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
        if ( v5 )
        {
          v6 = v13;
          *(_QWORD *)v5 = v13;
          v5[2] = a2;
          _InterlockedIncrement(v6 + 2);
        }
        else
        {
          v5 = 0LL;
        }
        if ( v5 )
        {
          v7 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
          if ( *v7 > 4u )
          {
            v9 = *((_DWORD *)v13 + 48);
            LODWORD(v15) = a2 == 0;
            LODWORD(v16) = v9;
            v14 = *((_QWORD *)v13 + 26);
            sub_1800016F0(
              (__int64)v7,
              (unsigned __int8 *)dword_18004643E,
              (__int64)v13,
              v8,
              (void **)&v14,
              (__int64)&v16,
              (__int64)&v15);
          }
          v3 = sub_18002444C(v7, v5);
          if ( v3 >= 0 )
            v5 = 0LL;
        }
        else
        {
          v3 = -2147024882;
        }
        if ( v5 )
        {
          v10 = *(volatile signed __int32 **)v5;
          if ( *(_QWORD *)v5 )
          {
            if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 32LL))(v10);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
            }
            *(_QWORD *)v5 = 0LL;
          }
          sub_180039D98(v5);
        }
      }
      v11 = v13;
      if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v3;
}
