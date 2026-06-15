/*
 * XREFs of PbmSetScreenReaderState @ 0x1800240B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_180024534 @ 0x180024534 (sub_180024534.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetScreenReaderState(void *a1, int a2, int a3)
{
  int v5; // edi
  HANDLE ProcessHeap; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  volatile signed __int32 *v9; // rsi
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v12; // [rsp+20h] [rbp-28h] BYREF

  v12 = 0LL;
  v5 = 0;
  if ( qword_18004FE78 )
  {
    v5 = sub_18001B7E4(qword_18004FE78, a1, &v12);
    if ( v5 >= 0 )
    {
      ProcessHeap = GetProcessHeap();
      v8 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
      if ( v8 )
      {
        *(_QWORD *)v8 = v12;
        v8[2] = a2;
        v8[3] = a3;
        _InterlockedIncrement(v12 + 2);
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v5 = sub_180024534(v7, v8);
        if ( v5 >= 0 )
          v8 = 0LL;
      }
      else
      {
        v5 = -2147024882;
      }
      if ( v8 )
      {
        v9 = *(volatile signed __int32 **)v8;
        if ( *(_QWORD *)v8 )
        {
          if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 32LL))(v9);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
          }
          *(_QWORD *)v8 = 0LL;
        }
        sub_180039D98(v8);
      }
    }
    v10 = v12;
    if ( v12 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 32LL))(v12);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    }
  }
  return (unsigned int)v5;
}
