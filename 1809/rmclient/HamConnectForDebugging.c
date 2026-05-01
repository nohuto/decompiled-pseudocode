/*
 * XREFs of HamConnectForDebugging @ 0x1800080D0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 *     HampConnectionCreate @ 0x180007080 (HampConnectionCreate.c)
 */

__int64 __fastcall HamConnectForDebugging(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v6[0] = a1;
    v6[1] = 0LL;
    v3 = HampConnectionCreate((__int64)v6, (__int64)&unk_180013960, &v7);
    if ( v3 < 0 )
    {
      v4 = v7;
    }
    else
    {
      v4 = 0LL;
      *a2 = v7;
      v3 = 0;
    }
    if ( v4 )
      HampConnectionDestroy(v4);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v3;
}
