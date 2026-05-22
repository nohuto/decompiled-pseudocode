/*
 * XREFs of ?GetInfo@GestureSession@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x18010A670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::GetInfo(__int64 a1, int a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rsi
  int v5; // edi
  int v6; // ebx

  if ( a2 )
  {
    if ( a2 <= 0 )
      return (unsigned int)-2147024809;
    if ( a2 > 4 )
    {
      switch ( a2 )
      {
        case 5:
          v3 = 168LL;
          goto LABEL_14;
        case 6:
          v3 = 416LL;
          goto LABEL_14;
        case 7:
          v3 = 248LL;
          goto LABEL_14;
      }
      if ( a2 != 8 )
      {
        if ( (unsigned int)(a2 - 9) <= 3 )
        {
          v3 = 480LL;
          goto LABEL_14;
        }
        return (unsigned int)-2147024809;
      }
    }
    v3 = 32LL;
LABEL_14:
    v4 = (_DWORD *)(v3 + a1);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + a1) + 40LL))(v3 + a1);
    if ( v5 >= 0 )
    {
      v6 = ~v4[2];
      *(_DWORD *)(a1 + 16) &= (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4) | v6;
    }
    return (unsigned int)v5;
  }
  return 1LL;
}
