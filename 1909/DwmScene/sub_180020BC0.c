/*
 * XREFs of sub_180020BC0 @ 0x180020BC0
 * Callers:
 *     sub_18001ED8C @ 0x18001ED8C (sub_18001ED8C.c)
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 *     sub_180026FE0 @ 0x180026FE0 (sub_180026FE0.c)
 *     sub_1800271D4 @ 0x1800271D4 (sub_1800271D4.c)
 *     sub_1800273C8 @ 0x1800273C8 (sub_1800273C8.c)
 *     sub_1800274FC @ 0x1800274FC (sub_1800274FC.c)
 *     sub_180029D4C @ 0x180029D4C (sub_180029D4C.c)
 *     sub_18002A518 @ 0x18002A518 (sub_18002A518.c)
 *     sub_180032834 @ 0x180032834 (sub_180032834.c)
 *     sub_180032A28 @ 0x180032A28 (sub_180032A28.c)
 *     sub_180063AC8 @ 0x180063AC8 (sub_180063AC8.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 *     sub_180066498 @ 0x180066498 (sub_180066498.c)
 *     sub_18006B724 @ 0x18006B724 (sub_18006B724.c)
 *     sub_18006B918 @ 0x18006B918 (sub_18006B918.c)
 *     sub_180070508 @ 0x180070508 (sub_180070508.c)
 *     sub_1800706FC @ 0x1800706FC (sub_1800706FC.c)
 *     sub_180070B10 @ 0x180070B10 (sub_180070B10.c)
 *     sub_180070F24 @ 0x180070F24 (sub_180070F24.c)
 *     sub_18007110C @ 0x18007110C (sub_18007110C.c)
 *     sub_1800712F4 @ 0x1800712F4 (sub_1800712F4.c)
 *     sub_18007155C @ 0x18007155C (sub_18007155C.c)
 *     sub_180071750 @ 0x180071750 (sub_180071750.c)
 *     sub_180071944 @ 0x180071944 (sub_180071944.c)
 *     sub_180071A80 @ 0x180071A80 (sub_180071A80.c)
 *     sub_180071CBC @ 0x180071CBC (sub_180071CBC.c)
 *     sub_180071DFC @ 0x180071DFC (sub_180071DFC.c)
 *     sub_180071F58 @ 0x180071F58 (sub_180071F58.c)
 *     sub_1800720C0 @ 0x1800720C0 (sub_1800720C0.c)
 *     sub_180072200 @ 0x180072200 (sub_180072200.c)
 *     sub_180088ADC @ 0x180088ADC (sub_180088ADC.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     sub_18008F44C @ 0x18008F44C (sub_18008F44C.c)
 *     sub_18008F648 @ 0x18008F648 (sub_18008F648.c)
 *     sub_1800A0F94 @ 0x1800A0F94 (sub_1800A0F94.c)
 *     sub_1800A13A8 @ 0x1800A13A8 (sub_1800A13A8.c)
 *     sub_1800A159C @ 0x1800A159C (sub_1800A159C.c)
 *     sub_1800A17D8 @ 0x1800A17D8 (sub_1800A17D8.c)
 *     sub_1800A1A14 @ 0x1800A1A14 (sub_1800A1A14.c)
 *     sub_1800A1B54 @ 0x1800A1B54 (sub_1800A1B54.c)
 *     sub_1800A1D84 @ 0x1800A1D84 (sub_1800A1D84.c)
 *     sub_1800A6EF8 @ 0x1800A6EF8 (sub_1800A6EF8.c)
 *     sub_1800A70EC @ 0x1800A70EC (sub_1800A70EC.c)
 *     sub_1800A724C @ 0x1800A724C (sub_1800A724C.c)
 *     sub_1800AB248 @ 0x1800AB248 (sub_1800AB248.c)
 *     sub_1800AB478 @ 0x1800AB478 (sub_1800AB478.c)
 *     sub_1800B32CC @ 0x1800B32CC (sub_1800B32CC.c)
 *     sub_1800B34B4 @ 0x1800B34B4 (sub_1800B34B4.c)
 *     sub_1800BC05C @ 0x1800BC05C (sub_1800BC05C.c)
 *     sub_1800BC470 @ 0x1800BC470 (sub_1800BC470.c)
 *     sub_1800D3984 @ 0x1800D3984 (sub_1800D3984.c)
 *     sub_1800D3D98 @ 0x1800D3D98 (sub_1800D3D98.c)
 *     sub_1800D4CE8 @ 0x1800D4CE8 (sub_1800D4CE8.c)
 *     sub_1800D7834 @ 0x1800D7834 (sub_1800D7834.c)
 *     sub_18012103C @ 0x18012103C (sub_18012103C.c)
 *     sub_180121230 @ 0x180121230 (sub_180121230.c)
 *     sub_180121470 @ 0x180121470 (sub_180121470.c)
 *     sub_1801215CC @ 0x1801215CC (sub_1801215CC.c)
 *     sub_1801222B0 @ 0x1801222B0 (sub_1801222B0.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_180020BC0(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // r8
  __int64 *v5; // r9
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    *a1 = (__int64 *)v1[2];
    return a1;
  }
  v3 = (__int64 *)*v1;
  if ( !*(_BYTE *)(*v1 + 25) )
  {
    for ( i = (__int64 *)v3[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v3 = i;
LABEL_13:
    *a1 = v3;
    return a1;
  }
  v3 = (__int64 *)v1[1];
  if ( !*((_BYTE *)v3 + 25) )
  {
    v4 = v1;
    v5 = v1;
    do
    {
      v1 = v5;
      if ( v4 != (__int64 *)*v3 )
        break;
      v4 = v3;
      *a1 = v3;
      v3 = (__int64 *)v3[1];
      v5 = v4;
      v1 = v4;
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  if ( !*((_BYTE *)v1 + 25) )
    goto LABEL_13;
  return a1;
}
