/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x1C003BB40
 * Callers:
 *     <none>
 * Callees:
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 Valid; // rax
  __int64 v14; // rdx
  struct tagHOOK *v15; // rax
  unsigned __int64 v16; // r8
  int v17[3]; // [rsp+34h] [rbp-54h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-28h]

  v6 = a2;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    PsGetThreadWin32Thread(CurrentThread);
  v10 = gptiCurrent;
  v11 = *(_QWORD *)(gptiCurrent + 680LL);
  if ( v11 )
  {
    Valid = PhkNextValid(v11);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 4 )
        return 0LL;
    }
  }
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  v19 = v6;
  v18[1] = a3;
  v18[0] = a4;
  v21 = 0LL;
  v14 = *(_QWORD *)(*(_QWORD *)v10 + 680LL);
  if ( v14 )
  {
    v15 = (struct tagHOOK *)PhkNextValid(v14);
    return xxxCallHook2(v15, 0, v16, (__int64)v18, v17, 0);
  }
  return v9;
}
