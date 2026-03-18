/*
 * XREFs of PdcPortOpen @ 0x1408D916C
 * Callers:
 *     PdcNotificationClientRegister @ 0x1408D94E0 (PdcNotificationClientRegister.c)
 * Callees:
 *     PdcPortOpenCommon @ 0x1407871DC (PdcPortOpenCommon.c)
 */

__int64 __fastcall PdcPortOpen(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  return PdcPortOpenCommon(a1, a2, a3, a4, v9, v10, v11, v12, a8);
}
