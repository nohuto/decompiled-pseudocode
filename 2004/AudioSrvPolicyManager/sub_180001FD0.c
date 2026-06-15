/*
 * XREFs of sub_180001FD0 @ 0x180001FD0
 * Callers:
 *     sub_18000258C @ 0x18000258C (sub_18000258C.c)
 *     sub_180002A40 @ 0x180002A40 (sub_180002A40.c)
 *     sub_18000419C @ 0x18000419C (sub_18000419C.c)
 *     sub_1800046D4 @ 0x1800046D4 (sub_1800046D4.c)
 *     sub_180005048 @ 0x180005048 (sub_180005048.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     memcpy @ 0x18003AE0F (memcpy.c)
 */

__int64 __fastcall sub_180001FD0(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    o__invalid_parameter_noinfo();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22LL;
}
