/*
 * XREFs of DrvIsExternalMonitorActive @ 0x1C00051F0
 * Callers:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0005158 (UpdateExternalMonitorConnectedStatus.c)
 * Callees:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C009ED30 (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C009EE44 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvIsExternalMonitorActive(_BYTE *a1)
{
  int v2; // ebx
  unsigned int v3; // edx
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // eax
  _BYTE v8[400]; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int v9; // [rsp+1B0h] [rbp-28h]
  __int64 v10; // [rsp+1B8h] [rbp-20h]

  memset(v8, 0, sizeof(v8));
  v9 = 0;
  v10 = 0LL;
  *a1 = 0;
  v2 = QDC_AUTO_BUFFERS::Fill((QDC_AUTO_BUFFERS *)v8, 2u, 0LL);
  if ( v2 >= 0 )
  {
    v3 = 0;
    if ( v9 )
    {
      while ( 1 )
      {
        v4 = 200LL * v3;
        v5 = *(_QWORD *)(v4 + v10);
        if ( v5 < 0 && (v5 & 0x1000000000000000LL) == 0 && (v5 & 0x800000000000000LL) == 0 )
        {
          v6 = *(_DWORD *)(v4 + v10 + 80);
          if ( v6 != 0x80000000 && v6 != 11 && v6 != 13 )
            break;
        }
        if ( ++v3 >= v9 )
          goto LABEL_10;
      }
      *a1 = 1;
    }
  }
LABEL_10:
  QDC_AUTO_BUFFERS::Free((QDC_AUTO_BUFFERS *)v8);
  return (unsigned int)v2;
}
