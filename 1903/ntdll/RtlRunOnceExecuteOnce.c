/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x18000AFD0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     sub_180009B8C @ 0x180009B8C (sub_180009B8C.c)
 *     RtlRandomEx @ 0x180009C90 (RtlRandomEx.c)
 *     sub_180009D9C @ 0x180009D9C (sub_180009D9C.c)
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     sub_18000A68C @ 0x18000A68C (sub_18000A68C.c)
 *     sub_18004CFFC @ 0x18004CFFC (sub_18004CFFC.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     sub_180083BF4 @ 0x180083BF4 (sub_180083BF4.c)
 *     sub_180084FB8 @ 0x180084FB8 (sub_180084FB8.c)
 *     sub_1800CFD74 @ 0x1800CFD74 (sub_1800CFD74.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D0184 @ 0x1800D0184 (sub_1800D0184.c)
 *     sub_1800D03F8 @ 0x1800D03F8 (sub_1800D03F8.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 *     sub_1800D062C @ 0x1800D062C (sub_1800D062C.c)
 *     sub_1800D070C @ 0x1800D070C (sub_1800D070C.c)
 *     sub_1800D07EC @ 0x1800D07EC (sub_1800D07EC.c)
 *     sub_18010251C @ 0x18010251C (sub_18010251C.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18000B240 (RtlRunOnceComplete.c)
 *     sub_1800830A4 @ 0x1800830A4 (sub_1800830A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800F8F8C @ 0x1800F8F8C (sub_1800F8F8C.c)
 */

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v4 & 3;
        if ( (v4 & 3) != 0 )
          break;
        v12 = v4;
        v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
        if ( v4 == v12 )
        {
          if ( a2(a1, a3, a4) )
          {
            v13 = RtlRunOnceComplete(a1, 0LL);
            if ( v13 >= 0 )
              return 0;
            v14[0] = 1;
          }
          else
          {
            v9 = -1073741823;
            v13 = RtlRunOnceComplete(a1, 4LL);
            if ( v13 >= 0 )
              return v9;
            v14[0] = 2;
          }
          goto LABEL_17;
        }
      }
      if ( v11 != 1 )
        break;
      v4 = sub_1800830A4(v4, a1);
    }
    if ( v11 != 3 )
      goto LABEL_2;
    v13 = -1073741584;
    v14[0] = 0;
LABEL_17:
    sub_1800F8F8C((unsigned int)v13, v14, 1LL);
    return (unsigned int)v13;
  }
}
