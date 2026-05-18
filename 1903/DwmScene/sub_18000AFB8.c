/*
 * XREFs of sub_18000AFB8 @ 0x18000AFB8
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x18000B0B0 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000B5F0 @ 0x18000B5F0 (sub_18000B5F0.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18000AFB8(unsigned __int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  char v3; // bp
  __int64 v4; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 CurrentThreadId; // r10
  __int64 *i; // rbx
  __int64 v10; // rbx
  char v11; // al
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  *a2 = 0;
  v3 = 0;
  v4 = qword_180268A98;
  v7 = a1;
  if ( qword_180268A98 )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xA);
    for ( i = *(__int64 **)(v4 + 8 * (CurrentThreadId % 0xA)); i; i = (__int64 *)i[2] )
    {
      if ( *((_DWORD *)i + 2) == (_DWORD)CurrentThreadId )
        goto LABEL_7;
    }
  }
  i = 0LL;
LABEL_7:
  if ( i && *i )
  {
    *a2 = 0;
    if ( (unsigned __int8)sub_18000B5F0(v7, *i, a2, a3) )
      *(_QWORD *)(v7 + 64) = a2;
    v10 = *i;
    do
    {
      v11 = (***(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(v10 + 8))(*(_QWORD *)(v10 + 8), v7);
      v10 = *(_QWORD *)(v10 + 16);
      v3 |= v11;
    }
    while ( v10 );
  }
  result = qword_180268AE0;
  if ( qword_180268AE0 )
  {
    LOBYTE(a1) = v3;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_180268AE0(a1, v7);
  }
  return result;
}
