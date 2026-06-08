/*
 * XREFs of LpiIdleExecute @ 0x1C000B6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LpiIdleExecute(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // r8
  _BYTE *v9; // r9
  void (__fastcall *v10)(_BYTE *, __int64, _BYTE *); // r10
  void (__fastcall *v11)(_BYTE *, _QWORD); // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v8 = 88LL * a3;
  v9 = (_BYTE *)(v8 + a1 + 96);
  v10 = *(void (__fastcall **)(_BYTE *, __int64, _BYTE *))(v8 + a1 + 128);
  v11 = *(void (__fastcall **)(_BYTE *, _QWORD))(v8 + a1 + 88);
  if ( v10 )
  {
    LODWORD(v12) = a6;
    v13 = *(_QWORD *)(v8 + a1 + 120);
    if ( a6 )
    {
      do
      {
        v12 = (unsigned int)(v12 - 1);
        v14 = qword_1C0011958 + 56LL * *(unsigned int *)(a7 + 4 * v12);
        if ( *(_QWORD *)v14 )
        {
          v10 = *(void (__fastcall **)(_BYTE *, __int64, _BYTE *))(v14 + 40);
          v9 = (_BYTE *)(v14 + 8);
          v11 = *(void (__fastcall **)(_BYTE *, _QWORD))v14;
          if ( !v10 )
            goto LABEL_9;
          v13 = *(_QWORD *)(v14 + 32);
        }
        else
        {
          v13 += *(_QWORD *)(v14 + 32);
        }
      }
      while ( (_DWORD)v12 );
    }
    v10(v9, v13 + a2, v16);
    v9 = v16;
  }
LABEL_9:
  v11(v9, a5);
  return 0LL;
}
