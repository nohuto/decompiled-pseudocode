/*
 * XREFs of sub_18006CF40 @ 0x18006CF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_180005D10 @ 0x180005D10 (sub_180005D10.c)
 *     sub_18006D08C @ 0x18006D08C (sub_18006D08C.c)
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     sub_180086E94 @ 0x180086E94 (sub_180086E94.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

void __fastcall __noreturn sub_18006CF40(__int64 a1)
{
  int v2; // eax
  BOOL v3; // esi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  int v7; // edi
  signed int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  int v13; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  v14 = 2;
  ZwSetInformationThread(-2LL, 3LL, &v14);
  while ( *(_DWORD *)(a1 + 328) )
  {
    v2 = ZwWaitForSingleObject(*(_QWORD *)(a1 + 128), 0LL, (a1 + 344) & -(__int64)(*(_QWORD *)(a1 + 344) != 0LL));
    v3 = v2 == 258 || !v2 && (*(_BYTE *)(a1 + 332) & 2) != 0;
    v4 = sub_18006D08C(a1, v3);
    v6 = *(_DWORD *)(a1 + 332);
    v7 = v4;
    if ( (v6 & 1) != 0 && v4 >= 0 && !v3 )
    {
      v10 = sub_18006D08C(a1, 1LL);
      v6 = *(_DWORD *)(a1 + 332);
      v7 = v10;
    }
    if ( (v6 & 4) != 0 || (v6 & 1) != 0 )
    {
      sub_180087200(a1, 0LL);
      v11 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 144) = 0LL;
      v12 = sub_180004BA8(a1, 0LL, 0, 0);
      *(_DWORD *)(a1 + 40) = v12;
      v7 = v12;
      if ( v12 >= 0 )
      {
        ZwClose(v11);
        v13 = *(_DWORD *)(a1 + 332);
        if ( (v13 & 1) != 0 )
        {
          sub_180005D10(a1, 1u, 0);
          v13 = *(_DWORD *)(a1 + 332);
        }
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 332);
        *(_QWORD *)(a1 + 144) = v11;
        if ( (v13 & 4) != 0 )
          v7 = 0;
      }
      v6 = v13 & 0xFFFFFFFE;
      *(_DWORD *)(a1 + 332) = v6;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v6 &= ~0x10u;
      *(_DWORD *)(a1 + 332) = v6;
      if ( *(_QWORD *)(a1 + 144) )
      {
        LOBYTE(v5) = 1;
        sub_180087200(a1, v5);
        v6 = *(_DWORD *)(a1 + 332);
      }
    }
    if ( (v6 & 6) != 0 )
    {
      *(_DWORD *)(a1 + 332) = v6 & 0xFFFFFFF9;
      ZwSetEvent(*(_QWORD *)(a1 + 136), 0LL);
    }
    if ( v7 < 0 )
      sub_180086E94(a1);
  }
  sub_18006D08C(a1, 1LL);
  v8 = sub_180087200(a1, 0LL);
  ZwClose(*(_QWORD *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0xC0070000;
  v9 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 40) = v8;
  ZwSetEvent(v9, 0LL);
  sub_1800874F8(a1);
  RtlExitUserThread(0LL);
}
