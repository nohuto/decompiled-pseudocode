/*
 * XREFs of SetDialogPointer @ 0x1C00F6930
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0091454 (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00F6A64 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C00F6C10 (--8-$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ecx
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h]
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v9 = a1;
  v4 = a1[5];
  if ( *(int *)(v4 + 200) >= 30
    && (*(_BYTE *)(v4 + 18) & 4) == 0
    && PsGetCurrentProcessWin32Process(v4, a2) == *(_QWORD *)(a1[2] + 416LL) )
  {
    v11 = 0;
    if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=((__int64)a1 + 321, &v11) )
    {
      LOWORD(v11) = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==((char *)a1 + 87, &v11) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
        Win32FreePool(a1[35]);
        a1[35] = 0LL;
        *(_DWORD *)(a1[5] + 252LL) = 0;
      }
    }
    v6 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 8) = a2;
      if ( a2 )
      {
        LOWORD(v9) = 0;
        if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==((char *)a1 + 87, &v9) )
          *(_WORD *)(a1[5] + 42LL) = 676;
        v7 = 1;
      }
      else
      {
        *(_WORD *)(a1[5] + 42LL) |= 0x4000u;
        v7 = 0;
      }
      SetOrClrWF(v7, (__int64)a1, 0x201u, 1);
    }
  }
  return 1LL;
}
