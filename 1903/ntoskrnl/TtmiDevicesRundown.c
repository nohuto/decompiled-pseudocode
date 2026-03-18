/*
 * XREFs of TtmiDevicesRundown @ 0x1408BB08C
 * Callers:
 *     TtmiSessionsRundown @ 0x1408BDF10 (TtmiSessionsRundown.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     TtmiLogDeviceRundown @ 0x1408C16B4 (TtmiLogDeviceRundown.c)
 */

void *__fastcall TtmiDevicesRundown(_DWORD *a1)
{
  void *result; // rax
  int v3; // esi
  __int64 **v4; // rdi
  __int64 *i; // rbx
  int v6; // ecx
  __int64 v7; // rax
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  result = memset(v8, 0, 0x28uLL);
  if ( a1 )
  {
    v3 = *a1;
    v4 = (__int64 **)(a1 + 24);
    for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
    {
      v6 = *((_DWORD *)i + 150);
      if ( (v6 & 8) == 0 )
      {
        HIDWORD(v8[0]) = *((_DWORD *)i + 149);
        LODWORD(v8[1]) = *((_DWORD *)i + 4);
        v8[3] = i[3];
        HIDWORD(v8[1]) = *((_DWORD *)i + 8);
        LODWORD(v8[2]) = *((_DWORD *)i + 18);
        v7 = i[76];
        HIDWORD(v8[2]) = v6;
        v8[4] = v7;
        LODWORD(v8[0]) = v3;
        result = (void *)TtmiLogDeviceRundown(v8);
      }
    }
  }
  return result;
}
