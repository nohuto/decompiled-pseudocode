/*
 * XREFs of PopQueryCurrentBroadcastProperties @ 0x1408707C4
 * Callers:
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     IoQueryDeviceNodeDirectedDripsFlags @ 0x14028B520 (IoQueryDeviceNodeDirectedDripsFlags.c)
 */

_QWORD *__fastcall PopQueryCurrentBroadcastProperties(char *a1, char *a2)
{
  char v2; // r11
  char v3; // bl
  unsigned int v6; // esi
  _QWORD **v7; // r10
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp
  char v10; // dl
  _QWORD *result; // rax
  bool v12; // [rsp+50h] [rbp+8h] BYREF
  bool v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  if ( qword_140418730 )
  {
    v6 = 0;
    v7 = (_QWORD **)((char *)qword_140418730 + 72);
    do
    {
      if ( *((_DWORD *)v7 - 2) )
      {
        v8 = *v7;
        while ( v8 != v7 )
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
          IoQueryDeviceNodeDirectedDripsFlags((__int64)(v9 - 18), 0LL, &v12, &v13);
          if ( v12 && v13 == v10 )
            v3 = 1;
          result = v9 + 2;
          if ( (_QWORD *)*result != result && v12 )
            v2 = 1;
          if ( v2 && v3 )
            goto LABEL_15;
        }
      }
      ++v6;
      v7 += 9;
    }
    while ( v6 < 4 );
  }
LABEL_15:
  if ( a1 )
    *a1 = v2;
  if ( a2 )
    *a2 = v3;
  return result;
}
