/*
 * XREFs of EditionUnloadCursorsAndIcons @ 0x1C0138230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall EditionUnloadCursorsAndIcons(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbp

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 10, (__int64)&WPP_ab4028c72ea838b10fd3967d57f74ff9_Traceguids);
  }
  v2 = (__int64 *)&unk_1C03224C8;
  v3 = 7LL;
  v4 = (char *)&unk_1C03224C8;
  do
  {
    if ( *v2 )
    {
      v5 = *v2;
      *(_QWORD *)(v5 + 24) = PsGetCurrentProcessWin32Process(a1, a2);
      HMAssignmentUnlock(v4);
    }
    v4 += 552;
    v2 += 69;
    --v3;
  }
  while ( v3 );
  v6 = 0LL;
  v7 = 0LL;
  v8 = 19LL;
  do
  {
    result = gasyscur[0];
    v10 = *(_QWORD *)(v6 + gasyscur[0] + 8);
    if ( v10 )
    {
      *(_QWORD *)(v10 + 24) = PsGetCurrentProcessWin32Process(a1, a2);
      result = HMAssignmentUnlock(&gasyscur[v7 + 1]);
    }
    v7 += 69LL;
    v6 += 552LL;
    --v8;
  }
  while ( v8 );
  if ( gpCursorSizes )
    result = Win32FreePool(gpCursorSizes);
  gpCursorSizes = 0LL;
  return result;
}
