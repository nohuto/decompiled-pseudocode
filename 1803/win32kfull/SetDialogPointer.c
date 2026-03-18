/*
 * XREFs of SetDialogPointer @ 0x1C00F1B10
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C006CD60 (--8-$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C0070C58 (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00F1C38 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
    && PsGetCurrentProcessWin32Process(v4) == *(_QWORD *)(a1[2] + 416LL) )
  {
    v11 = 0;
    if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=((__int64)a1 + 293, &v11) )
    {
      LOWORD(v11) = 0;
      if ( tagWND::RedirectedFieldfnid<unsigned short>::operator==((__int64)a1 + 63, &v11) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
        Win32FreePool(a1[34]);
        a1[34] = 0LL;
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
        if ( tagWND::RedirectedFieldfnid<unsigned short>::operator==((__int64)a1 + 63, &v9) )
          *(_WORD *)(a1[5] + 42LL) = 676;
        v7 = 1;
      }
      else
      {
        *(_WORD *)(a1[5] + 42LL) |= 0x4000u;
        v7 = 0;
      }
      SetOrClrWF(v7, (__int64)a1, 513, 1);
    }
  }
  return 1LL;
}
