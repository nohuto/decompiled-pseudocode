/*
 * XREFs of SetDialogPointer @ 0x1C00D6A20
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C001C5B0 (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00D6B50 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C00D6D00 (--8-$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int16 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  __int16 v8; // r9
  int v9; // ecx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h]
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = a2;
  v11 = a1;
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(int *)(v4 + 200) >= 30
    && (*(_BYTE *)(v4 + 18) & 4) == 0
    && PsGetCurrentProcessWin32Process(v4, a2) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800) == 0 )
  {
    v13 = 0;
    if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(a1 + 321, &v13)
      && (LOWORD(v13) = v5, (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v13)) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    }
    else
    {
      v7 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
      if ( v7 )
      {
        *(_QWORD *)(v7 + 8) = a2;
        if ( a2 )
        {
          LOWORD(v11) = v8;
          if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 87, &v11) )
            *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = 676;
          v9 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) |= 0x4000u;
          v9 = 0;
        }
        SetOrClrWF(v9, a1, 0x201u, 1);
      }
    }
  }
  return 1LL;
}
