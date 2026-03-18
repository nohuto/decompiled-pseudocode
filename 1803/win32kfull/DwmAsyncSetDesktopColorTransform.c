/*
 * XREFs of DwmAsyncSetDesktopColorTransform @ 0x1C02418A0
 * Callers:
 *     NtUserSetDesktopColorTransform @ 0x1C01F4DE0 (NtUserSetDesktopColorTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncSetDesktopColorTransform(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _DWORD v14[40]; // [rsp+20h] [rbp-79h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v14, 0, 0x98uLL);
    v7 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v14[13] = *(_OWORD *)a3;
    LOWORD(v14[1]) = 0x8000;
    v8 = *(_OWORD *)(a3 + 32);
    v9 = *(_DWORD *)(a3 + 96);
    *(_OWORD *)&v14[17] = v7;
    v14[0] = 9961584;
    v10 = *(_OWORD *)(a3 + 48);
    *(_OWORD *)&v14[21] = v8;
    v14[10] = 1073741934;
    v11 = *(_OWORD *)(a3 + 64);
    *(_OWORD *)&v14[25] = v10;
    *(_QWORD *)&v14[11] = a2;
    v12 = *(_OWORD *)(a3 + 80);
    *(_OWORD *)&v14[29] = v11;
    v14[37] = v9;
    *(_OWORD *)&v14[33] = v12;
    EtwUpdateEvent(0LL);
    v6 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v6;
}
