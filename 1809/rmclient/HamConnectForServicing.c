/*
 * XREFs of HamConnectForServicing @ 0x180008070
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 *     HampConnectionCreate @ 0x180007080 (HampConnectionCreate.c)
 */

__int64 __fastcall HamConnectForServicing(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = HampConnectionCreate(0LL, (__int64)&unk_1800139C0, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    HampConnectionDestroy(v3);
  return (unsigned int)v2;
}
