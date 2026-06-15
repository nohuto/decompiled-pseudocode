/*
 * XREFs of PbmPlayToStreamStateChanged @ 0x180023C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_180024364 @ 0x180024364 (sub_180024364.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmPlayToStreamStateChanged(void *a1, int a2)
{
  int v3; // edi
  HANDLE ProcessHeap; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = 0;
  if ( a2 <= 1 )
  {
    if ( qword_18004FE78 )
    {
      v3 = sub_18001B7E4(qword_18004FE78, a1, &v11);
      if ( v3 >= 0 )
      {
        ProcessHeap = GetProcessHeap();
        v6 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
        if ( v6 )
        {
          v7 = v11;
          *(_QWORD *)v6 = v11;
          v6[2] = a2;
          _InterlockedIncrement(v7 + 2);
        }
        else
        {
          v6 = 0LL;
        }
        if ( v6 )
        {
          v3 = sub_180024364(v5, v6);
          if ( v3 >= 0 )
            v6 = 0LL;
        }
        else
        {
          v3 = -2147024882;
        }
        if ( v6 )
        {
          v8 = *(volatile signed __int32 **)v6;
          if ( *(_QWORD *)v6 )
          {
            if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 32LL))(v8);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
            }
            *(_QWORD *)v6 = 0LL;
          }
          sub_180039D98(v6);
        }
      }
      v9 = v11;
      if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 32LL))(v9);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v3;
}
