/*
 * XREFs of ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C00E1164
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@G@Z @ 0x1C00E09C8 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 */

__int64 __fastcall xxxDispBrokerSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        int a3,
        int a4,
        bool a5)
{
  __int64 v6; // rsi
  unsigned int v9; // ebx
  __int64 result; // rax
  _DWORD *v11; // rdi
  int v12; // ebx
  _DWORD v13[20]; // [rsp+20h] [rbp-88h] BYREF

  v6 = a1;
  v9 = 200 * a1 + 80;
  if ( v9 >= 0x7FFF )
    return 2147483653LL;
  v11 = Win32AllocPoolWithQuotaZInit(v9, 0x44535042u);
  memset(v13, 0, 0x48uLL);
  v11[19] = a5;
  v11[16] = v6;
  v11[17] = a3;
  v11[18] = a4;
  memmove(v11 + 20, a2, 200 * v6);
  v12 = DispBroker::DispBrokerClient::SyncMessage<8>(
          (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
          (__int64)v11,
          (__int64)v13,
          (unsigned __int16)v9 - 80);
  Win32FreePool((__int64)v11);
  result = v13[16];
  if ( v12 < 0 )
    return (unsigned int)v12;
  return result;
}
