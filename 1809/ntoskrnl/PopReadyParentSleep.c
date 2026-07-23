/*
 * XREFs of PopReadyParentSleep @ 0x14056DC30
 * Callers:
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 * Callees:
 *     IoQueryDeviceNodeDirectedDripsFlags @ 0x14028B520 (IoQueryDeviceNodeDirectedDripsFlags.c)
 */

char __fastcall PopReadyParentSleep(__int64 *a1, __int64 a2, char a3, char a4)
{
  char v4; // r11
  __int64 *v7; // r10
  __int64 *v10; // rax
  __int64 **v11; // rcx
  __int64 v12; // rax
  __int64 **v13; // rcx
  bool v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v7 = a1;
  if ( !a4 || (IoQueryDeviceNodeDirectedDripsFlags((__int64)(a1 - 18), &v14, 0LL, 0LL), v14 != v4) )
  {
    if ( (*((_DWORD *)v7 + 23))-- == 1 )
    {
      v10 = (__int64 *)*v7;
      if ( *(__int64 **)(*v7 + 8) != v7
        || (v11 = (__int64 **)v7[1], *v11 != v7)
        || (*v11 = v10,
            v10[1] = (__int64)v11,
            v12 = a2 + 8 * (*((unsigned __int8 *)v7 + 56) + 8LL * *((unsigned __int8 *)v7 + 56) + 5),
            v13 = *(__int64 ***)(v12 + 8),
            *v13 != (__int64 *)v12) )
      {
        __fastfail(3u);
      }
      *v7 = v12;
      v7[1] = (__int64)v13;
      *v13 = v7;
      *(_QWORD *)(v12 + 8) = v7;
      if ( *((_BYTE *)v7 + 56) == a3 )
        return 1;
    }
  }
  return v4;
}
