/*
 * XREFs of NVMeReenumerateNameSpaceRescan @ 0x1C0007308
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     NVMeIsLunActive @ 0x1C0012B58 (NVMeIsLunActive.c)
 */

void __fastcall NVMeReenumerateNameSpaceRescan(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r10d
  __int64 v6; // rsi
  unsigned int i; // edi
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r9
  int v13; // edi
  _DWORD v14[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+80h] [rbp+17h]

  if ( (_DWORD)a3 )
  {
    v5 = 1;
    if ( (_DWORD)a3 != 1 || a4 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 3724), 3u);
      if ( (_DWORD)a3 == 1
        && a4
        && a4 <= (unsigned int)a2
        && (v6 = a4 - 1, (unsigned __int8)NVMeIsLunActive(*(_QWORD *)(a1 + 8 * v6 + 1640), a2, a3)) )
      {
        for ( i = 0; i < 0x14; ++i )
        {
          StorPortNotification(4101LL, a1, v5, *(_QWORD *)(a1 + 8 * v6 + 1640));
          StorPortExtendedFunction(81LL, a1, 100000LL, v8);
          v5 = 1;
        }
      }
      else
      {
        v10 = 0;
        v14[0] = v5;
        v14[1] = 4;
        v15 = 0LL;
        do
        {
          StorPortNotification(4101LL, a1, 2LL, v14);
          StorPortExtendedFunction(81LL, a1, 100000LL, v11);
          ++v10;
        }
        while ( v10 < 0x14 );
      }
      StorPortNotification(7LL, a1, 0LL, v9);
      *(_DWORD *)(a1 + 20) &= ~0x100u;
      StorPortResume(a1);
      v13 = 0;
      while ( 1 )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, v12);
        if ( (*(_DWORD *)(a1 + 3724) & 8) == 0 )
          break;
        if ( (unsigned int)++v13 >= 0x44C )
        {
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3724), 3u);
          StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
          return;
        }
      }
    }
  }
}
