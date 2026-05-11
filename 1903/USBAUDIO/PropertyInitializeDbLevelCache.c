/*
 * XREFs of PropertyInitializeDbLevelCache @ 0x1C0026A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeDbLevelCache(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v5; // r8d
  unsigned int i; // ebx
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  for ( i = 129; i <= 0x84; ++i )
  {
    if ( v5 < 0 )
      break;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, _QWORD, unsigned int, char *))(a2 + 136))(
           a1,
           a2,
           &v9,
           *a3,
           i,
           &v10);
    if ( v5 >= 0 )
    {
      switch ( i )
      {
        case 0x81u:
          a3[3] = v9;
          break;
        case 0x82u:
          a3[6] = v9;
          break;
        case 0x83u:
          a3[7] = v9;
          break;
        case 0x84u:
          a3[4] = v9;
          break;
      }
    }
  }
  return (unsigned int)v5;
}
