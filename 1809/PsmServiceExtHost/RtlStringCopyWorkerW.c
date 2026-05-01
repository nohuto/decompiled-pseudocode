/*
 * XREFs of RtlStringCopyWorkerW @ 0x18002F0DC
 * Callers:
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18002EFA4 (-HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerW(_WORD *a1, __int64 a2)
{
  _WORD *v2; // r8
  char *v3; // rcx
  __int64 v4; // rax
  __int16 v5; // r9
  _WORD *v6; // rcx
  __int64 result; // rax

  v2 = a1;
  if ( a2 )
  {
    v3 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)a1);
    v4 = 66LL;
    do
    {
      if ( !v4 )
        break;
      v5 = *(_WORD *)((char *)v2 + (_QWORD)v3);
      if ( !v5 )
        break;
      *v2 = v5;
      --v4;
      ++v2;
      --a2;
    }
    while ( a2 );
  }
  v6 = v2 - 1;
  result = a2 == 0 ? 0x80000005 : 0;
  if ( a2 )
    v6 = v2;
  *v6 = 0;
  return result;
}
