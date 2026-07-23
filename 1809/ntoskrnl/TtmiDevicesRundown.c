/*
 * XREFs of TtmiDevicesRundown @ 0x14087E7EC
 * Callers:
 *     TtmiSessionsRundown @ 0x1408814B4 (TtmiSessionsRundown.c)
 * Callees:
 *     TtmiLogDeviceRundown @ 0x140884B64 (TtmiLogDeviceRundown.c)
 */

__int64 __fastcall TtmiDevicesRundown(int *a1)
{
  int v1; // esi
  __int64 *v2; // rdi
  __int64 *i; // rbx
  int v4; // ecx
  __int64 v5; // rax
  __int64 result; // rax
  _DWORD v7[6]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( a1 )
  {
    v1 = *a1;
    v2 = (__int64 *)(a1 + 24);
    for ( i = (__int64 *)*((_QWORD *)a1 + 12); i != v2; i = (__int64 *)*i )
    {
      v4 = *((_DWORD *)i + 150);
      if ( (v4 & 8) == 0 )
      {
        v7[1] = *((_DWORD *)i + 149);
        v7[2] = *((_DWORD *)i + 4);
        v8 = i[3];
        v7[3] = *((_DWORD *)i + 8);
        v7[4] = *((_DWORD *)i + 18);
        v5 = i[76];
        v7[5] = v4;
        v9 = v5;
        v7[0] = v1;
        result = TtmiLogDeviceRundown(v7);
      }
    }
  }
  return result;
}
