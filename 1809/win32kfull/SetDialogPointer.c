/*
 * XREFs of SetDialogPointer @ 0x1C00E6FD0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C00AD82C (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00E7108 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     ??8?$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z @ 0x1C00E72C0 (--8-$RedirectedFieldfnid@G@tagWND@@QEBAE$$QEAG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int16 v5; // r9
  __int64 v6; // rax
  __int16 v7; // r9
  int v8; // ecx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(int *)(v4 + 200) >= 30
    && (*(_BYTE *)(v4 + 18) & 4) == 0
    && PsGetCurrentProcessWin32Process(v4) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800) == 0 )
  {
    v12 = 0;
    if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(a1 + 305, &v12)
      && (LOWORD(v12) = v5, (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 63, &v12)) )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("MSRC59810:cbWndServerExtra not 0 with FNID = 0");
    }
    else
    {
      v6 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
      if ( v6 )
      {
        *(_QWORD *)(v6 + 8) = a2;
        if ( a2 )
        {
          LOWORD(v10) = v7;
          if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator==(a1 + 63, &v10) )
            *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = 676;
          v8 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) |= 0x4000u;
          v8 = 0;
        }
        SetOrClrWF(v8, a1, 0x201u, 1);
      }
    }
  }
  return 1LL;
}
